void reverseArray(vector<int> &arr , int m){
    int end = arr.size()-1;
   for(int i = m+1;i<=(arr.size()+m)/2;i++){
       swap(arr[i],arr[end]);
       end--;
   }
}