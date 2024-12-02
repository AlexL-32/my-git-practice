#include "payroll.h"


int main(void)
{
	Employee payroll[200];
	

	FILE* infile = fopen("payroll.txt", "r");
	FILE* outfile = fopen("paid.txt", "w");


	char line[200];

	while (fgets(line, sizeof(line), infile))
	{
		Employee* emp = &payroll[200];




	}

	fclose(infile);
	fclose(outfile);
	return 0;
}
