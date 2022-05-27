#include<iostream>
using namespace std;


int Fibonacci(int n){
	int a = 0;
	int b = 1;
	
	for(int i=2;i<n;i++){
		int sum = a+b;
		a=b,b=sum;
		
		cout<<sum<<" ";
		
	}
	return b;
}
int main(){
	
	int n;
	cin>>n;
	
	cout<<n<<"th term is "<<Fibonacci(n);
	
	

return 0;
}

