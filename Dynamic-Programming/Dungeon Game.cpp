class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        
        int rows=dungeon.size();
        int cols=dungeon[0].size();
        int dp[rows][cols];
        // bottom up dp 
        // if dp[i][j]>0 then we put their 0 shows that no energy is required 
        // we can not use that enegy in previous states thats why 0
        dp[rows-1][cols-1]=(dungeon[rows-1][cols-1]>0)?0:dungeon[rows-1][cols-1];
        for(int i=cols-2;i>=0;i--)
            dp[rows-1][i]=(dungeon[rows-1][i]+dp[rows-1][i+1])>0?0:(dungeon[rows-1][i]+dp[rows-1][i+1]);
        
        for(int j=rows-2;j>=0;j--)
            dp[j][cols-1]=(dungeon[j][cols-1]+dp[j+1][cols-1])>0?0:(dungeon[j][cols-1]+dp[j+1][cols-1]);
        
        for(int i=rows-2;i>=0;i--)
        {
            for(int j=cols-2;j>=0;j--)
            {
                dp[i][j]=((max(dp[i+1][j],dp[i][j+1])+dungeon[i][j])>0)?0:(max(dp[i+1][j],dp[i][j+1])+dungeon[i][j]);
            }
        }
        return abs(dp[0][0])+1;
    }
};