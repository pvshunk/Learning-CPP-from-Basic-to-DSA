#include<iostream>
using namespace std;

bool Lsearch(int arr[],int size,int key){//Linear Search Function
	for(int i = 0;i<size;i++){
		if(arr[i] == key){
			return 1;
		}
	}
	return 0;
}

int main(){//Linear Search
    cout<<"Total size"<<endl;
	int size;
	cin>>size;
	
	int arr[8];
	
	cout<<"Enter "<<size<<" values"<<endl;
	
	for(int i = 0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter element to search"<<endl;
	int key;
	cin>>key;
	
	bool found = Lsearch(arr,size,key);
	
	if(found == 1){
		cout<<"Present";
	}
	else{
		cout<<"Absent";
	}

return 0;
}

