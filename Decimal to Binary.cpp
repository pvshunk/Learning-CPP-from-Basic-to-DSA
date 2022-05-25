#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//Decimal to Binary
	
	int n;
	cin>>n;
	
	int ans = 0;
	
	int i = 0;
	
	while(n!=0){

	    int bit = n&1;//This formula provides the exact binary of decimal.The binary value of any no by comparing with 1 under & operator

		ans = (bit*pow(10,i))+ans;//To find reverse of ans
		//ans = (10*ans)+bit;To find ans without reverse
		
		n = n >> 1 ;
		i++;

	}
	cout<<ans;

return 0;
}

