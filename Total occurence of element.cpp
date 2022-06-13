#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	int ans = -1;

	int mid = start+(end-start)/2;

	while(start<=end){
		if(arr[mid] == key){
			ans = mid;
			end = mid-1;
		}
		else if(key>arr[mid]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = start+(end - start)/2;
	}
	return ans;
}

int lastocc(int arr[],int size,int key){

	int start = 0;
	int end = size-1;
	int ans ;
	int mid = start+(end - start)/2;

	while(start<=end){
		if(arr[mid] == key){
			ans = mid;
			start = mid+1;
		}
		else if(key>arr[mid]){
			start = mid+1;
		}
		else{//key<arr[mid]
			end = mid-1;
		}

		mid = start+(end - start)/2;
	}
	return ans;
}

int main(){
	
	int arr[10] = {0,0,1,1,2,3,4,4,4,4};
	int firstindex = firstocc(arr,10,1);
	int lastindex = lastocc(arr,10,1);
	
	int totocc = (lastindex - firstindex) + 1;
	
	cout<<"Total occurence is "<<totocc;
	
return 0;
}

