#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.length();
        for (int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome(12321) << endl;
    return 0;
}
