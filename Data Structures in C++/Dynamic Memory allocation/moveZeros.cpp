#include<iostream>
using namespace std;
int main()
{
    int iter;
    cin>> iter;
    while(iter!=0){
    int n;
    cin>>n;
    int *p = new int[n];
    int enter = 0;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        if(a!=0){
            p[enter++]=a;
        }
    }
    while(enter<n){
        p[enter++]=0;
    }
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout<<endl;
    iter--;
    }
}