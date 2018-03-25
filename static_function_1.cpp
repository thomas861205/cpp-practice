#include <iostream>

using namespace std;

class Car{
public:
	int No;
	static int Total;
	static void ShowTotal(){
		cout << "Total: " << Total << endl;
	}
};
int Car::Total = 0;
// or int::Car::Total = 0;
int main(){
	Car::ShowTotal();
	return 0;
}