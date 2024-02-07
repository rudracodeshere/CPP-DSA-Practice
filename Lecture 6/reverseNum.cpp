#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int rev =0 ;
	bool numFound = false;
	while(n>0){
		int ld = n%10;
 		if(ld == 0 && numFound == false){
                n/=10;
			continue;
	}
	else{
	    numFound = true;
        rev = rev*10+ld;
		n /=10;
	}
}
cout<<rev;
}
