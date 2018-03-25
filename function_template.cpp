#include <iostream>

using namespace std;

template<class T> T abs(T);

int main(){
	cout << abs(1) << endl;
	cout << abs(0.5);
	return 0;
}

template <class T>
T abs(T n){
	retunr n>=0 ? n : -n;
}