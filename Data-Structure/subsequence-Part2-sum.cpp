//  L-7 Subsequence sum
#include<iostream>
#include<vector>
using namespace std;

void subsequence_sum(int i,vector<int> arr,vector<int> ds,int n,int sum, int target){
	if(i==n){
		if(sum==target){
		for(auto it:ds){
			cout<<it<<" ";
		}
		cout<<endl;	
	}
	return; 
	}
	ds.push_back(arr[i]);
	sum+=arr[i];
	subsequence_sum(i+1,arr,ds,n,sum,target);
	
	sum-=arr[i];
	ds.pop_back();
	subsequence_sum(i+1,arr,ds,n,sum,target);
}


int subsequence_sum_count(int i,vector<int> arr,vector<int> ds,int n,int sum, int target){
	if(i==n){
		if(sum==target){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	ds.push_back(arr[i]);
	sum+=arr[i];
	int l=subsequence_sum(i+1,arr,ds,n,sum,target);
	
	sum-=arr[i];
	ds.pop_back();
	int r =subsequence_sum(i+1,arr,ds,n,sum,target);

	return l+r;
}

int main(){
	// int n;
	vector<int> arr={3,2,1};
	vector<int> ds;
	int target=3;
	// cout<<"Hii";
	cout<<subsequence_sum_count(0,arr,ds,3,0,target);
	cout<<endl<<"done";
	return 0;
}