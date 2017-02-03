#include "BinModel01.h"
#include "Options01.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double S0, U, D, R;
	if (GetInputData(S0, U, D, R) == 1) return 1;
	double K;
	int N;
	cout << "Enter call option data:" << endl;
	GetInputData(N, K);
	cout << "European call option price by method 1=" << PriceByCRR(S0, U, D, R, N, K) << endl << endl;
	cout << "European call option price by method 2=" << PriceByCRR2(S0, U, D, R, N, K) << endl << endl;
	
	char c=getchar();
	do {
		cout << "Input Y to stop" << endl;
		c = getchar();
	} while (c != 'Y'&&c != 'y');
	return 0;
}