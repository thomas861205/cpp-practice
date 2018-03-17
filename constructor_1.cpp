#include <iostream>

using namespace std;

class Car{
private:
	int _speed;
public:
	Car(){
		_speed = 0;
		cout<<"Speed initialized: "<<_speed<<endl;
	}
	Car(int speed){
		_speed = speed;
		cout<<"Speed initialized: "<<_speed<<endl;
	}
	~Car(){
		cout<<"Object deconstructed."<<endl;
	}
};

void foo(){
	Car Benz;
}

int main(){
	foo();
	Car BMW(10);
	return 0;
}