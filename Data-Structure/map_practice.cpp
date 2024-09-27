#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
	cout<<"Hello"<<endl;
	map<int,string> mp;

	int arr[8]={1,2,4,5,2,3,4,6};
	mp[0]="Rohan";
	mp.insert({1,"Shyam"});
	for(auto i:mp){
		cout<<i.first<<" ";
		cout<<i.second<<endl;
	}

	int n =21;
	int* y=&n;
	cout<<y<<endl;

	// for(auto it:arr){
	// 	mp[it]=;
	// }


	return 0;
}