#include<iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int n = 1;
	int count = 0;
	while(count<x){
		if(((3*n)+2)%4!=0){
			cout<<(3*n)+2<<" ";
			count++;

		}
		n++;
	}

}
