#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> bruteRotateMatrix(vector<vector<int>> &matrix,int n,int m){
    vector<vector<int>> ans(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][n-1-i]=matrix[i][j];
        }
    }
    return ans;
}
vector<vector<int>> optimalRotateMatrix(vector<vector<int>> &matrix,int n,int m){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    return matrix;
}
int main(){
    freopen("arrayi.txt","r",stdin);
    freopen("arrayo.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    // vector<vector<int>> result=bruteRotateMatrix(matrix,n,m);
    vector<vector<int>> result=optimalRotateMatrix(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}