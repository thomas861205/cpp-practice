#include <iostream>

using namespace std;

template<class T>
class Student{
private:
	T _height;
public:

	Student(){
		this->_height = 0;
	}

	Student(T);

	T getHeight(){
		return this->_height;
	}
};

// remember to add template<class T> Student<T>::
template<class T>
Student<T>::Student(T height){
	this->_height = height;
}

int main(){
	Student<int> Thomas(69);
	Student<float> Wiwek(4.2);

	cout << Thomas.getHeight() << endl;
	cout << Wiwek.getHeight();
	return 0;
}