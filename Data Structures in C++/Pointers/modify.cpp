void modify(int *ar,int n)
{
	int * max = &ar[0];
	int * min = &ar[0]; 
	for(int i = 1;i<n;i++){
		if(ar[i]>*(max)){
			max = &ar[i];
		}
		if(ar[i]<*(min)){
			min = &ar[i];
		}
	}
	*max = 100;
	*min = 0;
}