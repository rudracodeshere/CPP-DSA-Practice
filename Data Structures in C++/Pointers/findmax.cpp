#include<bits/stdc++.h>
using namespace std;
int* findmax(int *ar,int n)
{
    int * max = ar;
    for(int i = 1;i<n;i++){
        if(ar[i]>*max){
            max = &ar[i];
        }
    }
    return max;
}