#include<bits/stdc++.h>
using namespace std;

int f1(int n,int num,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num) count++;
    }
    return count;
}
int c1(char c,string str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==c) count++;
    }
    return count;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // string str;
    // cin>>str;
    // char c;
    // cin>>c;
    // cout<<c1(c,str);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int num;
    // cin>>num;
    // cout<<f1(n,num,arr);

    //pre compute
    // int hash[13]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }
    // pre compute for map
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
            int num;
            cin>>num;
            //fetch
            // cout<<hash[num]<<endl;
            cout<<mpp[num]<<endl;
        }
        
    //precompute
    // int hash[26]={0};
    // for(int i=0;i<str.size();i++){
    //     hash[str[i]-'a']++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    // char c;
    // cin>>c;
    // //fetch
    // cout<<hash[c-'a']<<endl;
    // }
    
    return 0;
}