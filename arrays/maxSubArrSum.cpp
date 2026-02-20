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
int betterMaxSum(vector<int> &a,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int optimalMaxSum(vector<int> &a,int n){
    int start=0,sum=0,maxi=INT_MIN,aStart=-1,aEnd=-1;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=a[i];
        if(sum>maxi){
            maxi=sum;
            aStart=start;
            aEnd=i;
        }
        if(sum<0) sum=0;
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
    // cout<<bruteMaxSum(a,n);
    // cout<<betterMaxSum(a,n);
    cout<<optimalMaxSum(a,n);

    return 0;
}
// please complete t input file "arrayi.txt" with the following content:
// always start with the size of the array followed by the elements of the array
// the maximum subarray sum of the following array is 6 (2+3+(-1)) or (3+(-1)+4) or (2+3+(-1)+4)
// the optimial of the vector and the array should be same