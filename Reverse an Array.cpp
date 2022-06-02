#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){//Function to Reverse Array
	
	int start = 0;
	int end = n-1;
	
	while(start<=end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[],int n){//Function to Print Array
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){//Reverse an Array
	int n;
	int arr1[5] = {8,6,4,2,0};
	int arr2[6] = {3,6,9,12,15,18};
	
	reverseArray(arr1,5);
	reverseArray(arr2,6);
	
	printArray(arr1,5);
	printArray(arr2,6);
	
return 0;
}

