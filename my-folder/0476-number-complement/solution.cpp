class Solution {
public:
    int findComplement(int num) {
        if (num == 0)
        {
            return 1;
        }
        else if (num == 1)
        {
            return 0;
        }
        string temp;
        while (num != 0)
        {

            int a = num % 2;
            num = num / 2;
            if (a == 0)
            {
                temp += '1';
            }
            else
            {
                temp += '0';
            }
        }
        int ans = 0;
        for (int i = 0; i < temp.length(); i++)
        {

            ans += pow(2, i) * (temp[i] - '0');
        }
        return ans;
    }

    
};
