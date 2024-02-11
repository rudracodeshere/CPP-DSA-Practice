#include<iostream>
#include<climits>
using namespace std;

int main() {
	int max = INT_MAX;
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n;i++){
		if(max>a[i]){
			max=a[i];
		}
	}
	cout<<max;
}

