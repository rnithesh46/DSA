#include<bits/stdc++.h>
using namespace std;
vector<int> bruteUnion(vector<int> &a,vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
vector<int> optimalUnion(vector<int> &a,vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unionarray;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionarray.size()==0 || unionarray.back()!=a[i]){
                unionarray.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarray.size()==0 || unionarray.back()!=b[j]){
                unionarray.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionarray.size()==0 || unionarray.back()!=a[i]){
            unionarray.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionarray.size()==0 || unionarray.back()!=b[j]){
            unionarray.push_back(b[j]);
        }
        j++;
    }
    return unionarray;
}
int main(){
    freopen("arrayi.txt", "r", stdin);
    freopen("arrayo.txt", "w", stdout);
    int n1,n2;
    cin>>n1>>n2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    // vector<int> unionArray=bruteUnion(a,b);
    vector<int> unionArray=optimalUnion(a,b);
    for(int i=0;i<unionArray.size();i++) cout<<unionArray[i]<<" ";
    
    return 0;
}