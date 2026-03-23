#include<bits/stdc++.h>
using namespace std;
bool checkSorted(vector<int>&a,int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}

int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    bool Sorted=checkSorted(a,n);
    cout<<Sorted;
    return 0;
}