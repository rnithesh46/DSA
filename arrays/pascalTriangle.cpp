#include<bits/stdc++.h>
using namespace std;
int getElement(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
vector<int> bruteGetRow(int row){
    long long ans;
    vector<int> ansRow;
    // ansRow.push_back(1);
    for(int i=1;i<=row;i++){
        ans=getElement(row-1,i-1);
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<int> optimalGetRow(int row){
    long long ans=1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/(i);
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> paskal(int row){
    vector<vector<int>> ans;
    for(i=0;i<=row;i++){
        ans.push_back(optimalGetRow(i))
    }
    return ans;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    // int row,col;
    // cin>>row>>col;
    // cout<<getElement(row-1,col-1);

    int row;
    cin>>row;
    // vector<int> rowE=bruteGetRow(row);
    // vector<int> rowE=optimalGetRow(row);
    vector<vector<int>> rowE=paskal(row);
    for(auto it:rowE) cout<<it<<" ";
    return 0;
}