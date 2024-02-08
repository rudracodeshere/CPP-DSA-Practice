#include<iostream>
using namespace std;
#include <climits>


int main(){

  int n;
  cin>>n;
int i =2;
int entry;
int largest;
int secondLargest = INT_MIN ;
cin>>entry;
largest = entry;
while(i<=n){
    cin>>entry;
    if(largest == entry){
        largest = INT_MIN;
    }
    else if (largest<entry){
        secondLargest = largest;
        largest = entry;
    }
    else{
        if(entry>secondLargest){
            secondLargest=entry;
        }
    }
    i++;
}
 cout<<secondLargest;
}



