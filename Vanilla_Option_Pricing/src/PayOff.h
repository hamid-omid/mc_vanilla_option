/*
 * PayOff.h
 *
 *  Created on: 2016-04-08
 *      Author: hamid omid
 */

#ifndef PAYOFF_H_
#define PAYOFF_H_


class PayOff
{
	public:

	PayOff(){};
	virtual double operator()(double Spot) const= 0;
	virtual ~PayOff(){};

	private:
};

class PayOffCall: public PayOff
{
	public:

	PayOffCall( double Strike_);
	virtual double operator()(double Spot) const;
	virtual ~PayOffCall(){};

	private:

	double Strike;

};

class PayOffPut: public PayOff
{
	public:

	PayOffPut( double Strike_);
	virtual double operator()(double Spot) const;
	virtual ~PayOffPut(){};

	private:

	double Strike;

};



#endif /* PAYOFF_H_ */
