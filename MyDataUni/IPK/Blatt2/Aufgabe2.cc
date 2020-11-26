#include <iostream>
void collatz(int number){
	std::cout << number << std::endl;
	while(number!=1 && number!=0 && number!=-1 && number!=-5 && number!=-17){
		if((number%2)==0){       //Test, ob die Zahl gerade ist
			number = number/2;
		}else{
			number = number*3+1;
		}
		std::cout << number << std::endl;
	}
	std::cout << number << std::endl;
}

int main(){
	int n;
	std::cout << "Geben sie eine Nummer an." << std::endl;
	std::cin >> n;
	//Anwendung der Funktion
	collatz(n);
	return 0;
}
