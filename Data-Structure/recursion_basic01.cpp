#include<iostream>
#include<vector>
using namespace std;

void printname(int n){
	if(n==0){
		return;
	}
	cout<<"Rohan"<<endl;
	printname(n-1);
}

void printseries(int n){
	if(n==0){
		return;
	}
	printseries(n-1);
	cout<<n<<endl;
}

void reverseSeries(int n){
	if(n==0){
		return;
	}
	cout<<n<<endl;
	reverseSeries(n-1);
}

int permutation(int n){
	if(n==1 || n==0){
		return 1;
	}
	int ans =n*permutation(n-1);
	return ans;
}

int fibonacii(int n){
	if(n==0 ||n==1){
		return n;
	}
	return fibonacii(n-1)+fibonacii(n-2);
}

int main(){
	int n =5;
	// -------print name 5 times

	// printname(n);

	//---------print 1 to 5
	// printseries(5);

	//---------print 5 to 1
	// reverseSeries(5);

	// permutation n!
	// cout<<permutation(5);

	// fibonacii 
	cout<<fibonacii(7);



	return 0;
}