class Student{
    int age;

    public:
        char *name;
    Student(int a, char *n){
        age = a;
        name = n;
    }

    void print(){
        cout<<age<<" "<<name<<endl;
    }

    Student(Student &s){
        this->age = s.age;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
};
