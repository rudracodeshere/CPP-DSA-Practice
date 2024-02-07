#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i = 0;
	int ans = i;
	while(i*i<=n){
		ans = i;
		i++;
	}
	cout<<ans;
}

