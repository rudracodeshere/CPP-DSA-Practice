#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i = 1;
while(i<=n){
  int j = 1;
  while(j<=n-i){
    cout<<" ";
    j++;
  }

  j = i;
  while(j>=1){
    cout<<j;
    j--;
  }
  j =1;
  while(j<i){
    cout<<++j;
  }
  cout<<endl;
  i++;
}


}

