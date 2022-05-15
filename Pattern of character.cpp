#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i = 1;//row
	
	while(i<=n){
		int j = 1;//column
		char ch = 'A'+n-i;//According to this we can change patterns in character due to typecasting
		
		while(j<=i){
			cout<<ch;//output
			j+=1;
			ch+=1;
		}
		cout<<endl;
		i+=1;
	}



return 0;
}

