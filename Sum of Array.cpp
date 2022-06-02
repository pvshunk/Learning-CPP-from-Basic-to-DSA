#include<iostream>
using namespace std;

int TotSum(int arr[],int size){//Sum of elements of array functions
	int sum = 0;
	
	for(int i=0;i<size;i++){
		sum = sum+arr[i];
	}
	return sum;
}

int main(){//Sum of elements in array

int size;
cin>>size;

int arr[5];

for(int i= 0;i<size;i++){
	cin>>arr[i];
}
cout<<TotSum(arr,size);


return 0;
}

