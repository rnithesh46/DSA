#include<bits/stdc++.h>
using namespace std;
vector<int> bruteMajorityElement(vector<int> &arr,int n){
    vector<int> ls;
    for(int i=0;i<n;i++){
        if(ls.size()==0 || ls[0]!=arr[i]){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[j]==arr[i]) count++;
            }
            if(count>n/3) ls.push_back(arr[i]);
        }
        if(ls.size()==2) break;
    }
    return ls;
}
vector<int> betterMajorityElement(vector<int> &arr,int n){
    vector<int> ls;
    map<int,int> mp;
    int mini=(int)(n/3)+1;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]]==mini) ls.push_back(arr[i]);
        if(ls.size()==2) break;
    }
    return ls;
}
vector<int> optimalMajorityElement(vector<int> &arr,int n){
    int count1=0,count2=0,ele1=INT_MIN,ele2=INT_MIN;
    for(int i=0;i<n;i++){
        if(count1==0 && arr[i]!=ele2){
            ele1=arr[i];
            count1=1;
        }
        else if(count2==0 && arr[i]!=ele1){
            ele2=arr[i];
            count2=1;
        }
        else if(arr[i]==ele1) count1++;
        else if(arr[i]==ele2) count2++;
        else{
            count1--;
            count2--;
        }
    }
    vector<int> ls;
    count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele1) count1++;
        if(arr[i]==ele2) count2++;
    }
    int mini=(int)(n/3)+1;
    if(count1>=mini) ls.push_back(ele1);
    if(count2>=mini) ls.push_back(ele2);
    return ls;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    // vector<int> result=bruteMajorityElement(arr,n);
    // vector<int> result=betterMajorityElement(arr,n);
    vector<int> result=optimalMajorityElement(arr,n);
    for(auto it:result) cout<<it<<" ";
    return 0;
}
// hiiiiiiii