#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(6);
    v.push_back(14);
    v.push_back(8);
    v.push_back(3);

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //Binary Search
    cout<<"7 is "<<binary_search(v.begin(),v.end(),7)<<endl;
    
    //lower bound and upper bound
    cout<<"Lower bound of 6 "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound pf 6 "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    int a = 7;
    int b = 9;
    
    //max and min
    cout<<"Max "<<max(a,b)<<endl;
    cout<<"Min "<<min(a,b)<<endl;
    
    //swap
    swap(a,b);
    
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;

    //reverse
    string s = "ABCDE";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
    //rotate
    rotate(v.begin(),v.begin()+2,v.end());
    
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    //sort
    sort(v.begin(),v.end());
    
    for(int i:v){
        cout<<i<<" ";
    }
    
    
    

    return 0;
}

