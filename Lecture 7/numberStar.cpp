#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int i = 0;
while(i<n){
  int j = 1;
  while(j<=n-i){
    cout<<j;
    j++;
  }

  j = ((i+1)*2)-2;
  while(j>0){
    cout<<"*";
    j--;
  }

  j = n - i;
  while(j>=1){
    cout<<j;
    j--;
  }
  cout<<endl;
  i++;
}
}



