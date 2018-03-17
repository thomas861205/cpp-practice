#include <iostream>
#include <string>

using namespace std;

class Student{
public:
    string name;
    int age;
    void PrintInfo(){
        cout<<"Name :"<<this->name<<", age: "<<this->age<<endl;
    }
};

int main(){
    Student myClassmates[3];
    Student *ptr;
    ptr = myClassmates;
    for (int i=0; i<3; i++){
        cout<<(i+1)<<": ";
        cin>>(ptr+i)->name>>(ptr+i)->age;
    }
    for (int i=0; i<3; i++) (ptr+i)->PrintInfo();
    return 0;
}