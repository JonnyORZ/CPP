#ifndef Options03_h
#define Options03_h

int GetInputData(int &N, double &K);
double PriceByCRR(double S0, double U, double D, double R, int N, double K, double(*Payoff)(double z, double K));
double CallPayoff(double z, double K);
double PutPayoff(double z, double K);
double DigitCallPayoff(double z, double K);
double DigitPutPayoff(double z, double K);

#endif