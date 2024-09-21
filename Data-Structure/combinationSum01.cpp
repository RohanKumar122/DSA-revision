//  Combination Sum - I

#include<iostream>
#include<vector>
using namespace std;

void combination_sum(int i,vector<int> &arr,vector<int>&ds ,int target,int n,vector<vector<int>> &ans){
	if(i==n){
		if(target==0){
			ans.push_back(ds);
		}
		return;
	}
	if(arr[i]<=target){
		ds.push_back(arr[i]);
		combination_sum(i,arr,ds,target-arr[i],n,ans);
		ds.pop_back();
	}
	combination_sum(i+1,arr,ds,target,n,ans);
}


int main(){
	int i=0;
	int n=3;
	vector<int>arr={1,2,3};
	int target=4;
	int sum=0;
	vector<int> ds;
	vector<vector<int>> ans;

	combination_sum(i,arr,ds,target,n,ans);
	for(auto i:ans){
		for(auto it:i){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}