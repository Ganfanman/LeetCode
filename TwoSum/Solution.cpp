#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {
                for (int i = 0; i < nums.size(); i++)
                {
                    for (int j = i + 1; j < nums.size(); j++)
                    {
                            if (nums[i] + nums[j] == target)
                            {
                                vector<int> output = {i, j};
                                return output;
                            }
                    }
                }
                vector<int> noutput = {-1, -1};
                return noutput;
        }
};

int main()
{
    vector<int> input = {3,2,4};
    Solution so;
    vector<int> ouput = so.twoSum(input, 6);
    for (int i : ouput)
    {
        cout<< i <<endl;
    }

    return 0;
}
