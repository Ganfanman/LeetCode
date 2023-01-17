#include <iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = 0;
        string a = "";
        for(int j = 0; j <= 200; j++)
        {
            for(int i = 0; i <= strs.size() - 1; i++)
            {
                if(strs[i] == "")
                {
                    return "";
                }
                else if(j >= strs[0].size() || j >= strs[i].size())
                {
                    return a;
                }else if(strs[0][j] != strs[i][j])
                {
                    return a;
                }
            }
            a.push_back(strs[0][j]);
        }
        return a;
    }
};
