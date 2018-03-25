#include <iostream>

using namespace std;

int main(){
	try{
		int a;

		cin >> a;
		if (a == 0) throw(0);
		else if (a == 1) throw(1);
		else throw("Nothing."); 
	}
	catch(int err){
		cout << "a is " << err;
	}
	catch(const char *str){
		cout << str;
	}
	return 0;
}