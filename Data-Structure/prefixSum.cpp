#include<iostream>
#include<vector>
using namespace std;

const int N =1e5+10;
int pf[N]={0};

int arr[N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		pf[i]=pf[i-1]+arr[i];
	}

	int q;
	cin>>q;
	while(q--){
		int l , r;
		cin >>l>>r;
		long long sum=0;
		// for(int i=l;i<=r;i++){
		// 	sum+=arr[i];
		// }
		// cout<<sum<<endl;
		cout<<pf[r]-pf[l-1]<<endl; // O(N)+O(Q) =10^5

	

	}
	// return 0;
}