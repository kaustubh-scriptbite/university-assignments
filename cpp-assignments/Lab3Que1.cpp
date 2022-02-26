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

double resFunction(){
    int numOfPremChannels;
    double amountDue;
    cout << "Enter the number of premium channels:";
    cin >> numOfPremChannels;
    cout << endl;
    amountDue = RES_BILL_PROC_FEES
    + RES_BASIC_SERV_COST
    + numOfPremChannels *
    RES_COST_PREM_CHANNEL; 
    return amountDue;
}

double busFunction(){
    int numOfBasicServConn;
    int numOfPremChannels;
    double amountDue;
    cout << "Enter number of basic service connections: ";
    cin >> numOfBasicServConn;
    cout << "Enter number of premium channels: ";
    cin >> numOfPremChannels;
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
    return amountDue;
}

int main()
{

int accountNumber;
char customerType;
double amtDue;

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
amtDue = resFunction();
cout << "Account Number: " << accountNumber;
cout << endl;
cout << "Amount Due: $" << amtDue << endl;
break;
case 'b':
case 'B':
amtDue = busFunction();
cout << "Account Number: " << accountNumber << endl;
cout << "Amount Due: $" << amtDue << endl;
break;
default:
cout << "Invalid customer type" << endl;

}

}