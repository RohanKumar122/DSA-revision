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

int factorial(int n){
	if(n==1 || n==0){
		return 1;
	}
	int ans =n*factorial(n-1);
	return ans;
}

void factorial_parameterised(int i, int fact){
	if(i==0 || i==1){
		cout<<fact;
		return ;
	}
	factorial_parameterised(i-1,fact*i);

}

int fibonacii(int n){
	if(n==0 ||n==1){
		return n;
	}
	return fibonacii(n-1)+fibonacii(n-2);
}

void backtrack1toN(int n){
	if(n==0){
		return;
	}
	backtrack1toN(n-1);
	cout<<n<<endl;;
}


//  Functional Recursion (returns value doesn't print)
int SeriesSum(int n){
	if(n==0)
		return 0;
	return n+SeriesSum(n-1);
}

//  parameterised recursion 
void SeriesSumStriver(int i,int sum){
	if(i<1){
		cout<<sum<<endl;
		return;
	}
	SeriesSumStriver(i-1,sum+i);
}

int main(){
	int n =5;
	// -------print name 5 times

	// printname(n);

	//---------print 1 to 5
	// printseries(5);

	//---------print 5 to 1
	// reverseSeries(5);

	// ----------factorial n!
	// cout<<factorial(5);

	// -----------fibonacii 
	// cout<<fibonacii(7);

	// ------------1toN using backtrack
	// backtrack1toN(5);

	// -----------Series Sum
	// cout<<SeriesSum(3);

	// ------- Series sum striver
	// SeriesSumStriver(2,0);

 	// ------------factorial by parameterised recursion
	factorial_parameterised(5,1);

	return 0;
}