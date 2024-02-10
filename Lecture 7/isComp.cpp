#include<iostream>
using namespace std;
bool isComp(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return true;
        }
    }
    return false;
}

bool print_composite(int n)
{
    for(int i = 2;i<n;i++){
        if(isComp(i)){
            return true;
        }
    }
    return false;
}

int main(){
int n = 10;
cout<<print_composite(n);
}
