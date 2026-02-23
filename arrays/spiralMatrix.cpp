#include<bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> &matrix,int n,int m){
    vector<int> ans;
    int top=0,bottom=n-1;
    int left=0,right=m-1;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
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
    vector<int> result=spiralMatrix(matrix,n,m);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}