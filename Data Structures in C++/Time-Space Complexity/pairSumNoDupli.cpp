int pairSum(int A[], int size, int K)
{
     int i = 0;
     int j = size-1;
     int count = 0;
     while(i<j){
          if(A[i]+A[j]==K){
               count++;
               i++;
               j--;
          }
          if(A[i]+A[j]>K){
               j--;
          }
          if(A[i]+A[j]<K){
               i++;
          }
     }
     return  count;
}