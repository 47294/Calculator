#include "../includes/zapusk.h"
#include <stdio.h>
double factorial(double a){
	double k = 1;
	for(int i=1;i<=a;i++){
		k*=i;
	}
	return k;
}
