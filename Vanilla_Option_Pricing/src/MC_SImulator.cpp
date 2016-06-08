/*
 * MC_SImulator.cpp

 *
 *  Created on: 2016-04-08
 *      Author: hamid omid
 */

#include "MC_Simulator.h"
#include "random_mine.h"
#include <cmath>

#if !defined(_MSC_VER)
using namespace std;
#endif

double MonteCarlo_value (const PayOff & thePayOff, double Expiry, double Spot, double Vol,
	double r, unsigned long Number)
	{
		double variance = Vol* Vol* Expiry;
		double rootVariance = sqrt(variance);
		double itoCorr = -0.5*variance ;

		double new_Spot  = Spot * exp( r* Expiry +itoCorr);
		double this_Spot;
		double Sum = 0;

		for( unsigned long i=0; i < Number ; i++)
		{
			double this_Gaussian = Get_Gaussian();
			this_Spot = new_Spot *exp( rootVariance*this_Gaussian);
			double this_PayOff = thePayOff(this_Spot);
			Sum += this_PayOff;
		}

		double mean = Sum/Number;
		mean *= exp( -r*Expiry);
		return mean;
	};






