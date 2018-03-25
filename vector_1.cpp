#include <vector>
#include <iostream>

using namespace std;

int main(){
	vector<int> container(5);
	vector<int>::iterator ptr;

	for (int i = 0; i < 5; i++){
		container[i] = i;
	}
	for (int i = 0; i < 5; i++){
		container.push_back(i + 5);
	}
	for (ptr = container.begin(); ptr!=container.end(); ptr++){
		cout << *ptr << ' ';
	}
	return 0;
}

// vector.at(6) == vector[6]
// 但at會做邊界檢查

// push_back()超過容量時會resize成兩倍

// 預留 reserve()
// reserve() 的目的是擴大容量，做完時，vector 的長度不變，capacity 只會長大不會縮小，資料所在位置可能會移動
// Step 1. 如果 N <= 容量，不做事結束。
// Step 2. 配置大小為 N 的空間，
// Step 3. 把資料拷過去，
// Step 4. 歸還原來的儲存空間，
// Step 5. 更新陣列的起點、終點、容量。

// 調整長度 resize()
// 調整長度目的是改變 vector 的長度，如果變小就擦掉尾巴的資料，如果變大就補零。



// int array[] = {0,1,2,3,4};
// vector v(10,0); // {0,0,0,0,0,0,0,0,0,0}
// vector v1;
// vector v3(v.begin(), v.end())
// v1.assign(10, 0); // v1 設 10 個 0
// v1.assign(v.begin(), v.end()); // v1 複制 v
// v1.assign(v.begin(), v.begin()+5); // 複製 v 前5個元素到 v1
// v1.assign(array, array+5); // 複製 array 前5個元素到 v1


// vector<int> row;
// row.assign(n,0);//配置一個 row 的大小
// vector< vector<int> > array_2D;
// array_2D.assign(n,row);//配置2維