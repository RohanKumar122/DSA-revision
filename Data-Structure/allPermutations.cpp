#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<vector<int>> returnAllPermutations(vector<int> ds, vector<vector<int>>& ans) {
    do {
        ans.push_back(ds);  // Add the current permutation
    } while (next_permutation(ds.begin(), ds.end()));  // Generate next permutation
    return ans;
}

// void Permutations(int i,  vector<int>& v, vector<int>& ds, vector<vector<int>>& ans, int n) {
//     if (i == n) {
//         ans.push_back(ds);  // Add current permutation
//         return;
//     }
//     ds.push_back(v[i]);
//     Permutations(i + 1, v, ds, ans, n);  // Include current element
//     ds.pop_back();
//     Permutations(i + 1, v, ds, ans, n);  // Exclude current element
// }


void Permutations(int i, vector<int>& v, vector<int>& ds, vector<vector<int>>& ans, int n) {
    if (i == n) {
        ans.push_back(ds);  // Add current permutation
        return;
    }
    for (int j = i; j < n; ++j) {
        swap(v[i], v[j]);  // Swap the current index with j
        ds.push_back(v[i]);  // Include the element in the current permutation
        Permutations(i + 1, v, ds, ans, n);  // Recurse for the next index
        ds.pop_back();  // Backtrack
        swap(v[i], v[j]);  // Backtrack the swap
    }
}

vector<vector<int>> returnAllPermutationsManual(vector<int> & v, vector<vector<int>>& ans) {
	vector<int>ds;
	int n=v.size();
	Permutations(0,v,ds,ans,n);
	return ans;
    
}


int main(){
	cout<<"All Permutations are: "<<endl;
	vector<int> v ={2,4,5};
	vector<int> v1 ={4,5,2};
	vector<vector<int>> ans;

	ans =returnAllPermutationsManual(v,ans);
	// ans=returnAllPermutations(v,ans);
	int cnt =0;
	for(auto a:ans){
		for(auto b:a){
			cout<<b<<" ";
		}
		cnt+=1;
		cout<<endl;
	}
	cout<<"Total count : "<<cnt<<endl;

	next_permutation(v1.begin(),v1.end());
	for(auto x:v1){
		cout<<x<<" ";
	}
	return 0;
}