#include<iostream>
using namespace std;
#include "StaticUseClass.cpp"
int main(){
StaticClass a;
cout<<++StaticClass::total<<endl;
}
