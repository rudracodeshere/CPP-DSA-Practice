#include<iostream>
using namespace std;
float f2c(int f){
return (5.0/9)*(f-32);
}
int main(){
int f;
cin>>f;
float c = f2c(f);
cout<<c;
}
