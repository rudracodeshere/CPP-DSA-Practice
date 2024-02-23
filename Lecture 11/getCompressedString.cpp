string getCompressedString(string &input) {
    int L = 0;
    int R = 0;
    string res = "";
    while(L<input.size()){
        while(R<input.size()&&input[R]==input[L]){
            R++;
        }
        int c = R-L;
        if(c>1){
            res.append(input[L]+to_string(c));
        }
        else{
            res.push_back(input[L]);
        }
        L=R;
    }
    return res;
}