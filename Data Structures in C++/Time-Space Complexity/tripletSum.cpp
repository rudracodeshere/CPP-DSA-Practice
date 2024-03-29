int tripletSum(int *arr, int n, int num)
{
	int ans=0;
	sort(arr,arr+n);
	for(int i = 0;i<n-2;i++){
		int l = i+1;
		int r = n-1;
		while(l<r){
			int curr = arr[i]+arr[l]+arr[r];
			if(curr==num){
				ans++;

				int temp = r-1;
				while(l<temp && arr[temp]==arr[r]){
					temp--;
					ans++;
				}
				l++;
			}
			else if(curr>num){
				r--;
			}
			else{
				l++;
			}
		}
	}
	return ans;
}