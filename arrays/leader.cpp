#include<bits/stdc++.h>
using namespace std;
vector<int> bruteLeader(vector<int>& a,int n){
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                leader=false;
                break;
            }
        }
        if(leader==true) ans.push_back(a[i]);

    }
    return ans;
}
vector<int> optimalLeader(vector<int>& a,int n){
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // vector<int> ans=bruteLeader(a,n);
    vector<int> ans=optimalLeader(a,n);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}