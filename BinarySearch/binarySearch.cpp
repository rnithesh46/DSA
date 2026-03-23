#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr,int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(target<arr[mid]) high=mid-1;
        else if(target>arr[mid]) low=mid+1;
        else return mid;
    }
    return -1;
}
int RbinarySearch(vector<int>& arr,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(target==arr[mid]) return mid;
    else if(target<arr[mid]) return RbinarySearch(arr,low,mid-1,target);
    else return RbinarySearch(arr,mid+1,high,target);
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
    // cout<<binarySearch(arr,n,target);
    cout<<RbinarySearch(arr,0,n-1,target);
    return 0;
}