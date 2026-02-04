#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    //print a pair
    // pair<int,int> p={1,3};
    // cout<<p.first<<" "<<p.second;

    //pair inside a pair
    // pair<int,pair<int,int>> p={1,{3,4}};
    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;

    //pair with array
    // pair<int,int> arr[]={{1,2},{2,5},{5,8}};
    // cout<<arr[1].first;
}
void explainVector(){
    vector<int> v;
    v.push_back(20); //push 1 in vector
    v.emplace_back(10); //same but faster than push
    v.emplace_back(15); //same but faster than push
    v.emplace_back(5); //same but faster than push
    v.emplace_back(4); //same but faster than push

    // vector<pair<int,int>> v;
    // v.push_back({1,3});
    // v.emplace_back(1,3); //it automatically identifies it as pair
    
    // vector<int> v(5,100);
    // vector<int> v(5);
    // vector<int> v1(5,20);
    // vector<int> v2(v1);

    // cout<<v2[0]<<" "<<v2[1]<<" "<<v2[2];

    // vector<int>::iterator it=v.begin();
    // it++; //prints second element
    // it+=2; //3rd
    // cout<<*(it)<<" ";

    //print elements from back
    // vector<int>::iterator it=v.end();
    // it--; //prints last element
    // cout<<*(it)<<" ";
    // cout<<v.back();

    //print vector
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }

    // auto automatically detects datatype
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }

    //deletion
    // v.erase(v.begin()+1);
    //multiple deletion
    // v.erase(v.begin()+2,v.begin()+4);

    //insert
    // v.insert(v.begin(),300);
    // v.insert(v.begin()+1,300);
    // v.insert(v.begin()+2,2,5);
    // vector<int> copy(2,50);
    // v.insert(v.begin(),copy.begin(),copy.end());

    // cout<<v.size()<<endl;

    // v.pop_back(); //pops last element

    // v.clear();  //deleted everything
    // cout<<v.empty(); //return 1 if empty else 0
    
    //for each loop
    for(auto it:v){
        cout<<it<<" ";
    }
}
//list<int> ls; ,push_front()
//deque<int> dq; ,push_front(),pop_front(),pop_back()
//both are same as vector
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    st.pop();
    cout<<st.top()<<endl; //pops top element,LIFO
    cout<<st.size()<<endl;
    cout<<st.empty(); //returns 1 if empty else 0
}
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(3);
    q.emplace(5);
    q.pop();
    cout<<q.front()<<endl;
    q.back()+=5;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty();
}
//priority_queue<int> pq;
//priority queue is same as stack like pq.push(),pq.top(),pq.pop()
//priroity is based on maximum heap {10,8,5,3,1}
//for minimum heap {1,3,5,8,10}
//priority_queue<int,vector<int>,greater<int>> pq; 

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    explainQueue();
    return 0;
}