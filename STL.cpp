#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>

 using namespace std;

 
int main ()
{
  
 
    //Array
    
/*	array<int,4> a = {1,2,3,4};//Array declaration in STL
	int size = 4;
	
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	cout<<a.at(2)<<endl;//3
	cout<<a.empty()<<endl;//0
	cout<<a.front()<<endl;//1
	cout<<a.back()<<endl;//4
	
	//Vector
	cout<<"Declaration of vector"<<endl;
	vector<int> v(5,1);//Declaration of vector by size and initialization
	//5 is Size and 1 is element from where it initialize
	cout<<endl;
	cout<<"Initial Size "<<v.capacity()<<endl;//To check memory allocation
	
	v.push_back(1);//Vector creates new vector if
	v.push_back(2);//Size of the vector is equal to its memory allocation
	v.push_back(3);//Then it creates new vector and remove old one
	v.push_back(4);//4capacity
	v.push_back(5);//store element inside vector
	v.pop_back();//To remove element from Vector from last push_back or last element
	
	//To print whole element from Vector
	
	for(int i:v){
	    cout<<i<<" ";
	}cout<<endl;

	
	cout<<"Vector capacity "<<v.capacity()<<endl;//capacity shows memory allocation
	cout<<"Vector size "<<v.size()<<endl;//size shows elements in memory
	
	cout<<v.at(2)<<endl;
	cout<<v.empty()<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	v.clear();//It removes all the elements from Vector
	
	cout<<v.size();
	cout<<v.capacity();*/ 
    
    //Deque

   /* cout<<"Deque is used to be deletion and insertion from both end in array";
    
    //Declaration of Deque
    deque<int> d;
    
    //assign elements from front and back
    d.push_back(3);//From last
    d.push_front(2);//From front
    d.push_back(4);
    d.push_front(1);
    
    cout<<endl;
    
    cout<<"Before pop_back"<<endl;
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;
    
    //removes elements from front and last
    d.pop_back();
    d.pop_front();
   
    cout<<endl;
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    //To print individual element in deque
    cout<<"At 1 is "<<d.at(0)<<endl;
    cout<<"At 2 is "<<d.at(1)<<endl;
    
    //Front and back
    cout<<"Front "<<d.front()<<endl;//2
    cout<<"Back "<<d.back()<<endl;//3

    //To delete/Empty Function
    cout<<"Empty or Not ";
    cout<<d.empty()<<endl;//0
    
    //To erase element from begin
    d.erase(d.begin(),d.begin()+1);
    cout<<d.size()<<endl;//1
    
    for(int i: d){
        cout<<i;//3
    }
    
    //Stack
    //First in Last Out
    
    stack<string> s;
    
    s.push("Priyesh");
    s.push("Vikram");
    s.push("Singh");
    
    cout<<"On top "<<s.top()<<endl;
    
    //To remove
    s.pop();
    
    cout<<"On top After remove "<<s.top()<<endl;
    
    //empty
    cout<<"Empty or not "<<s.empty()<<endl;
    
    //Queue
    //First in First Out
    
    queue<string> q;
    
    q.push("Priyesh");
    q.push("Vikram");
    q.push("Singh");
    
    cout<<"Top "<<q.front()<<endl;
    cout<<"Last "<<q.back()<<endl;
    cout<<"Size before POP "<<q.size()<<endl;
    
    q.pop();
    //Then Vikram at Top
    
    cout<<"After popping "<<q.front()<<endl;
    cout<<"Size after POP "<<q.size()<<endl;
    
    //Priority Queue
    
    priority_queue<int> maxheap;//It gives output accordingly descending order
    
    maxheap.push(8);
    maxheap.push(15);
    maxheap.push(4);
    maxheap.push(2);
    maxheap.push(9);
    
    int maxsize = maxheap.size();
    
    for(int i=0;i<maxsize;i++){
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }
    
    cout<<endl;
    priority_queue<int , vector<int>,greater<int>> minheap;//It gives output accordingly ascending order
    
    minheap.push(8);
    minheap.push(15);
    minheap.push(4);
    minheap.push(2);
    minheap.push(9);
    
    int minsize = minheap.size();
    
    for(int i=0;i<minsize;i++){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
    
    //SET
    
    //declaration
    set<int> s;
    
    //Insertion in SET
    s.insert(4);
    s.insert(8);
    s.insert(12);
    s.insert(8);
    s.insert(13);
    s.insert(6);
    
    for(auto i : s){
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    //Erase
    
    set<int>::iterator it = s.begin();
    it++;
    
    s.erase(it);
    
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //True or False
    
    cout<<"Present or Not 12 "<<s.count(12)<<endl;
    cout<<"Present or Not 17 "<<s.count(17)<<endl;
    
    //Find index of element
    
    set<int>::iterator itr = s.find(12);
    
    for(auto  it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;*/
    
    //MAP 
    
    //declaration
    map<int,string> mp;
    
    //Insertion in Map
    
    mp.insert({1,"Priyesh"});
    mp.insert({2,"Vikram"});
    mp.insert({3,"Singh"});
    
    mp[4] = "Pri";
    mp[5] = "Vik";
    mp[6] = "Sin";
    
    //Output
    for(auto i:mp){
    cout<<i.first<<" "<<i.second<<endl;
    }
    
    //Reference by Find
    
    auto it = mp.find(2);
    
    for(auto i=it;i!=mp.end();i++){
        cout<<(*i).second<<endl;
    }
    
return 0;

}