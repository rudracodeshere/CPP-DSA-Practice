long long int floorSqrt(long long int N)
{
    long long int start , end, ans,mid;
    start =1 ;
    end = N;
    while(start<=end){
        mid = (start+end)/2;
        if(mid*mid==N){
            return mid;
        }
        else if (mid*mid<N){
            start=mid+1;
            ans = mid;
        }
        else{
            end = mid-1;
        }
    }return ans;
}
