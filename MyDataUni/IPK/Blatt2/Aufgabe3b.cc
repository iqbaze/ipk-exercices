#include <iostream>

//Da schon in 3a die Iteration, anstatt der Rekursion benutzt wurde, 3b ii schon erfüllt

int fibonacci(int number){
	
	long f1 = 0;
	long f2 = 1;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	
	for (int i = 3; i <= number; i++){
		long f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		std::cout << f3 << std::endl;
	}
	return 0;
}

int main (int argc, char** argv) {
	
	int num;
	std::cin >> num;
	if (num == 0) {
		std::cout << "Invalid input" << std::endl;
	} else if (num == 1) {
		std::cout << 0 << std::endl;
	} else if (num == 2) {
		std::cout << 1 << std::endl;
	} else{
	fibonacci(num);}
	
	return 0;
}
