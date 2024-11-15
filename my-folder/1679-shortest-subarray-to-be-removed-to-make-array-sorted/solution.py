class Solution(object):
    def findLengthOfShortestSubarray(self,arr):
        n = len(arr)
        left, right = 0, n - 1

        # Find the longest non-decreasing prefix
        while left < n - 1 and arr[left] <= arr[left + 1]:
            left += 1

        # If the whole array is non-decreasing
        if left == n - 1:
            return 0

        # Find the longest non-decreasing suffix
        while right > 0 and arr[right] >= arr[right - 1]:
            right -= 1

        # Minimum length to remove
        result = min(n - left - 1, right)  # Remove prefix or suffix

        # Try to merge prefix and suffix
        i, j = 0, right
        while i <= left and j < n:
            if arr[i] <= arr[j]:
                result = min(result, j - i - 1)
                i += 1
            else:
                j += 1

        return result

        
