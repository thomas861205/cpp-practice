#include <iostream>
#include <set>

using namespace std;

int arr[] = {1, 2, 4, 6, 8};
set<int> numbers(arr, arr + sizeof(arr)/sizeof(int));

int main(){
	set<int>::iterator ptr;

	cout << numbers.size() << endl;

	ptr = numbers.find(6);
	if (ptr == numbers.end())
		cout << "Not found." << endl;
	else
		cout << "6 is found." << endl;

	numbers.erase(1);
	
	for (ptr = numbers.begin(); ptr!=numbers.end(); ptr++){
		cout << *ptr << ' ';
	}
	return 0;
}