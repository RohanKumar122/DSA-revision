#include<iostream>
#include<vector>
#include<set>
using namespace std;

void using_recursion(int index,vector<int>& nums,vector<int>&ds,vector<vector<int>>&ans,int n){
	if(index==n){
		ans.push_back(ds);
		return;
	}
	ds.push_back(nums[index]);
	using_recursion(index+1,nums,ds,ans,n);
	ds.pop_back();
	using_recursion(index+1,nums,ds,ans,n);
}

vector<vector<int>> Subsets(vector<int> &nums){
	int n=nums.size();
	vector<vector<int>> ans;
	vector<int> ds;
	using_recursion(0,nums,ds,ans,n);   

	return ans;

}

int main(){
	vector<int> nums={1,1,3};
	vector<vector<int>> ans1=Subsets(nums);
	for(auto it:ans1){
		for(auto i:it){
			cout<<i<<" ";
		}
		cout<<endl;
	}

	cout<<"Working Perfect";
	return 0;
}