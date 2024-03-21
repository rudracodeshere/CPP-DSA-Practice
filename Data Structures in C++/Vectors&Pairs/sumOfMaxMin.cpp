#include <utility>
#include <algorithm>
#include <climits>


int sumOfMaxMin(vector<int> arr, int n){
	sort(arr.begin(),arr.end());
    return arr[0]+arr[n-1];
}