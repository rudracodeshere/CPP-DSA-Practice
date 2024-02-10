bool palindrome(int n)
{
    int temp = n;
    int neww = 0;
    while(n>0){
        neww*=10;
        neww = (neww+(n%10));
        n/=10;
        }
    if(temp==neww){
        return true;
    }
    return false;
}
