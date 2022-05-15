#include<iostream>
using namespace std;

int main(){
	
	int n;
    cin>>n;

int i = 1;

while(i<=n){
	int j = 1;
	//int value = i;
	while(j<=i){//To make triangular pattern upward
	/*
	1
    23
    345
    4567
    56789*/

		cout<<i+j-1;//2nd way
	//	value+=1;
		j=j+1;

	}
	cout<<endl;
	i+=1;
}



return 0;
}

