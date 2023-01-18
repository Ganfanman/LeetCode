class Solution {
public:
    int climbStairs(int n) {
        int count = 0;
        for(int i = 1; i <= n/2; i++)
        {
            long long int mm = n - i;
            long long int nn = 1;
            for(int m = 1; m < i; m++)
            {
                mm = mm*(n - i - m)/m;
            }
            count += (mm/i);
        }

        return count+1;
    }
};
