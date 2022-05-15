#include<iostream>
using namespace std;

int main(){
	//Reversse Number Pattern
int n;
cin>>n;

int i = 1;

while(i<=n){
	int j = 1;
	while(j<=n){

		cout<<n-j+1;//formula for reverse of number pattern accordingly i and j
		j=j+1;

	}
	cout<<endl;
	i+=1;
}
/* For n = 5
54321
54321
54321
54321
54321
*/

return 0;
}

