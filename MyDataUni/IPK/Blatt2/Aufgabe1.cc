#include <cmath>
#include <iostream>
#include <math.h>

int main(){
	double a,b,c;
	//Eingabe und Einlesen der drei Variablen
	std::cout << "Geben sie a an:" << std::endl;
	std::cin >> a;
	std::cout << "Geben sie b an:" << std::endl;
	std::cin >> b;
	std::cout << "Geben sie c an:" << std::endl;
	std::cin >> c;
	double d = (b*b)-(4*a*c);
	//Berechnung der Wurzel
	double wurzel = std::sqrt(d);
	//Berechnung der Nullstellen
	double n1 = (((-1*b)+wurzel)/(2*a));
	double n2 = (((-1*b)-wurzel)/(2*a));
	//Prüfen ob keine/eine/zwei Nullstellen + Ausgabe
	if(isnan(n1)==true||isnan(n2)==true){
		std::cout << "Die Funktion hat keine Nullstellen." << std::endl;
	}else if(n1 == n2){
		std::cout << "Die Funktion hat die Nullstelle: " << n1 << std::endl;
	}else{
		std::cout << "Die Funktion hat die Nullstellen: " << n1 << " und " << n2 << std::endl;
	}
	return 0;	
}
