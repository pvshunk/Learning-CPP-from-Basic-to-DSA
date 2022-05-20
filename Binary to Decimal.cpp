#include<iostream>
#include<math.h>
using namespace std;

int main(){//Binary to Decimal
int n;
cin>>n;

int ans = 0;
int i = 0;;

while(n != 0){
	int digit = n%10 ;//To find last digit of n
	
	if(digit == 1){
		ans=pow(2,i)+ans;//if binary is 1 then it add 2^i otherwise no any opration for 0
		i++;
	}
	n=n/10;//to remove last digit after use
}
cout<<ans;


return 0;
}

