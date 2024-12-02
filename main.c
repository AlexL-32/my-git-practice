#include "payroll.h"


int main(void)
{
	Employee payroll[200];

	FILE* infile = fopen("payroll.txt", "r");
	FILE* outfile = fopen("paid.txt", "w");



	fclose(infile);
	fclose(outfile);
	return 0;
}