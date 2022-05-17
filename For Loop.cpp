#include<iostream>
using namespace std;

int main(){
	//for loop
	int n ;
	cout<<"Enter value"<<endl;
	cin>>n;
	
	/*cout<<"Print value from 1 to "<<n<<endl;
	
	for(int i=1;i<=n;i++){
		cout<<i<<endl;
	}
	*/
	
	
/*	int sum = 0;
	
	for(int i=1;i<=n;i++){//Sum upto n
		sum +=i;
	}
	cout<<sum;*/
	
	//Fibonacci Series

/*	int a = 0;
	int b = 1;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=n;i++){
		int nxtnum = a+b;
		cout<<nxtnum<<" ";
		a=b,b=nxtnum;//b value goes to a , sum value goes to b this is in same order
		nxtnum+=1;
	}*/
	
	//Prime number
	
	bool isPrime = 1;//We assume it if prime then 1
	for(int i=2;i<n;i++){
		if(n%i==0){
			isPrime  = 0 ;//But if 0 came here then it is non prime.
	        break;        //We connect remainder 0 to boolean 0
		}
	}
	if(isPrime == 0){
		cout<<"Non prime"<<endl;
	}
	else if(isPrime == 1){
		cout<<"Prime"<<endl;
	}
	
return 0;
}
