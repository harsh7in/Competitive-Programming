class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int rows=obstacleGrid.size();
        int cols=obstacleGrid[0].size();
        int dp[rows][cols];
        bool can=true;
        for(int i=0;i<cols;i++)
        {
            if(obstacleGrid[0][i]==1 && can)
                can=false;
            dp[0][i]=can?1:0;
                
        }
        can=true;
        for(int i=0;i<rows;i++)
        {
            if(obstacleGrid[i][0]==1 && can)
                can=false;
            dp[i][0]=can?1:0;
                
        }
        
        for(int i=1;i<rows;i++)
        {
            for(int j=1;j<cols;j++)
            {
                dp[i][j]=(obstacleGrid[i][j]==1)?0:(dp[i-1][j]+dp[i][j-1]);
            }
        }
        return dp[rows-1][cols-1];
    }
};