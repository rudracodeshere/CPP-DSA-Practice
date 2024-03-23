#include<iostream>
using namespace std;
int zeros(int n){
    if(n == 0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    int count = zeros(n/10);
    if(n%10 == 0){
        return count +1;

    }
    else{
        return count;
    }
}
int main(){
int n;
cin>>n;
int ans = zeros(n);
cout<<ans<<endl;
}
