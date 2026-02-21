#include<bits/stdc++.h>
using namespace std;
int bruteRearrange(vector<int>& a,int n){
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    for(int i=0;i<n/2;i++){
        a[i*2]=pos[i];
        a[i*2+1]=neg[i];
    }
}
vector<int> optimalRearrange(vector<int>& a,int n){
    int posIndex=0,negIndex=1;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ans[posIndex]=a[i];
            posIndex+=2;
        }
        else{
            ans[negIndex]=a[i];
            negIndex+=2;
        }
    }
    return ans;
}
int v2bruteRearrange(vector<int>& a,int n){
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            a[index]=neg[i];
            index++;
        }
    }
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // bruteRearrange(a,n);
    v2bruteRearrange(a,n);
    for(auto it:a) cout<<it<<" ";
    // vector<int> ans=optimalRearrange(a,n);
    // for(auto it:ans) cout<<it<<" ";

}