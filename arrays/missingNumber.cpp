#include<bits/stdc++.h>
using namespace std;
int bruteMissing(vector<int> &a,int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0) return i;
    }
}
int betterMissing(vector<int> &a,int n){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]=1;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0) return i;
    }
}
int optimalMissingSum(vector<int> &a,int n){
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n;i++){
        s2+=a[i];
    }
    return (sum-s2);
}
int optimalMissingXOR(vector<int> &a,int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor1^xor2;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // cout<<bruteMissing(a,n);
    // cout<<betterMissing(a,n);
    // cout<<optimalMissingSum(a,n);
    cout<<optimalMissingXOR(a,n);
    return 0;
}