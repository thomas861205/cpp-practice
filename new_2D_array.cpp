#include <iostream>

using namespace std;

int main(){
	int n;
	int **row;

	cin >> n;
	row = new int *[n];

	for (int i=0; i<n; i++){
		row[i] = new int[n];
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			row[i][j] = i*n + j + 1;
		}
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << row[i][j] <<' '; 
		}
		cout<<endl;
	}

	for (int i=0; i<n; i++) delete[] row[i];
	delete[] row;
	return 0;
} 