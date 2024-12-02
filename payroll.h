#ifndef PAYROLL_H
#define PAYROLL_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
	char name[100];
	char title;
	double hours_worked;
	double payrate;
	double payment;
}Employee;

double compute_payment(Employee *emp_ptr);

#endif
