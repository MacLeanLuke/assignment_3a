//cryptocurrency_converter.cpp: This program asks the user for a whole number of dollars to convert into two cryptocurrencies: Bitcoin and Ethereum.
//Name: Luke MacLean
//Class Section: COSC-1436.900 Online
// Date: 09/19/2021

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Constants: will store the conversion factors in the constants BTC_PER_DOLLAR and ETH_PER_DOLLAR (BTC and ETH are the currency codes for Bitcoin and Ethereum).
    const double BTC_PER_DOLLAR = .000021;
    const double ETH_PER_DOLLAR = .00028;

    // Variables: to hold the number of dollars to convert
    double dollars, dollarsIntoBTC, dollarsIntoETH;

    // asks the user for a whole number of dollars to convert
    cout << "Please enter a dollar amount to convert into Bitcoin and Ethereum \n";
    cin >> dollars;

    // calculates the resulting amount of Bitcoin and Ethereum 
    dollarsIntoBTC = dollars * BTC_PER_DOLLAR;
    dollarsIntoETH = dollars * ETH_PER_DOLLAR;

    // Format your currency amounts in fixed-point notation, with three decimals of precision, and be sure that the decimal point is always displayed.
    cout << "Using the conversion rates of " << BTC_PER_DOLLAR << " Bitcoin per dollar and "<< ETH_PER_DOLLAR << " Ethereum per dollar: \n \n" << dollars << " dollars = " << fixed << setprecision(3) << showpoint << dollarsIntoBTC <<" Bitcoin. \n" << setprecision(0) << noshowpoint <<  dollars << " dollars = " <<  fixed << setprecision(3) << showpoint << dollarsIntoETH << " Ethereum. \n" << endl;
    return 0;
}