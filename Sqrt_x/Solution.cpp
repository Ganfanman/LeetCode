class Solution {
public:
    int mySqrt(int x) {
        int i = x/2;
        if(x == 0)
        {
            return 0;
        }else if(x == 1)
        {
            return 1;
        }
        while(i > x/i)
        {
            i = i/2;
        }
        while(i <= x/i)
        {
            i++;
        }
        return i-1;
    }
};
