// int numberOfCombinations(vector<int> &coins, int target) {
// 	int variant=coins.size();
// 	vector<vector<int>> t(variant+1,vector<int>(target+1));
// 	for(int i=0;i<variant+1;i++){
// 		for(int j=0;j<target+1;j++){
// 			if(i==0){
// 				t[i][j]=0;
// 			}
// 			if(j==0){
// 				t[i][j]=1;
// 			}
// 		}
// 	}
	
// 	for(int i=1;i<variant+1;i++){
// 		for(int j=1;j<target+1;j++){
// 			if(coins[i-1]<=j){
// 				t[i][j]=t[i][j-coins[i-1]]+t[i-1][j];
// 			}
// 			else{
// 				t[i][j]=t[i-1][j];
// 			}
// 		}
// 	}
// 	return t[variant][target];
// }