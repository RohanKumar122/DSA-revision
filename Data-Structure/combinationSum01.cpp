#include<iostream>
#include<vector>
using namespace std;


vector combinationSum(int i,vector<int>arr,vector<int>ds,vector<vector<int>> ans,int target,int n){
	if(i==n){
		if(target==0){
			for(auto it:ds){
				ans.push_back(ds);
				return 0;

			} 
			cout<<endl;
			return;
		}

	}
		ds.push_back(arr[i]);
		combinationSum(i+1,arr,ds,ans,target-arr[i],n);
		ds.pop();
		combinationSum(i+1,arr,ds,ans,target-arr[i],n);

		return ans;
}


int main(){
	vector<int> arr ={2,3,4,6,7};
	int n =5;
	vector<int> ds;
	vector<vector<int>> ans;
	int target=7;
	combinationSum(0,arr,ds,ans,target,n);
	return 0;
}