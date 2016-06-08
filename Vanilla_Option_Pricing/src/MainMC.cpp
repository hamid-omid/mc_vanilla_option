/*
 * MainMC.cpp

 *
 *  Created on: 2016-04-08
 *      Author: hamid omid
 */

#include "MC_Simulator.h"
#include <iostream>

using namespace std;

int main()
{
	double Expiry;
	double Strike;
	double Spot;
	double Vol;
	double r;
	unsigned long Number;

	cout << "\n Enter Expiry Time Please : \n";
	cin >> Expiry;

	cout << "\n Enter Strike Price Please (in $) : \n";
	cin >> Strike;

	cout << "\n Enter Spot Price Please (in $): \n";
	cin >> Spot;

	cout << "\n Enter Volatility Please : \n";
	cin >> Vol;

	cout << "\n Enter Number of Random Paths Please Used for MC : \n";
	cin >> Number;

	cout << "\n Enter Interest Rate Please : \n";
	cin >> r;

	PayOffCall call(Strike);
	PayOffPut put(Strike);

	double call_value = MonteCarlo_value( call, Expiry, Spot, Vol, r, Number);

	double put_value = MonteCarlo_value( put, Expiry, Spot, Vol, r, Number);

	cout<< "The Call Value is :" << call_value << "$" << endl ;
	cout<< "The Put Value is :" << put_value << "$" << endl ;

	return 0;
}







