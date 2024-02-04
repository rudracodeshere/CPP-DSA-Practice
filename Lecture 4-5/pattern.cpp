/*
#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int i = 1;
while(i<=n){

    int j = 1;
    while(j<=n-i){
        cout<<" ";
        j++;
    }

    j = 1;
    while(j<=i){
        cout<<j+i-1;
        j++;
    }
    j = 2* (i-1);
    while(j>=i){
        cout<<j;
        j--;
    }

    cout<<endl;
    i++;
}
}
*/
/*
#include<iostream>
using namespace std;

int main() {
    int prev = 1;
    int n;
    cin>>n;
    int i = 1;
    int first = (n/2)+1;

     while(i<= first){
         int j = 1;
         while(j<=first-i){
            cout<<" ";
            j++;
         }

         j = 1;
         while(j<2*(i)){
            cout<<"*";
            j++;
         }
         cout<<endl;
         i++;

     }

     i = 1;
     while(i<first){
        int j = 1;
        while(j<=i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=2*((first-1)-i+1)-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
     }


}
*/

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Lines"<<endl;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    char ch = 'A';
    while(j<=i){
        cout<<" ";
        j++;
    }
    j= 1;
    while(j<=i){
        cout<<ch;
        ch++;j++;
    }
    cout<<endl;
    i++;
}

}
