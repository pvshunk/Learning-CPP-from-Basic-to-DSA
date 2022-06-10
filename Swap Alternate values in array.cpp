#include<iostream>
using namespace std;

void Swapalternate(int arr[],int size){
	for(int i=0;i<size;i+=2){//Point is to increase i 2 times
		if(i+1<size){//Until elements is lower than size
        swap(arr[i],arr[i+1]);
		}
	}
}

void Printarr(int arr[],int size){//For print only updated array
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	cout<<endl;
}


int main(){//Swap Alternate values
	int size;
	
	int arr1[6]={1,2,3,4,5,6};
	int arr2[5]={9,8,7,6,5};
	
	Swapalternate(arr1,6);
	Swapalternate(arr2,5);
	
	Printarr(arr1,6);
	Printarr(arr2,5);

return 0;
}

