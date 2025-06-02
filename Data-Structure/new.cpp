#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v ={3,4,6,7,2};

	sort(v.begin(),v.end());

	for(auto i:v){
		cout<<i<<" ";
	}



	return 0;
}
	