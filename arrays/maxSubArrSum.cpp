#include<bits/stdc++.h>
using namespace std;
int bruteMaxSum(vector<int> &a,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
                maxi=max(sum,maxi);
            }
        }
    }
    return maxi;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<bruteMaxSum(a,n);

    return 0;
}