#include<climits>
int binarySearchClosest(int arr[], int left, int right, int target)
{
  while(left<right-1){
      int mid  = (left+right)/2;
      if(arr[mid]==target){
          return mid;
      }
      else if (arr[mid]<target){
          left = mid;
      }
      else{
          right=mid;
      }
  }
  if(arr[right]-target<target-arr[left]){
      return right;
  }
  else
      return left;

}
