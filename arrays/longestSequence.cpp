#include<bits/stdc++.h>
using namespace std;
bool ls(vector<int>& a,int num){
    for(int i=0;i<a.size();i++){
        if(a[i]==num) return true;
    }
    return false;
}
int bruteLongest(vector<int>& a,int n){
    if(n==0) return 0;
    int longest=1;
    for(int i=0;i<n;i++){
        int x=a[i];
        int count=1;
        while(ls(a,x+1)==true){
            x=x+1;
            count++;
        }
        longest=max(longest,count);
    }
    return longest;
}
int betterLongest(vector<int>& a,int n){
    if(n==0) return 0;
    sort(a.begin(),a.end());
    int longest=1;
    int countCurr=0;
    int lastSmaller=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]-1==lastSmaller){
            lastSmaller=a[i];
            countCurr++;
        }
        else if(a[i]!=lastSmaller){
            countCurr=1;
            lastSmaller=a[i];
        }
        longest=max(longest,countCurr);
    }
    return longest;
}
int optimalLongest(vector<int>& a,int n){
    if(n==0) return 0;
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x++;
                count++;
            }
            longest=max(longest,count);
        }
    }
    return longest;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // cout<<bruteLongest(a,n);
    cout<<betterLongest(a,n);

    return 0;
}