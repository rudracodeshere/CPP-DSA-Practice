#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i = 0;
	int dec  = 0;
	while(n>0){
		dec = dec +( (n%10) * pow(2,i) );
		n/=10;
		i++;
	}
	cout<<dec;
}
