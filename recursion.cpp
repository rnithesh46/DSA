#include<bits/stdc++.h>
using namespace std;
int cut=0;
void f(){
    if(cut==3) return;
    cout<<cut<<" ";
    cut++;
    f();
}
void name(int i,int n){
    if(i>n) return;
    cout<<"raj"<<endl;
    name(i+1,n);
}
void n1n(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    n1n(i+1,n);
}
void nn1(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    nn1(i-1,n);
}
void n1nb(int i,int n){
    if(i<1) return;
    n1nb(i-1,n);
    cout<<i<<endl;
}
void nn1b(int i,int n){
    if(i>n) return;
    nn1b(i+1,n);
    cout<<i<<endl;
}
void sumnp(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumnp(i-1,sum+i);
}
int sumnf(int n){
    if(n==0) return 0;
    return n+sumnf(n-1);
}
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
//using 2 pointers
void arev(int l,int r,int arr[]){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    arev(l+1,r-1,arr);
}
//using 1 pointer
void arev1(int i,int n,int arr[]){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    arev1(i+1,n,arr);
}
bool stp(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return stp(i+1,s);
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // int n;
    // cin>>n;
    // int arr[n];
    string s;
    cin>>s;

    // sumnf(n);
    // cout<<fact(n);

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // arev(0,n-1,arr);
    // arev1(0,n,arr);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<stp(0,s);
    return 0;
}