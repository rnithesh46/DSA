#include<bits/stdc++.h>
using namespace std;
int bruteMajEle(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==a[i]) count++;
        }
        if(count>n/2) return a[i];
    }
    return -1;
}
int betterMajEle(vector<int> &a,int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2) return it.first;
    }
    return -1;
}
int optimalMajEle(vector<int> &a,int n){
    int count=0;
    int ele;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            ele=a[i];
        }
        else if(a[i]==ele) count++;
        else count--;
    }
    int count2=0;
    for(int i=0;i<n;i++){
        if(a[i]==ele) count2++;
    }
    if(count2>n/2) return ele;
    return -1;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // cout<<bruteMajEle(a,n);
    // cout<<betterMajEle(a,n);
    cout<<optimalMajEle(a,n);

    return 0;
}