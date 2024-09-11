#include<iostream>
#include<vector>
using namespace std;

void substring(int index,vector<int> v,vector<int> ds,int n){
	if(index==n){
		for(auto i:ds){
			cout<<i<<" ";
		}
		ds.push_back(v[index]);
		substring(index+1,v,ds,n);
		ds.pop_back(v[index]);
	}
	// return ds;

}

int main(){
	vector<int> v={2,34,1};
	int n=3;
	vector<int>ds;
	substring(0,v,ds,n);
	return 0;


}