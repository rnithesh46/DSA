#include<bits/stdc++.h>
using namespace std;
// int count(int n){
//     int cnt=(int)(log10(n)+1);
//     return cnt;
// }
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n1,n2;
    cin>>n1>>n2;

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

    // vector<int> v;
    // for(int i=1;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         v.push_back(i);
    //         if((n/i)!=i){
    //             v.push_back(n/i);
    //         }
    //     }
    // }
    // sort(v.begin(),v.end());
    // for(auto it:v){
    //     cout<<it<<" ";
    // }

    //prime number
    // int count=0;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) count++; 
    // }
    // if(count==2) cout<<n<<" is a Prime number";
    // else cout<<n<<" is not a Prime number";
    
    // int count=0;
    // for(int i=1;i*i<=n;i++){
    //     if(n%i==0){
    //         count++;
    //         if((n/i)!=i) {
    //             count++;
    //         }
    //     } 
        
    // }
    // if(count==2) cout<<n<<" is a Prime number";
    // else cout<<n<<" is not a Prime number";

    //gcd/hcf
    // int gcd;
    // for(int i=1;i<=min(n1,n2);i++){
    //     if(n1%i==0 && n2%i==0) 
    //     gcd=i;
    // }
    // cout<<gcd;

    // for(int i=min(n1,n2);i>=1;i--){
    //     if(n1%i==0 && n2%i==0) {
    //         cout<<i<<" ";
    //         break;
    //     }
    // }

    //Eculidean algo
    while(n1>0 && n2>0){
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;

    }
    if(n1==0) cout<<n2;
    else cout<<n1;
    
    return 0;
}