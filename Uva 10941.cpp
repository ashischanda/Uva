/**
********************************************
This code only for beginners. Please, Don't Copy Past
********************************************
**/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int Car, NW, NS;
	while(scanf("%d %d %d", &NW, &Car, &NS) == 3){
		int T = NW + Car;
		printf("%.5lf\n", (Car * (T - 1)/(double)(T * (T - NS - 1))));
	}
	return 0;
}
