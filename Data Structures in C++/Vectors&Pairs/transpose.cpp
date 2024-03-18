#include <bits/stdc++.h> 
vector<vector<int>> transpose(int m, int n, vector<vector<int>> &mat){
    vector<vector<int>> res(n,vector<int>(m));
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            res[j][i]=mat[i][j];
        }
    }
    return res;
}