class Student{
    int age;
    char *name;
    public:
    Student(int a, char *n){
        age = a;
        name = n;
    }

    void print(){
        cout<<age<<" "<<name<<endl;
    }
};
