#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int a = 0;
        for(int i = s.length() - 1; i >= 0; i--) 
        {
            if(s[i] == 'I') 
            {
                if(i == s.length()-1 || s[i+1] == 'I')
                {
                    a++;
                }else if(s[i + 1] == 'V' || s[i + 1] == 'X')
                {
                    a--;
                }
            }else if(s[i] == 'V')
            {
                a += 5;
            }else if(s[i] == 'X')
            {
                if(i == s.length()-1 || (s[i+1] != 'L' && s[i+1] != 'C'))
                {
                    a += 10;
                }else
                {
                    a -= 10;
                }
            }else if(s[i] == 'L')
            {
                a += 50;
            }else if(s[i] == 'C')
            {
                if(i == s.length()-1 || (s[i+1] != 'D' && s[i+1] != 'M'))
                {
                    a += 100;
                }else
                {
                    a -= 100;
                }
            }else if(s[i] == 'D')
            {
                a += 500;
            }else
            {
                a += 1000;
            }
        }
        return a;
    }
};
