#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

//new additions
	int i;
	
	Complex (*oper_ptr[4])(Complex, Complex);
	oper_ptr[0] = complex_add;
	oper_ptr[1] = complex_sub;
	oper_ptr[2] = complex_mult;
	oper_ptr[3] = complex_div;
	
	double (*mag_phase[2])(Complex);
	mag_phase[0] = magnitude;
	mag_phase[1] = phase;

	for(i=0; i<4; i++){
		handler(oper_ptr[i], a, b);
	}
	printf("\n");

	for(i=0; i<2; i++){
		handler2(mag_phase[i],(a));
		handler2(mag_phase[i],(b));
	}
	printf("\n");
//
	return 0;
}
