#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> bruteZeroMatrix(vector<vector<int>> &matrix,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                // markRow(i);
                for(int col=0;col<m;col++){
                    if(matrix[i][col]!=0)
                        matrix[i][col]=-1;
                }
                // markCol(j);
                for(int row=0;row<n;row++){
                    if(matrix[row][j]!=0)
                        matrix[row][j]=-1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1)
                matrix[i][j]=0;
        }
    }
    return matrix;
}
vector<vector<int>> betterZeroMatrix(vector<vector<int>> &matrix,int n,int m){
    int row[n]={0};
    int col[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1||col[j]==1)
                matrix[i][j]=0;
        }
    }
    return matrix;
}
vector<vector<int>> optimalZeroMatrix(vector<vector<int>> &matrix,int n,int m){
    int col0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0) matrix[0][j]=0;
                else col0=0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[0][j]==0||matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<m;j++) matrix[0][j]=0;
    }
    if(col0==0){
        for(int i=0;i<n;i++) matrix[i][0]=0;
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
    // vector<vector<int>> result=bruteZeroMatrix(matrix,n,m);
    // vector<vector<int>> result=betterZeroMatrix(matrix,n,m);
    vector<vector<int>> result=optimalZeroMatrix(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}