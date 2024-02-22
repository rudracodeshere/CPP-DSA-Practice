bool checkPalindrome(string str) {
    int l = 0;
    int r= str.size()-1;
    while(l<r){
        if(str.at(l)!=str.at(r)){
            return false;
        }
        l++;r--;
    }
    return true;
}