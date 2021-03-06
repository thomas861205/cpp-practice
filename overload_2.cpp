# include <iostream>
# include  <string>

using namespace std;

class Car{
private:
	int _speed;
public:
	int GetSpeed();
	void SetSpeed(int);
	void Accelerate();
	void Accelerate(int);
	void Accelerate(string);
};

int Car::GetSpeed(){
	return this->_speed;
}

void Car::SetSpeed(int speed){
	this->_speed = speed;
}

void Car::Accelerate(){
	this->_speed += 1;
}

void Car::Accelerate(int speed){
	this->_speed += speed;
}

void Car::Accelerate(string msg){
	if (msg == "STOP") this->_speed = 0;
}

int main(){
	Car Benz;
	Benz.SetSpeed(420);
	cout << Benz.GetSpeed() << endl;

	Benz.Accelerate();
	cout << Benz.GetSpeed() << endl;

	Benz.Accelerate(69);
	cout << Benz.GetSpeed() << endl;


	Benz.Accelerate("STOP");
	cout << Benz.GetSpeed() << endl;
	return 0;
}