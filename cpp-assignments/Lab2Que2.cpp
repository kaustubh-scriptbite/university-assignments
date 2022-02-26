#include <iostream>
#include <iomanip>

using namespace std;

//Named constants - residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

//Named constants - business customers
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main()
{

int accountNumber;
char customerType;
int numOfPremChannels;
int numOfBasicServConn;
double amountDue;

cout << fixed << showpoint;
cout << setprecision(2);

cout << "This program computes a cable bill." << endl;
cout << "Enter account number (an integer): ";
cin >> accountNumber;
cout << endl;

cout << "enter customer type: "
<< "R or r (Residential), "
<< "B or b (Business)";
cin >> customerType;
cout << endl;

switch(customerType)
{
case 'r':
case 'R':
cout << "Enter the number of premium channels:";
cin >> numOfPremChannels;
cout << endl;
amountDue = RES_BILL_PROC_FEES
+ RES_BASIC_SERV_COST
+ numOfPremChannels *
RES_COST_PREM_CHANNEL;
cout << "Account Number: " << accountNumber;
cout << endl;
cout << "Amount Due: $" << amountDue << endl;
break;
case 'b':
case 'B':
cout << "Enter number of basic service connections: ";
cin >> numOfBasicServConn;
cout << endl;
cout << "Enter number of premium channels: ";
cin >> numOfPremChannels;
cout << endl;
if(numOfBasicServConn <= 10)
amountDue = BUS_BILL_PROC_FEES
+ BUS_BASIC_SERV_COST
+ numOfPremChannels *
BUS_COST_PREM_CHANNEL;
else
amountDue = BUS_BILL_PROC_FEES
+ BUS_BASIC_SERV_COST
+ (numOfBasicServConn -10) *
BUS_BASIC_CONN_COST
+ numOfPremChannels *
BUS_COST_PREM_CHANNEL;
cout << "Account Number: " << accountNumber << endl;
cout << "Amount Due: $" << amountDue << endl;
break;
default:
cout << "Invalid customer type" << endl;

}

}