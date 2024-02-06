#include<iostream>
using namespace std;

int main() {
	int n;cin>>n;
	int choice;cin>>choice;
	int sum = 0;
	int product = 1;
	switch(choice){
		case 1:
		for(int i = 1;i<=n;i++){
			sum+=i;
		}
		cout<<sum;
		break;
		case 2:

		for(int i = 1;i<=n;i++){
			product*=i;
		}
		cout<<product;
		break;
		default:
		cout<<-1;
	}

}
