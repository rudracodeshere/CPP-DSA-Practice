string removeConsecutiveDuplicates(string str) 
{
    for(int i = 0;i<str.size();){
        if(i>0){
            if(str[i]==str[i-1]){
                str.erase(i,1);
            }
            else{
                i++;
            }
        } else {
            i++;
        }
    }
    return str;
}