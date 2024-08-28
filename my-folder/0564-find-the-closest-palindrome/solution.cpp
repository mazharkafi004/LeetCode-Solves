
class Solution {
public:
    string nearestPalindromic(string number) {
        int length = number.length();
        int middleIndex = length % 2 == 0 ? length / 2 - 1 : length / 2;
        long leftHalf = std::stol(number.substr(0, middleIndex + 1));
        
        vector<long> palindromeCandidates;
        palindromeCandidates.push_back(createPalindrome(leftHalf, length % 2 == 0));        // unchanged palindrome
        palindromeCandidates.push_back(createPalindrome(leftHalf + 1, length % 2 == 0));    // increment left half
        palindromeCandidates.push_back(createPalindrome(leftHalf - 1, length % 2 == 0));    // decrement left half
        palindromeCandidates.push_back(static_cast<long>(pow(10, length - 1)) - 1);         // lower boundary (e.g., 9999...)
        palindromeCandidates.push_back(static_cast<long>(pow(10, length)) + 1);             // upper boundary (e.g., 100...001)
        
        long smallestDifference = LONG_MAX;
        long closestPalindrome = 0;
        long originalNumber = stol(number);
        
        for (long candidate : palindromeCandidates) {
            if (candidate == originalNumber) continue;
            long currentDifference = abs(candidate - originalNumber);
            if (currentDifference < smallestDifference) {
                smallestDifference = currentDifference;
                closestPalindrome = candidate;
            } else if (currentDifference == smallestDifference) {
                closestPalindrome = min(closestPalindrome, candidate);
            }
        }
        
        return std::to_string(closestPalindrome);
    }
    

    long createPalindrome(long leftHalf, bool isEvenLength) {
        long palindrome = leftHalf;
        if (!isEvenLength) leftHalf /= 10;
        while (leftHalf > 0) {
            palindrome = palindrome * 10 + leftHalf % 10;
            leftHalf /= 10;
        }
        return palindrome;
    }
};

