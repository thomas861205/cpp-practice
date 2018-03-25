#include <iostream>
#include <string> 
using namespace std;

class Obj{
private:
	int no;
	string name;
	static int objCounter; // private
public:
	Obj();
	~Obj(){
		objCounter--;
	}
	static int getTotal();
	int getNo(){
		return this->no;
	}
	string getName(){
		return this->name;
	}
};

Obj::Obj(){
	this->no = objCounter;
	this->name = "default";
	objCounter++;
}

int Obj::getTotal(){
	return objCounter;
}

int Obj::objCounter = 0;

int main(){
	Obj *arr;
	arr = new Obj[5]; // call the constuctor 5 times

	cout << "Total objects: " << Obj::getTotal() << endl;

	for (int i = 0; i < 5; i++){
		cout << arr[i].getNo() << ". " << arr[i].getName() << endl;
	}
	delete [] arr;

	cout << "Total objects: " << Obj::getTotal() << endl;
	return 0;
}