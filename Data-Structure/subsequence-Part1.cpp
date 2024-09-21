//  L-6
#include<iostream>
#include<vector>
using namespace std;

void subsequence(int i,vector<int> &arr,vector<int> &ds,int n){
	if(i==n){
		for(auto it:ds){
			cout<<it<<" ";
		}
		cout<<endl;
		return;
	}

	ds.push_back(arr[i]);
	subsequence(i+1,arr,ds,n);
	ds.pop_back();
	subsequence(i+1,arr,ds,n);
}

void subsequence_reverse(int i,vector<int> &arr,vector<int>& ds,int n){
	if(i==n){
		for(auto it:ds){
			if(ds.size()==0){
				cout<<"{}";
			}
			cout<<it<<" ";
		}
		cout<<endl;
		return;
	}

	
	subsequence_reverse(i+1,arr,ds,n);
	ds.push_back(arr[i]);
	
	subsequence_reverse(i+1,arr,ds,n);
	ds.pop_back();
}


void subsequence_sum(int i,vector<int> &arr,vector<int>&ds ,int sum,int target,int n){
	if(i==n){
		// cout<<sum<<endl;
		if(target==sum){
			for(auto it:ds){
				cout<<it<<" ";
			}
			cout<<endl;
			
		}
		return; 
	}
	
	subsequence_sum(i+1,arr,ds,sum,target,n);
	sum+=arr[i];
	ds.push_back(arr[i]);
	
	subsequence_sum(i+1,arr,ds,sum,target,n);
	sum-=arr[i];
	ds.pop_back();
}


int main(){
	int i=0;
	int n=3;
	vector<int>arr={1,2,3};
	int target=3;
	int sum=0;
	vector<int> ds;
	vector<vector<int>> ans;
	subsequence_sum(i,arr,ds,sum,target,n);

	return 0;
}


