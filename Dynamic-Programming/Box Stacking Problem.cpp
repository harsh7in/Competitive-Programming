    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
    static bool cmp(tuple<int,int,int> &a,tuple<int,int,int> &b)
    {
        return (get<1>(a)*get<2>(a))>(get<1>(b)*get<2>(b));
    }
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
        vector<tuple<int,int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_tuple(height[i],(max(width[i],length[i])),(min(width[i],length[i]))));
            v.push_back(make_tuple(width[i],(max(height[i],length[i])),(min(height[i],length[i]))));
            v.push_back(make_tuple(length[i],(max(width[i],height[i])),(min(width[i],height[i]))));
        }
        sort(v.begin(),v.end(),cmp);
        // for(auto it:v)
        // cout<<get<0>(it)<<" "<<get<1>(it)<<" "<<get<2>(it)<<endl;
        
        int size=3*n;
        int dp[3*n];
        for(int i=0;i<3*n;i++)
        dp[i]=get<0>(v[i]);
        for(int i=1;i<size;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(get<1>(v[i]) < get<1>(v[j]) 
                && get<2>(v[i]) < get<2>(v[j]) 
                && dp[i]<(dp[j]+ get<0>(v[i])) )
                dp[i]=(dp[j]+ get<0>(v[i]));
            }
        }
        int mx=0;
        for(int i=0;i<3*n;i++)
        mx=max(mx,dp[i]);
        return mx;
    }