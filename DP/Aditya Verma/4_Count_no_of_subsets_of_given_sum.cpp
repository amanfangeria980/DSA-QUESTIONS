// Case including multiple 0's in array covered
// -> No. of subsets codestudio

// #include <bits/stdc++.h> 
// int findWays(vector<int> &arr, int w)
// {
//     int n=arr.size();
//     vector<vector<int>> t(n+1,vector<int>(w+1));
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<w+1;j++){
//             if(i==0)t[i][j]=0;
//             if(j==0)t[i][j]=1;
//         }
//     }

//     for(int i=1;i<n+1;i++){
//         for(int j=0;j<w+1;j++){
//             if(arr[i-1]<=j){
//                 t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
//             }
//             else{
//                 t[i][j]=t[i-1][j];
//             }
//         }
//     }
//     return t[n][w];
// }

//Perfect Sum Problem GFG: alternate approach

	// int perfectSum(int arr[], int n, int sum)
	// {
	//     int mod=1e9+7;
	//     int zero=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(arr[i]==0)
    //         zero++;
    //     }
	//     int w=sum;
	//     int t[n+1][w+1];
	//     for(int i=0;i<n+1;i++){
	//         for(int j=0;j<w+1;j++){
	//             if(i==0)t[i][j]=0;
	//             if(j==0)t[i][j]=1;
	//         }
	//     }
	//     for(int i=1;i<n+1;i++){
	//         for(int j=1;j<w+1;j++){
	//             if(arr[i-1]<=j && arr[i-1]!=0){
	//                 t[i][j]=(t[i-1][j-arr[i-1]]+t[i-1][j])%mod;
	//             }
	//             else{
	//                 t[i][j]=t[i-1][j]%mod;
	//             }
	//         }
	//     }
	//     return t[n][w]*pow(2,zero);
	// }