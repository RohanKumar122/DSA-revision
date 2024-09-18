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

// ------------------------------------------reverse Array----------------------------------

void swap(int i,int j,int arr[]){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}


// Parameterised Recursion 
void reverseArray(int i,int j,int arr[],int n){
	if(i>=j){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		return;
	}
	swap(i,j,arr);
	reverseArray(i+1,j-1,arr,n);
}

// void reversArray_functional(int index,int arr[],int n,vector<int> ds){
// 	if(index==n){
// 		for(auto i:ds){
// 			cout<<i<<" ";
// 		}
// 		return ;
// 	}
	
// 	reversArray_functional(index+1,arr,n,ds);
// 	ds.push_back(arr[index]);

// }

void reversArray_functional2(int i,int j,int arr[],int n){
	if(i>=j){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		return ;
	}
	swap(i,j,arr);
	reversArray_functional2(i+1,j-1,arr,n);
}

int palindrom(int n){
	int rev=0;
	while(n>0){
		rev =(rev*10)+(n%10);
		n=n/10;
	}

	return rev;
}


string palindromRecursion(int i,int j,string s){
	if(i>=j){
		return "String is Palindrom";
	}
	if(s[i]!=s[j]){
		return "String is not Palindrom";
	}
	palindromRecursion(i+1,j-1,s);
	return "String is Palindrom";
}

int main(){
	int n =5;
	int arr[5]={1,2,3,4,5};
	vector<int>ds;
	// -------print name 5 times

	// printname(n);

	//---------print 1 to 5
	// printseries(5);

	//---------print 5 to 1
	// reverseSeries(5);

	// ----------factorial n!
	// cout<<factorial(3);

	// -----------fibonacii 
	// cout<<fibonacii(7);

	// ------------1toN using backtrack
	// backtrack1toN(5);

	// -----------Series Sum
	// cout<<SeriesSum(3);

	// ------- Series sum striver
	// SeriesSumStriver(2,0);

 	// ------------factorial by parameterised recursion
	// factorial_parameterised(6,1);

	
	// reverseArray(0,4,arr,5);
	// cout<<reversArray_functional(0,arr,5,ds); // fix this


	// --------------- reverse array
	// reversArray_functional2(0,4,arr,5);

	//-----------------Int Palindrom
	// cout<<palindrom(21213);

	//------------------String Palindrom
	// string s="MADAM";
	// cout<<s[1];


	// cout<<palindromRecursion(0,4,"AMNSS");

	return 0;
}