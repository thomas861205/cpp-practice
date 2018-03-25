#include <iostream>

using namespace std;

class Car{
public:
	int No;
	static int Total;
	static void ShowTotal(){ // static functons can only access static variables
		cout << "Total: " << Total << endl;
	}
};
int Car::Total = 0;
// or int::Car::Total = 0;
int main(){
	Car::ShowTotal(); // notice static function is not limit to class scope
	return 0;
}