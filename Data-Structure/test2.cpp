// Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
// Output: 3

#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;

// void initialPivot(int &arr,int t){
// 	int n =sizeof(arr)/sizeof(arr[0]);
// 	int s =0;
// 	int e=n-1;
// 	int mid =s+(e-1)/2;
// 	int initial;

// 	while(s<=e){
// 		if(arr[mid]==t){
// 			initial =mid;
// 			e =mid-1;

// 		}
// 		else if(arr[mid]<t){
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid-1;

// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	cout<< initial;
// }

// int finalPivot(int &arr,int t){
// 	int n =sizeof(arr)/sizeof(arr[0]);
// 	int s =0;
// 	int e=n-1;
// 	int mid =s+(e-1)/2;
// 	int final;

// 	while(s<=e){
// 		if(arr[mid]==t){
// 			final =mid;
// 			s=mid+1;

// 		}
// 		else if(arr[mid]<t){
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid-1;

// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return final;
// }

int initialPivotV(vector<int > &v , int t){
	int s =0;
	int e=n-1;
	int mid =s+(e-1)/2;
	int initial;
}

int Elementfrequency(vector<int>&v ,int n,int t){
	int s =0;
	int e =n-1;
	int mid =s+(e-s)/2;
	
	int ans;

	while(s<=e){
		if(v[mid]==t){
			// // int i =initialPivot(arr,t);
			// // int f =finalPivot(arr,t);
			// // return f-i+1;
			// return mid;
			// cout<<initialPivot(arr,t);
			return mid;
		}
		else if(v[mid<t]){
			s=mid+1;
		}
		else{
			e=mid-1;

		}
		mid =s+(e-s)/2;
	}
	return -1;

}

int main(){
	vector<int> v ={4, 4, 8, 8, 8, 15, 16, 23, 23, 42};
	
	int n =v.size();
	int t =8;
	cout<<Elementfrequency(v, n,t);

	return 0;
}

for (int i  ->n){
	for(int j->n){
		 O(n)  
	}
}