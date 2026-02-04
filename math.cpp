#include<bits/stdc++.h>
using namespace std;
// int count(int n){
//     int cnt=(int)(log10(n)+1);
//     return cnt;
// }
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;

    //return count of digits
    // int co=count(n);
    // cout<<co<<endl;

    //extractions of digits
    // int count=0;
    // while(n>0){
    //     int lastDigit=n%10;
    //     cout<<lastDigit;
    //     count=count+1;
    //     n=n/10;
    // }
    // cout<<endl<<count;

    //reverse number
    // int revN=0;
    // int dup=n;
    // while(n>0){
    //     int lastDigit=n%10;
    //     n=n/10;
    //     revN=(revN*10)+lastDigit;
    // }
    // cout<<revN<<endl;
    
    //to check palindrome
    // if(dup==revN) cout<<"Palindrome";
    // else cout<<"Not a Palindrome";
    
    //Armstrong number
    // int sum=0;
    // int dup=n;
    // while(n>0){
    //     int ld=n%10;
    //     n=n/10;
    //     sum=sum+(ld*ld*ld);
    // }
    // cout<<sum<<endl;
    // if(dup==sum) cout<<"Armstrong";
    // else cout<<"Not a Armstrong";

    //print all divisor
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) cout<<i<<" ";
    // }

    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }

    return 0;
}