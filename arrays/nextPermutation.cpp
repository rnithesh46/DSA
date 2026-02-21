#include<bits/stdc++.h>
using namespace std;
vector<int> optimalNP(vector<int>& a,int n){
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>a[ind]){
            swap(a[i],a[ind]);
            break;
        }
    }
    reverse(a.begin()+ind+1,a.end());
    return a;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    optimalNP(a,n);
    for(auto it:a) cout<<it<<" ";
    return 0;
}