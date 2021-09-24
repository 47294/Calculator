#include "../includes/zapusk.h"
#include <stdio.h>
double multi(double a, double b){
	return a * b;
}
double sum(double a, double b)
{
	return a + b;	
}
double del(double a, double b)
{
	return a / b;
}
double minus(double a, double b)
{
	return a - b;
}
double stepen(double a, double b)
{
	double k=1;
	for (int c = 1; c <= b; c++) {
		k=k*a;
	}
	return k;
}
