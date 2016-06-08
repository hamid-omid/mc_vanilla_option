/*
 * random_mine.cpp

 *
 *  Created on: 2016-04-08
 *      Author: hamid omid
 */


#include "random_mine.h"
#include <cstdlib>
#include <cmath>

#if !defined(_MSC_VER)
using namespace std;
#endif

double Get_Gaussian()
{
	double result ;

	double x;
	double y;
	double size;

	do
	{
		x=2.0*rand()/static_cast<double>(RAND_MAX)-1;
		y=2.0*rand()/static_cast<double>(RAND_MAX)-1;
		size = x*x+y*y ;
	}
	while( size >= 1.0 );

	result = x*sqrt( -2*log(size)/size);

	return result;
};





