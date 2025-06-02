
// # Example 1:

// # Input: gain = [-5,1,5,0,-7]
// # Output: 1
// # Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

// # Input: gain = [-4,-3,-2,-1,4,3,2]
// # Output: 0
// # Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int final=0;
	int n=5;
	int arr[n]={-5,1,5,0,-7};

	int temp=0;
	int ans =0;
	vector<int> v ={0};

	for(int i=0;i<n;i++){
		
			temp+=arr[i];
			// cout<<temp;
			v.push_back(temp);
		
	}

	for(auto j:v){
		final=max(final,j);

	}

	cout<<final;

	return 0;
}