#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>& arr,int n,int target){
    int low=0;
    int high=n-1;
    int lb=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target) {
            lb=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return lb;
}
int upperBound(vector<int>& arr,int n,int target){
    int low=0;
    int high=n-1;
    int ub=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target) {
            ub=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ub;
}
int main(){
    freopen("binaryi.txt", "r", stdin);
    freopen("binaryo.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    cout<<"lower bound: "<<lowerBound(arr,n,target)<<endl;
    cout<<"upper bound: "<<upperBound(arr,n,target);
    return 0;
}