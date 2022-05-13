#include<iostream>
using namespace std;

int main(){
	//Number Pattern
int n;
cin>>n;

int i = 1;

while(i<=n){
	int j = 1;
	while(j<=n){
		
		cout<<i;//It prints row first no from where it initialise
				//If there is j then no prints in cloumn-wise from where it starts.
				//If you want to print after no from where it initialise then simply add +1 into it
		j=j+1;
		
	}
	cout<<endl;
	i+=1;
}
/*For n = 5
11111
22222
33333
44444
55555
*/

	

return 0;
}

