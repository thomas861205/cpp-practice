#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Point{
private:
	static int total;
public:
	int _x;
	int _y;
	Point();
	~Point();
	static int getTotal();
};

int Point::total = 0;

Point::Point(){
	_x = 0;
	_y = 0;
	total++;
}

Point::~Point(){
	total--;
}

int Point::getTotal(){
	return total;
}


int main(){
	cout << "Total objects: " << Point::getTotal() << endl;

	vector<Point> cluster(5);
	srand( (unsigned)time(NULL) );

	for (int i = 0; i < 5; i++){
		cluster.at(i)._x = rand()%10;
		cluster.at(i)._y = rand()%10;
	}
	cout << "Total objects: " << Point::getTotal() << endl;


	for (int i = 0; i < 5; i++){
		cout << '(' << cluster.at(i)._x  << ',' << cluster.at(i)._y << ')' << endl; 
	}

	cluster.clear();
	cout << "Total objects: " << Point::getTotal() << endl;
	return 0;
}