class Solution {
public:
    string addBinary(string a, string b) {
        int len_a = a.length(), len_b = b.length();
        int m;
        string n = "";
        if (len_a >= len_b)
        {
            m = len_a;
            for(int i = 0; i < (len_a - len_b); i++)
            {
                b = "0" + b;
            }
        }else
        {
            m = len_b;
            for(int i = 0; i < (len_b - len_a); i++)
            {
                a = "0" + a;
            }
        }

        int j = m - 1;
        bool flag = false;
        while(j >= 0)
        {
            if(a[j] != b[j])
            {
                if(flag)
                {
                    n = "0" + n;
                }else
                {
                    n = "1" + n;
                }
                
            }else if(a[j] == '0')
            {
                if(flag)
                {
                    n = "1" + n;
                    flag = false;
                }else
                {
                    n = "0" + n;
                }
            }else
            {
                if(flag)
                {
                    n = "1" + n;
                }else
                {
                    n = "0" + n;
                    flag = true;
                }
            }
            j--;
        }
        if(flag)
        {
            n = "1" + n;
        }
        return n;
    }
};
