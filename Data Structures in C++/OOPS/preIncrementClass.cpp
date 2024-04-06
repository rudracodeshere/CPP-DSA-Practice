class PreIncrement{
    public:
    int num;
    int den;

    PreIncrement& operator++(){
        num = num+den;
        return *this;
    }

    void print(){
        cout<<num<<"/" << den<<endl;
    }
};