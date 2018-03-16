# include <iostream>
# include <string>

using namespace std;

class Car{
	private:
		int _speed;

	public:
		int GetSpeed(){
			return this->_speed;
		}

		void SetSpeed(int speed){
			this->_speed = speed;
		}

		void Accelerate(){
			this->_speed += 1;
		}

		void Accelerate(int speed){
			this->_speed += speed;
		}

		void Accelerate(string msg){
			if (msg == "STOP") this->_speed = 0;
		}
};

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