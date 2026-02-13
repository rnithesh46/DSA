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
// void RarrByD(int arr[],int n,int d){
//     d=d%n;
//     int temp[d];
//     // assigning temp
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     // shifting
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     // putting back temp
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // RarrBy1(arr,n);
    int d;
    cin>>d;
    RarrByD(arr,n,d);
    return 0;
}