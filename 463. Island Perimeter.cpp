class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=0;i<grid.size();++i)
            for(int j=0;j<grid[0].size();++j)
                if(grid[i][j]==1)
                    res += 4-2*(i>0&&grid[i-1][j]==1)-2*(j>0&&grid[i][j-1]==1);
        return res;
    }
};
