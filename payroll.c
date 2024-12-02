#include "payroll.h"

double compute_payment(Employee* emp_ptr)
{
	double expected_hours = 80.0;

	if (emp_ptr->title == 'M')
	{
		double overtime_rate = 1.8;
	}
	else
	{
		double overtime_rate = 1.5;
	}
}
