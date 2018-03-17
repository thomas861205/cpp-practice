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


int main(){
    Car *ptr, *ptr2;
    ptr = new Car;
    delete ptr;

    ptr2 = new Car(420);
    delete ptr2;
    return 0;
}