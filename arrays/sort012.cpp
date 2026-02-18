#include<bits/stdc++.h>
using namespace std;
void bruteSort(vector<int> &a,int n){
    //or merge sort
    sort(a.begin(),a.end());
}
void betterSort(vector<int> &a,int n){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) count0++;
        else if(a[i]==1) count1++;
        else count2++;
    }
    for(int i=0;i<count0;i++) a[i]=0;
    for(int i=count0;i<count0+count1;i++) a[i]=1;
    for(int i=count0+count1;i<n;i++) a[i]=2;
}
void optimalSort(vector<int> &a,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // bruteSort(a,n);
    // betterSort(a,n);
    optimalSort(a,n);
    for(auto it:a) cout<<it<<" ";
    return 0;
}