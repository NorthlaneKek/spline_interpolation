#ifndef _T_CUBIC_SPLINE_H_
#define _T_CUBIC_SPLINE_H_

#include <stdlib.h>
using namespace std;

struct segment
{
	double coeff0, coeff1, coeff2, coeff3;
	double x0, x1;
};

class TCubicSpline
{
private:
	segment *s;
	int points_num;
public:
	TCubicSpline() { points_num = 0; s = NULL; };
	~TCubicSpline() { delete[] s; };

	void MakeSpline(double *x, double *y, int size);
	void GetSpline(segment *seg, int &size);
	double GetY(double x);
};

#endif
