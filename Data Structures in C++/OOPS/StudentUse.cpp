#include<iostream>
#include<cstring>
using namespace std;

#include "Student.cpp"

int main(){
    Student s1(101,"abc");
    s1.print();
    Student s2(s1);
    s2.name = "hi";
    s2.print();
}
