//  L-6
#include<iostream>
#include<vector>
using namespace std;

void subsequence(int i,vector<int> arr,vector<int> ds,int n){
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

void subsequence_reverse(int i,vector<int> arr,vector<int> ds,int n){
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


void subsequence_sum(int i,vector<int> arr,vector<int>ds ,int sum,int target,int n){
	if(i==n){
		// cout<<sum<<endl;
		if(sum==target){
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
	sum+=arr[i];
	ds.pop_back();
}

int main(){
	int n=5;
	vector<int> arr={3,2,1,5,7};
	vector<int> ds;
	int sum=0;
	int target=5;
	
	subsequence(0,arr,ds,n);
	// subsequence_reverse(0,arr,ds,n);
	// subsequence_sum(0,arr,ds,0,target,n);

	return 0;
}