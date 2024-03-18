int totalSum(vector<vector<int>> input, int n)
{
    int diagonal_sum = 0;
    for(int i = 0;i<n;i++){
        diagonal_sum+=input[i][i];
        diagonal_sum+=input[i][n-i-1];
    }
        if (n % 2 != 0) {
          diagonal_sum -= input[n / 2][n / 2];
        }
    int row_sum = 0;
    for(int i = 1;i<n-1;i++){
        row_sum+= input[0][i];
        row_sum+= input[n-1][i];
    }

    int col_sum = 0;
    for(int i = 1;i<n-1;i++){
        col_sum+= input[i][0];
        col_sum+= input[i][n-1];
    }
int final_sum = diagonal_sum+row_sum+col_sum;
return final_sum;
}