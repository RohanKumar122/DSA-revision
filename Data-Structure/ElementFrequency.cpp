// Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
// Output: 3

#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>

using` namespace std;

int initialPivot(int arr[],int n,int t){
	// int n =sizeof(arr)/sizeof(arr[0]); 
	int s =0;
	int e=n-1;
	int mid =s+(e-s)/2;
	int initial =-1;

	while(s<=e){
		if(arr[mid]==t){
			initial =mid;
			e =mid-1;
		}
		else if(arr[mid]<t){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	// cout<< initial;
	return initial;
}


int finalPivot(int arr[],int n,int t){
	// int n =sizeof(arr)/sizeof(arr[0]);
	int s =0;
	int e=n-1;
	int mid =s+(e-s)/2;
	int final=-1;

	while(s<=e){
		if(arr[mid]==t){
			final =mid;
			s=mid+1;
		}
		else if(arr[mid]<t){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return final;
}

int Elementfrequency(int arr[], int n, int t) {
    int initial = initialPivot(arr, n, t);
    if (initial == -1) {
        return -1;
    }
    int final = finalPivot(arr, n, t);
    return final - initial + 1;
}

int main(){
	
	int arr[]={4, 4, 8, 8, 8, 15, 16, 23, 23, 42};
	int n =sizeof(arr)/sizeof(arr[0]);
	int t =42;
	cout<<Elementfrequency(arr, n,t);

	return 0;
}