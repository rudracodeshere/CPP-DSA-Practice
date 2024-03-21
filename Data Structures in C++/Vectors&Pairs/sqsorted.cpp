#include <bits/stdc++.h> 
vector < int > sqsorted(vector < int > & arr) {
    vector<int> res(arr.size());
    for(int i = 0;i<arr.size();i++){
        res[i]=arr[i]*arr[i];
    }
    sort(res.begin(),res.end());
    return res;
}