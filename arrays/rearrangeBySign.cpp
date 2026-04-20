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
vector<int> rearrange(vector<int>& a,int n) {
    vector<int> pos, neg;

    // Step 1: separate elements (order preserved)
    for(int x : a) {
        if(x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }

    vector<int> ans;
    int i = 0, j = 0;

    // Step 2: decide starting sign
    bool startPositive = (a[0] >= 0);

    // Step 3: merge based on starting sign
    while(i < pos.size() && j < neg.size()) {
        if(startPositive) {
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        } else {
            ans.push_back(neg[j++]);
            ans.push_back(pos[i++]);
        }
    }

    // Step 4: add remaining elements
    while(i < pos.size()) ans.push_back(pos[i++]);
    while(j < neg.size()) ans.push_back(neg[j++]);

    return ans;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // bruteRearrange(a,n);
    // v2bruteRearrange(a,n);
    // for(auto it:a) cout<<it<<" ";
    // vector<int> ans=optimalRearrange(a,n);
    vector<int> ans=rearrange(a,n);
    for(auto it:ans) cout<<it<<" ";


}