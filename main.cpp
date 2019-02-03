#include <iostream>
#include <cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double kali (double a, double b){
	return a *b;
}

void tulis(double a){
            std::cout<<a;
        }



int main(int argc, char** argv) {
	
	
	double hasil;
	
	hasil = kali(4.0,2.0);
	
	tulis (hasil);
	
	
	return 0;
}
