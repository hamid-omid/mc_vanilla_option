/*
 * MC_Simulator.h

 *
 *  Created on: 2016-04-08
 *      Author: hamid omid
 */

#ifndef MC_SIMULATOR_H_
#define MC_SIMULATOR_H_
#include "PayOff.h"

double MonteCarlo_value( const PayOff &thePayOff, double Expiry, double Spot, double Vol, double r, unsigned long Number);


#endif /* MC_SIMULATOR_H_ */
