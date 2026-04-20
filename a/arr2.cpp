#include<bits/stdc++.h>
using namespace std;
void RarrBy1(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
void RarrByD(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    // assigning temp
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    // shifting
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    // putting back temp
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
// void reversee(int arr[],int start,int end){
//     while(start<=end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }
void optimalRarrByD(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
// void optimalRarrByD(int arr[],int n,int d){
//     d=d%n;
//     reversee(arr,0,n-d-1);
//     reversee(arr,n-d,n-1);
//     reversee(arr,0,n-1);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }

vector<int> movezero(vector<int> &a,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    int nz=temp.size();
    for(int i=0;i<nz;i++){
        a[i]=temp[i];
    }
    for(int i=nz;i<n;i++){
        a[i]=0;
    }
    return a;
}
vector<int> movezerooptimal(vector<int> &a,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if (j==-1) return a;
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}
int linearsearch(vector<int> &a,int n,int num){
    for(int i=0;i<n;i++){
        if(a[i]==num) return i;
    }
    return -1;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++) cin>>arr[i];
    // // RarrBy1(arr,n);
    // int d;
    // cin>>d;
    // // RarrByD(arr,n,d);
    // optimalRarrByD(arr,n,d);

    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // movezero(a,n);
    // movezerooptimal(a,n);
    // for(auto it:a){
    //     cout<<it<<" ";
    // }

    int num;
    cin>>num;
    cout<<linearsearch(a,n,num);
    
    return 0;
}