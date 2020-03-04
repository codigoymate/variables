#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

	printf("%-23s%-7s%s\n", "Variable", "Bytes", "Rango");

	printf("%-25s%-5li%i a %i\n", "[signed] char", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
	printf("%-25s%-5li%i a %i\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);

	printf("%-25s%-5li%i a %i\n", "[signed] short [int]", sizeof(signed short int), SHRT_MIN, SHRT_MAX);
	printf("%-25s%-5li%i a %i\n", "unsigned short [int]", sizeof(unsigned short int), 0, USHRT_MAX);

	printf("%-25s%-5li%i a %i\n", "[signed] int", sizeof(signed int), INT_MIN, INT_MAX);
	printf("%-25s%-5li%i a %u\n", "unsigned int", sizeof(unsigned int), 0, UINT_MAX);

	printf("%-25s%-5li%li a %li\n", "[signed] long [int]", sizeof(signed long int), LONG_MIN, LONG_MAX);
	printf("%-25s%-5li%i a %lu\n", "unsigned long [int]", sizeof(unsigned long int), 0, ULONG_MAX);

	printf("%-25s%-5li%.5e a %.5e\n", "float", sizeof(float), FLT_MIN, FLT_MAX);
	printf("%-25s%-5li%.5e a %.5e\n", "double", sizeof(double), DBL_MIN, DBL_MAX);
	printf("%-25s%-5li%.5Le a %.5Le\n", "long double", sizeof(long double), LDBL_MIN, LDBL_MAX);

	return 0;
}
