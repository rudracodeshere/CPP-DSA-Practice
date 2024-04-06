#include<iostream>
using namespace std;
#include "preIncrementClass.cpp"
int main(){
    PreIncrement a;
    a.num = 3;
    a.den = 4;
    a.print();
   ++( ++a);
    a.print();
}