class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        switch(numRows)
        {
            case 1:
                triangle = {{1}};
                break;
            case 2:
                triangle = {{1}, {1, 1}};
                break;
            default:
                triangle = {{1}, {1, 1}};
                for(int i = 3; i <= numRows; i++)
                {
                    vector<int> temp{1};
                    for(int j = 0; j < i - 2; j++)
                    {
                        temp.push_back(triangle[i-2][j]+triangle[i-2][j+1]);
                    }
                    temp.push_back(1);
                    triangle.push_back(temp);
                }
        }
        return triangle;
    }
};
