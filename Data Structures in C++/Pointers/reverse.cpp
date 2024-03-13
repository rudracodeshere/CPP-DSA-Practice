void reverse(int *ar,int n)
{
	int * b = 0;
	int * e= 0;
	for(int i = 0;i<n/2;i++){
		b = &ar[i];
		e = &ar[n-i-1];
		int temp = *b;
		*b = *e;
		*e = temp;
	}
}