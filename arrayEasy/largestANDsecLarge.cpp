#include<bits/stdc++.h>
using namespace std;
int bruteLargest(vector<int>& a,int n){
    sort(a.begin(),a.end());
    return a[n-1];
}
int optimalLargest(vector<int>& a,int n){
    int largest=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest) largest=a[i];
    }
    return largest;
}
int bruteSecLargest(vector<int>& a,int n){
    sort(a.begin(),a.end());
    int largest=a[n-1];
    for(int i=n-1;i>=0;i--){
        if(a[i]!=largest) return a[i];
    }
}
int betterSecLargest(vector<int>& a,int n){
    int largest=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest) largest=a[i];
    }
    int secLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<largest && a[i]>secLargest) secLargest=a[i];
    }
    return secLargest;
}
int optimalSecLargest(vector<int>& a,int n){
    int largest=a[0];
    int secLargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            secLargest=largest;
            largest=a[i];
        }
        else if(a[i]>secLargest && a[i]<largest){
            secLargest=a[i];
        }
    }
    return secLargest;
}
bool isSorted(vector<int>& a,int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]) return false;
    }
    return true;
}
vector<int> bruteRemoveDup(vector<int>& a,int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    int index=0;
    for(auto it:st){
        a[index]=it;
        index++;
    }
    return a;
}
vector<int> optimalRemoveDup(vector<int>& a,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    return a;
}
int main(){
    freopen("arrayEasyi.txt","r",stdin);
    freopen("arrayEasyo.txt","w",stdout);

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // cout<<bruteLargest(a,n);
    // cout<<optimalLargest(a,n);

    // cout<<bruteSecLargest(a,n);
    // cout<<betterSecLargest(a,n);
    // cout<<optimalSecLargest(a,n);

    // cout<<isSorted(a,n);

    // vector<int> dupRemoved=bruteRemoveDup(a,n);
    vector<int> dupRemoved=bruteRemoveDup(a,n);
    for(auto it:dupRemoved) cout<<it<<" ";

    return 0;
}