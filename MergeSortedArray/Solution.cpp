class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int num = m + n;
        if(m == 0)
        {
            nums1 = nums2;
        }else if(n != 0)
        {
            for(i; i < nums2.size(); i++)
            {
                bool flag = true;
                while(nums2[i]>=nums1[j] && j < m+n)
                {
                    if(j >= m)
                    {
                        nums1[j] = nums2[i];
                        j++;
                        flag = false;
                        break;
                    }
                    j++;
                }
                if(flag)
                {
                    int temp = num-1;
                    while(temp > j)
                    {
                        nums1[temp] = nums1[temp-1];
                        temp--;
                    }
                    nums1[j] = nums2[i];
                    m++;
                    cout << nums1[j] << " " << j << " " << i << endl;
                    //j++;
                }

            }
        }
    }
};
