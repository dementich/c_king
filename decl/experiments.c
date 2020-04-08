#include <stdio.h>
#include "st.c"

double evaluate_polynomial(double * coefficients)
{
	return coefficients[0] + coefficients[1] + coefficients[2];
}

int main(void)
{
	int polynomial_selected = 0;
	double *coefficients, value;
	if(polynomial_selected == 1)
	{coefficients = (double[3]) {1.5, -3.0, 6.0};}
	else
	{coefficients = (double[3]) {4.5, 1.0, -3.5};}
	value = evaluate_polynomial(coefficients);
	printf("Value = %f\n", value);
	return 0;
}