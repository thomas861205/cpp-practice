#include <iostream>

using namespace std;

class Vehical{
private:
	int _id;
protected:
	int _speed;
public:
	void SetSpeed(int speed){
		this->_speed = speed;
	}
};

// ********public success********
// ------------------------------
// | parent class | child class |
// ------------------------------
// | public    ----> public     |
// | protected ----> protected  |
// | private   ----> no access  |
// ------------------------------
class Bike : public Vehical{
public:
	// void PrintId() cout<<this->_id; --> NO ACCESS to private

	void PrintSpeed(){
		// since _speed is protected, so it can be accessed by child class.
		cout << this->_speed;
	}
};

// *******protected success******
// ------------------------------
// | parent class | child class |
// ------------------------------
// | public    ----> protected  |
// | protected ----> protected  |
// | private   ----> no access  |
// ------------------------------

class Motorbike : protected Vehical{

};

// *******private success********
// ------------------------------
// | parent class | child class |
// ------------------------------
// | public    ----> private    |
// | protected ----> private    |
// | private   ----> no access  |
// ------------------------------

int main(){
	Bike Giant;
	Giant.SetSpeed(420);
	
	return 0;
}