void wavePrint(int input[][1001], int nRows, int mCols)
{
    for(int i = 0;i<mCols;i++){
        if(i%2==0){
          for (int j = 0; j < nRows; j++) {
            cout << input[j][i]<<" ";
          }
        }
        else{
            for (int j = 0; j < nRows; j++) {
            cout << input[nRows-j-1][i]<<" ";
          }
        }
    }
}
