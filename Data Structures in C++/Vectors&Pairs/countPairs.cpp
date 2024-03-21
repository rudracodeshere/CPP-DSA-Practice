int countPairs(vector<pair<int,int>> a){
    int count= 0;
   for(int i = 0;i<a.size();i++){
       if(a[i].first > a[i].second){
           count++;
       }
   }
    return count;
}