#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void NGR(vector<int>& arr, vector<int>& v, stack<int>& st, int n) {
    for (int i = 2 * n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i % n]) {
            st.pop();
        }
        if (i < n) {
            if (st.empty()) {
                v.push_back(-1);
            } else {
                v.push_back(st.top());
            }
        }
        st.push(arr[i % n]);
    }
}

int main() {
    stack<int> st;
    vector<int> v;
    int n = 4;
    vector<int> arr = {1, 3, 2, 4};  // Use vector instead of array

    NGR(arr, v, st, n);

    for (auto a : v) {
        cout << a << " ";
    }

    return 0;
}
