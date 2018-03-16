# include <iostream>

using namespace std;

class Car{
	private:
		int _speed;
	public:
		int GetSpeed(){
			return this->_speed;
		}
		void SetSpeed(int speed){
			if (speed >= 200) this->_speed = 200;
			else if (speed <= 0) this->_speed = 0;
			else this->_speed = speed;
		}
};

int main(int argc, char const *argv[])
{
	Car Benz;
	Benz.SetSpeed(420);
	cout << Benz.GetSpeed();	
	return 0;
}