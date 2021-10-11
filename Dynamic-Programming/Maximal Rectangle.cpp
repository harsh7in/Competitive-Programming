class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
     
        int n=matrix.size();
        if(n==0)
            return 0;
        int m=matrix[0].size();
        int mat[n][m];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
            if(i==0)
                mat[i][j]=(matrix[i][j]=='0')?0:1;
            else
            {
                if(matrix[i][j]=='0')
                    mat[i][j]=0;
                else
                    mat[i][j]=mat[i-1][j]+1;
            }
            }
            
        vector<int> heights;
            for(int j=0;j<m;j++)
            {
                heights.push_back(mat[i][j]); 
            }
            
        vector<int> left(m),right(m);
        
        //left
        stack<int> s;
        for(int j=0;j<m;j++)
        {
            if(s.empty())
            {
                s.push(j);
                left[j]=0;
            }
            else
            {
                while(!s.empty() and heights[s.top()]>=heights[j])
                    s.pop();
                if(s.empty())
                    left[j]=0;
                else
                    left[j]=s.top()+1;
                s.push(j);
            }
        }
        while(!s.empty())
            s.pop();
        
        //right
        for(int j=m-1;j>=0;j--)
        {
            if(s.empty())
            {
                s.push(j);
                right[j]=m-1;
            }
            else
            {
                while(!s.empty() and heights[s.top()]>=heights[j])
                    s.pop();
                if(s.empty())
                    right[j]=m-1;
                else
                    right[j]=s.top()-1;
                s.push(j);
            }
        }

        int mx=0;
        for(int j=0;j<m;j++)
        {
            int cur=(right[j]-left[j]+1)*heights[j];
            mx=max(mx,cur);
        }
            
            cout<<mx;
            ans=max(ans,mx);
            
        }
        return ans;
    }
};