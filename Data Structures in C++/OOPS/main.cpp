#include<iostream>
using namespace std;
#include "demoClass.cpp"
int main(){
    Demo obj(10);
    obj.print();
    obj.roll =1;
    cout<<obj.roll<<endl;
}