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
	for (int i=0; i<3; i++){
		cout<<(i+1)<<": ";
		cin>>myClassmates[i].name>>myClassmates[i].age;
	}
	for (int i=0; i<3; i++) myClassmates[i].PrintInfo();
	return 0;
}