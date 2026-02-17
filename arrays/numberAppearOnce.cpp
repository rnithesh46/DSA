#include<bits/stdc++.h>
using namespace std;
int bruteAppearOnce(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        int num=a[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==num) count++;
        }
        if(count==1) return num;
    }
}
int betterAppearOnce(vector<int> &a,int n){
    // int maxi=0;
    // for(int i=0;i<n;i++){
    //     maxi=max(maxi,a[i]);
    // }
    // int hash[maxi]={0};
    // for(int i=0;i<n;i++){
    //     hash[a[i]]++;
    // }
    // for(int i=0;i<n;i++){
    //     if(hash[a[i]]==1) return a[i];
    // }

    //using map
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1) return it.first;
    }
}
int optimalAppearOnce(vector<int> &a,int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^a[i];
    }
    return xor1;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // cout<<bruteAppearOnce(a,n);
    cout<<betterAppearOnce(a,n);
    // cout<<optimalAppearOnce(a,n);
    return 0;
}