void rotate(int *input, int d, int n)
{
    int * temp = new int[d];
    for(int i = 0;i<d;i++){
        temp[i]=input[i];
    }

    int start = 0;
    for(int i = d;i<n;i++){
        input[start]=input[i];
        start++;
    }
    int j = 0;
    for(int i = start;i<n;i++){
        input[i]=temp[j];
        j++;
    }

}