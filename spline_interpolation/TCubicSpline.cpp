#include "TCubicSpline.h"


void TCubicSpline::MakeSpline(double * x, double * y, int size)
{
	if (s != NULL)
		delete[] s;

	points_num = size;
	s = new segment[size+1];
	s[0].x0 = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		s[i].x1 = s[i+1].x0 = x[i];
		s[i].coeff0 = y[i];
	}
	s[size].x1 = INT_MAX;
	s[size].coeff0 = 0;
	s[size].coeff2 = s[0].coeff2 = 0;

	double *alpha = new double[size - 1];
	double *beta = new double[size - 1];

	//метод прогонки
	alpha[0] = beta[0] = 0;
	for (int i = 1; i < size - 1; i++)
	{
		alpha[i] = (x[i] - x[i + 1]) / ((x[i] - x[i - 1])*alpha[i - 1] 
			+ 2 * (x[i + 1] - x[i - 1]));
		beta[i] = (6 * ((y[i + 1] - y[i]) / (x[i + 1] - x[i]) - (y[i] - y[i - 1])
			/ (x[i] - x[i - 1])) - (x[i] - x[i - 1])*beta[i - 1]) 
			/ ((x[i] - x[i - 1])*alpha[i - 1] + 2 * (x[i + 1] - x[i - 1]));
	}
	
	//обратный ход
	/*s[size - 1].coeff2 = (x[size - 2] - x[size - 1])*beta[size - 2] 
		/ ((x[size - 1] - x[size - 2])*alpha[size - 2]*2);*/
	for (int i = size - 1; i > 0; i--)
	{
		s[i].coeff2 = (alpha[i] * s[i + 1].coeff2 + beta[i])/2;
	}

	for (int i = 1; i < size; i++)
	{
		s[i].coeff3 = 2*(s[i].coeff2 - s[i - 1].coeff2) / (6*(x[i] - x[i - 1]));
		s[i].coeff1 = (x[i] - x[i - 1])*s[i].coeff2 - (x[i] - x[i - 1])
			*(x[i] - x[i - 1])*s[i].coeff3 + (y[i] - y[i - 1]) / (x[i] - x[i - 1]);
	}
}

void TCubicSpline::GetSpline(segment * seg, int & size)
{
	/*if (seg != NULL)
		delete[] seg;

	seg = new segment[points_num - 1];*/
	for (int i = 0; i < points_num - 1; i++)
	{
		seg[i] = s[i+1];
	}
	size = points_num;
}

double TCubicSpline::GetY(double x)
{
	if (s == NULL)
		return 0;

	double tmp_x=s[0].x1;
	if (x < tmp_x)
		return 0;
	for (int i = 1; i < points_num; i++)
	{
		tmp_x = s[i].x1;
		if (tmp_x > x)
		{
			double dx = x - tmp_x;
			return s[i].coeff3*dx*dx*dx + s[i].coeff2*dx*dx + s[i].coeff1*dx + s[i].coeff0;
		}
	}
	return 0;
}
