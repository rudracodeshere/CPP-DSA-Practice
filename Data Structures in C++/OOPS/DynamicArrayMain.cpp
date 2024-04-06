#include<iostream>
using namespace std;
#include "DynamicArrayClass.cpp"
int main(){
    DynamicArray d;
    d.add(1);
    
    DynamicArray d2(d);
    d.add(5);
    d.add(6);
    d2.print();
    d.print();
}