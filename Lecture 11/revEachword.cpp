#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string n;
    getline(cin,n);
    string wrd = "";
    for(int i = 0;i<n.size();i++){
        if(n.at(i)==' '){
        reverse(wrd.begin(),wrd.end());
        cout<<wrd<<" ";
        wrd="";
        }
        else{
            wrd.push_back(n.at(i));
        }
    }
    if(wrd!=""){
         reverse(wrd.begin(),wrd.end());
         cout<<wrd;
        wrd="";
    }

}