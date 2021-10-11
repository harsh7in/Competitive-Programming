class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int dp[n][m];
        
        for(int i=0;i<m;i++)
            dp[0][i]=(matrix[0][i]=='0')?0:1;
        for(int j=0;j<n;j++)
            dp[j][0]=(matrix[j][0]=='0')?0:1;
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]=='0')
                    dp[i][j]=0;
                else
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
            }
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mx=max(mx,dp[i][j]);
            }
        }
        cout<<mx;
        return mx*mx;
    }
};