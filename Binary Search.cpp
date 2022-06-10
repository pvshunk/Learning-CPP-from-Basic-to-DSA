#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){

	int start = 0;
	int end = size-1;

	int mid = start + (end-start)/2;

	while(start<=end){

		if(arr[mid] == key){//when present
			return mid;
		}

		if(key > arr[mid]){//go to right part
			start = mid + 1;
		}
		else if(key < arr[mid]){//go to left part
			end = mid - 1;
		}
		
		mid = start + (end-start)/2;
	}
	return -1;//when key is not present

}

int main(){//Binary Search

	int even[6] = {2,4,6,8,12,14};
	int odd[5] = {3,6,9,12,15};

	int evenindex = binarysearch(even,6,123);
	int oddindex = binarysearch(odd,5,12);

	cout<<" Index of 123 "<< evenindex <<endl;
	cout<<" Index of 12 "<< oddindex << endl;

return 0;
}

