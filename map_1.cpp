#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef map<int, string> STUDENT;
STUDENT students;

int main(){
	students.insert(STUDENT::value_type (0, "Thomas"));
	students.insert(pair<int, string> (1, "Hoe"));
	students[2] = "Molly";

	STUDENT::iterator ptr;
	ptr = students.find(2); // find key
	cout << ptr->first << " : " << ptr->second << endl; // key : value
	return 0;
}