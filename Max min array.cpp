#include<iostream>
using namespace std;

int getMax(int num[],int size){
	int max = INT_MIN;//Its minimum barrier //maxi
	
	for(int i=0;i<size;i++){
		//maxi = min(maxi,num[i]); min is inbuilt
		if(num[i]>max){
			max = num[i];//If number is grtr than INT_MIN then it assigns at max
		}
	}
	return max;
}

int getMin(int num[],int size){
	int min = INT_MAX;//Its maximum barrier //mini
	
	for(int i = 0;i<size;i++){
		//mini = min(mini,num[i]; min is inbuilt
		if(num[i]<min){//if number is lesser than INT_MAX than it assigns at min
			min = num[i];
		}
	}
	return min;
}

int main(){//Max and Min in array
	
	int size;
	cin>>size;
	
	int num[100];
	
	for(int i = 0;i<size;i++){
		cin>>num[i];
	}
	
	cout<<"Maximum "<<getMax(num,size)<<endl;
	cout<<"Minimum "<<getMin(num,size)<<endl;
	
return 0;
}

