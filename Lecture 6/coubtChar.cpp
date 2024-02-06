#include<iostream>
using namespace std;
int main(){
char c;
c=cin.get();
int lc = 0,num = 0,esc=0;
while(c!='$'){
    if(c>='a'&&c<='z'){
        lc++;
    }
    else if(c>='0'&&c<='9'){
        num++;
    }
    else{
        esc++;
    }
    c=cin.get();
}
cout<<lc<<" "<<num<<" "<<esc;
}
