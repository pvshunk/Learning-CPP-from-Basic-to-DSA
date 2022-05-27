#include<iostream>
using namespace std;

int BitFromA(int a){
	int count = 0;
	while(a!= 0){
		if(a&1){
			count++;
		}
		a=a>>1;
	}
	return count;
}

int BitFromB(int b){
	int count = 0;
	while(b!= 0){
		if(b&1){
			count++;
		}
		b=b>>1;
	}
	return count;
}

int main(){
	int a,b;
	cin>>a>>b;
	
	int ans1 = BitFromA(a);
	int ans2 = BitFromB(b);
	
	cout<<"Bit of A "<<ans1<<endl;
	cout<<"Bit of B "<<ans2<<endl;
	
	int ans = ans1+ans2;
	cout<<"Total Bit: "<<ans;


return 0;
}

