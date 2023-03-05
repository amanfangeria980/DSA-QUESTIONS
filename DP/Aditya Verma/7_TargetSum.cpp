int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(auto it : nums)sum+=it;
        if((sum-target)%2==1 || (target>sum))return 0;
        sum=sum-target;
        sum/=2;
        int w=sum;
        vector<vector<int>> t(n+1,vector<int>(w+1));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0)t[i][j]=0;
                if(j==0)t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][w];
}