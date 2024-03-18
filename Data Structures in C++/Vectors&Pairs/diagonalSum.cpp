#include<iostream>
#include<vector>
using namespace std;
int main(){
 int r,c;
 cin>>r>>c;
 vector<vector<int>> main(r,vector<int>(c));
 for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
        cin>>main[i][j];
    }
 }
 for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
        cout<<main[i][j]<<" ";
    }
    cout<<endl;
 }
 int sum = 0;
     for(int i = 0;i<r;i++){
        sum+=main[i][i];
        if(r-i-1 != i){
            sum+=main[i][r-i-1];
        }
     }
     cout<<sum<<endl;
}
