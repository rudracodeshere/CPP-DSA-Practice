int totalSum(int input[][501], int n)
{
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(i != 0 && i != n-1){
            sum += input[i][0];
            sum += input[i][n - 1];

        }
        if(i == 0 || i == n-1){
            for(int j = 1;j<n-1;j++){
                sum+=input[i][j];
            }
        }
        if (n - i - 1 != i) {
            sum += input[i][i];
            sum += input[i][n - i - 1];
        }
        else{
            sum += input[i][i];
        }
    }
    return sum;
}
