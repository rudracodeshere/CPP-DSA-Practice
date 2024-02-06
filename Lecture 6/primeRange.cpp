#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 2;i<=n;i++){
        int j = 2;
        bool isPrime = true;
        if(i>2){
        while(j<i){
            if(i%j==0){
                isPrime = false;
                break;
            }
            j++;
        }
        }
        if(isPrime)
        {
            cout<<i<<endl;
        }

    }

}
