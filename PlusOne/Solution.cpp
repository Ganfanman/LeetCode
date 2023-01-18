class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(i >= 0 && digits[i] == 9)
        {
            digits[i] = 0;
            i--;
        }
        if(i < 0)
        {
            digits[0] = 1;
            digits.push_back(0);
        }else
        {
            digits[i] += 1;
        }
        return digits;
    }
};
