#include <bits/stdc++.h>
using namespace std;
int bflargea(int arr[],int n){
    sort(arr,arr+n);
    return arr[n-1]; 
}
int bflargev(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    return arr.back();
}
int oplarge(vector<int> &arr,int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    return largest;
}
int bfslarge(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    int largest=arr.back();
    int slarge=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            slarge=arr[i];
            break;
        }
    }
    return slarge;
}
int beslarge(vector<int> &arr,int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    int slarge=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slarge && arr[i]<largest) slarge=arr[i];
    }
    return slarge;
}
int opslarge(vector<int> &arr,int n){
    int largest=arr[0];
    int slarge=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slarge=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slarge) slarge=arr[i];
    }
    return slarge;
}
int opssmall(vector<int> &arr,int n){
    int smallest=arr[0];
    int ssmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmall=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<ssmall && arr[i]>smallest) ssmall=arr[i];
    }
    return ssmall;
}
int issorted(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
void bfdub(vector<int> &arr,int n){
    //bf method
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int opdub(vector<int> &arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    // int largest=olarge(arr,n);
    // cout<<largest;
    
    // int slargest=opslarge(arr,n);
    // cout<<slargest<<endl;
    
    // int ssmallest=opssmall(arr,n);
    // cout<<ssmallest;
    
    // int issort=issorted(arr,n);
    // cout<<issort;

    // bfdub(arr,n);
    int totalUnique=opdub(arr,n);
    cout<<totalUnique;    
    return 0;
}