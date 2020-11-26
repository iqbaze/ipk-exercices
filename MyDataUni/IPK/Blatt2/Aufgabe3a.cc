#include <iostream>

void fibonacci(int number){
	int zahl;
	int zahl1 = 0; //1.te Fibonacci-Zahl
	int zahl2 = 1; //2.te Fibonacci-Zahl
	if(number==1){
		std::cout<<0<<std::endl; //1te Zahl direkt ausgeben
	}else if(number == 2){
		std::cout<<0<<std::endl; //2te Zahl auch direkt ausgeben
		std::cout<<1<<std::endl;
	}else{
		//Die 0 und 1, also die 1te und 2te Fibonacci Zahl außerhalb der Schleife ausgeben
		std::cout<<0<<" "<<std::flush;
		std::cout<<1<<" "<<std::flush;
		//Die anderen Zahlen ausgeben
		for(int i = 3; i <= number; i++){
			zahl = zahl1+zahl2;
			std::cout<<zahl<<" ";
			zahl1 = zahl2;
			zahl2 = zahl;
		}
	}
}
int main(){
	int n;
	std::cout << "Bitte geben sie an, die wievielte Zahl sie wollen." << std::endl;
	std::cin >> n;
	fibonacci(n);
}
