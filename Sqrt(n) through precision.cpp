#include<iostream>
using namespace std;
int sqrt(int n){
        int s = 0;
        int e = n;
        long long int m  = s+ (e-s)/2;
        int ans;
        while(s<=e){
            long long int square = m*m;

            if(square == n){//equal
                return m;
            }
            else if(square > n){//if square greater
                e = m-1;
            }
            else if(square < n){//if square lesser
                ans = m;
                s = m+1;
            }

            m = s + (e-s)/2;
        }
        return ans;
    }
double moreprecision(int n,int precision,int nonprecise){//Precision
	double factor = 1;
	double ans = nonprecise;
	
	for(int i=0;i<precision;i++){
		factor = factor/10;
		
		for(double j=ans;j*j<n;j=j+factor){
			ans = j;
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"What is N ? "<<endl;
	cin>>n;
	
	int nonprecise = sqrt(n);
	
	cout<<moreprecision(n,3,nonprecise)<<endl;

return 0;
}

