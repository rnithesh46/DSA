#include<bits/stdc++.h>
using namespace std;
string bruteTwoSum(vector<int> &a,int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // if(i==j) continue;
            if(a[i]+a[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}
vector<int> betterTwoSum(vector<int> &a,int n,int target){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num=a[i];
        int more=target-num;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[num]=i;
    }
    return {-1,-1};
}
string optimalTwoSum(vector<int> &a,int n,int target){
    int left=0;
    int right=n-1;
    sort(a.begin(),a.end());
    while(left<right){
        int sum=a[left]+a[right];
        if(sum==target) return "YES";
        else if(sum<target) left++;
        else right--;
    }
    return "NO";
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int target;
    cin>>target;
    // string issum=bruteTwoSum(a,n,target);
    // vector<int> issum=betterTwoSum(a,n,target);
    // for(auto it:issum){
    //     cout<<it<<" ";
    // }
    // return 0;
    string issum=optimalTwoSum(a,n,target);
    cout<<issum;
}