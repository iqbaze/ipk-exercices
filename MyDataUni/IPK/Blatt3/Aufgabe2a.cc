#include <iostream>
#include <cmath>

namespace power{
	int iterative(int q, int n){
		int erg = 1;	
		int i = 0;
		while(i < n){
			if(n == 0){
				erg = 1;
			}	
			erg = erg*q;
			i++;
		}
		return erg;
	}

	int recursive(int q1, int n1){
		if(n1 == 0){
			return 1;
		}
		else{
			return recursive(q1,--n1)*q1;
		}
	}

	int notnaive(int qz, int nz){
		int ergz = 1;	
		int iz = 0;
		while(iz < (nz-1)){
			if((nz-1) == 0){
				ergz = 1;
			}else{
				ergz = ergz*qz;
				iz++;
			}	
			
		}
		return ergz;
	}
}
	int main(){
		int a,b;
		std::cout<<"Geben sie die Basis an. q = " << std::endl;
		std::cin>>a;
		std::cout<<"Geben sie den Exponenten an. n = " << std::endl;		
		std::cin>>b;
		int ergebnis = power::iterative(a,b); //iterativ
		std::cout<<"Das Ergebnis ist: " << ergebnis << std::endl;	
		int ergebnis2 = power::recursive(a,b); //rekursiv (Aufgabe 2b)
		std::cout<<"Das rekursive Ergebnis ist " << ergebnis2 << std::endl;
		int ergebnis3 = power::notnaive(a,b); //Nicht naive Implementierung (Aufgabe 2c)
		std::cout << "Das Ergebnis mit " << (b-1) << " Wiederholungen ist " << ergebnis3 << std::endl;
		return 0;
	}

