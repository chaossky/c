
#include "stdafx.h"
#include <iostream>

int main(int argc, const char * argv[]) {
	// insert code here...
	int a = 10;
	int *p = &a;


	std::cout << "포인터 값은 :" << *p << std::endl << "주소값은 :" << p << "   " << std::endl;
	std::cout << &a << std::endl;
	return 0;
}