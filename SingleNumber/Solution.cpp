class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int data{0};
        std::sort(nums.begin(), nums.end());
        for(int i{1}; i < nums.size(); i+=2)
        {
            if(nums[i] != nums[i - 1])
            {
                data = nums[i-1];
                return data;
            }
        }
        data = nums[nums.size()-1];
        return data;
    }
};
