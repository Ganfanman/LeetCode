class Solution {
public:
    bool isPalindrome(string s) {
        int len{0};
        bool flag{true};
        while(s[len])
        {
            len++;
        }

        for(int i = 0; i < len; i++)
        {
            if(s[i] < 48 || (s[i] > 57 && s[i] < 65) || (s[i] > 90 && s[i] < 97) || s[i] > 122)
            {
                s.erase(i, 1); 
                i--;
                len--;
            }
        }

        for(int j = 0; j < len/2; j++)
        {
            if(s[j] != s[len - 1 - j])
            {
                if((s[j]) && (s[j] - s[len-1-j] != 32) && (s[j] - s[len-1-j] != -32))
                {
                    flag = false;
                }else if(s[j] < 65 || s[len-1-j] < 65)
                {
                    flag = false;
                }
            }
        }

        return flag;

    }
};
