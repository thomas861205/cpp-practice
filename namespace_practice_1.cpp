# include <iostream>

namespace thomas{
	int name;
}

int main(void){
	thomas::name = 0;
	std::cout << thomas::name;
	return 0;
}