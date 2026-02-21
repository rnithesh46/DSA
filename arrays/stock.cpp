#include<bits/stdc++.h>
using namespace std;
int bestTimeToBuySell(vector<int>& a,int n){
    int mini=a[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int cost=a[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,a[i]);
    }
    return profit;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<bestTimeToBuySell(a,n);
}