#include <iostream>
using namespace std;
// int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cout << "Hello" << "\n";
    // int x,y;
    // cin >>x>>y;
    // cout << "value of x:"<< x << " value of y:"<< y << "\n";

    //string doesnot take anything after sapce,so we have declared two string
    // string s1,s2;
    // cin >> s1>>s2;
    // cout << s1 <<" "<<s2<<endl;

    //to printline entire line
    // string str;
    // getline(cin,str);
    // cout<<str<<endl;

    // int age;
    // cin>>age;
    // if(age>=18){
    //     cout<<"adult"<<endl;
    // }
    // if(age<18){
    //     cout<<"not adult"<<endl;
    // }

    // int day;
    // cin>>day;
    // switch(day){
    //     case 1:cout<<"monday";
    //             break;
    //     case 2:cout<<"tuesday";
    //             break;
    //     case 3:cout<<"wednesday";
    //             break;
    //     case 4:cout<<"thursday";
    //             break;
    //     case 5:cout<<"friday";
    //             break;
    //     case 6:cout<<"saturday";
    //             break;
    //     case 7:cout<<"sunday";
    //             break;
    //     default:cout<<"invalid";
    // }

    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // arr[3]+=10;
    // cout<<arr[4];

    // string s="harry";
    // int len=s.size();
    // cout<<len<<endl;
    // s[len-1]='a'
    // cout<<s[len-1];

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int i=0;
    // while(i<n){
    //     cout<<arr[i]<<" ";
    //     i++;
    // }

    // int i=2;
    // do{
    //     cout<<"harry"<<i<<endl;
    //     i++;
    // }while(i<=1);

//     return 0;

// }

//functions
//void
// void printname(){
//     cout<<"harry";
// }

// int main() {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

//     printname();
//     return 0;
// }

//functions
//parameterized
// void printname(string name){
//     cout<<"hey "<<name;
// }

// int main() {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

//     string name;
//     cin>>name;
//     printname(name);
//     return 0;
// }

//functions
//return
// int sum(int num1,int num2){
//     int num3=num1+num2;
//     return num3;
// }

// int main() {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

//     int num1,num2;
//     cin>>num1>>num2;
//     int res=sum(num1,num2);
//     cout<<res;
//     return 0;
// }

//pass by reference
//this sends a copy of the variable
//&num can be used to send the original variable
//array always goes with reference
int doSometing(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num;
    cin>>num;
    doSometing(num);
    cout<<num;
    return 0;
}