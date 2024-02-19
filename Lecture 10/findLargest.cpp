#include<climits>
int findLargest(int input[][1001], int nRows, int mCols)
{

    int max = 0;
    int currentCol = 0;

    for(int i = 0;i<nRows;i++){
            int sumR = 0;
            int sumC = 0;
        for(int j = 0;j<mCols;j++){
            sumR+=input[i][j];
        }
        for(int k = 0;k<nRows;k++){
            sumC+=input[k][currentCol];
        }
        if (currentCol < mCols) {
            currentCol++;
        }
       if(sumR>sumC&&sumR>max){
           max = sumR;
       }
       else if(sumC>max){
           max = sumC;
       }
    }

    return max;
}

