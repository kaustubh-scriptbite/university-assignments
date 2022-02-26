// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

string movie_name = "";
int total_adult_ticket_sold = 0;
int total_child_ticket_sold = 0;
double price_adult_ticket = 0.00;
double price_child_ticket = 0.00;
double donation_percentage = 0.00;

int total_ticket_sold = 0;
double gross_amount = 0.00;
double amount_donated = 0.00;
double net_sale = 0.00;

// Entered value by user in feet
cout << "Enter Movie Name : ";
cin >> movie_name;

cout << "\nEnter the price of an adult ticket : ";
cin >> price_adult_ticket;

cout << "\nEnter the price of child ticket : ";
cin >> price_child_ticket;

cout << "\nEnter the total adult ticket sold : ";
cin >> total_adult_ticket_sold;

cout << "\nEnter the total child ticket sold : ";
cin >> total_child_ticket_sold;

cout << "\nEnter the percentage of donation : ";
cin >> donation_percentage;

total_ticket_sold = total_adult_ticket_sold + total_child_ticket_sold;

gross_amount = (total_adult_ticket_sold * price_adult_ticket) + (total_child_ticket_sold * price_child_ticket);

amount_donated = (gross_amount * (donation_percentage / 100));

net_sale = gross_amount - amount_donated;

cout << "\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*";

// Output results
cout << "\nMovie Name: ....................... " << movie_name;
cout << "\nNumber of Ticket Sold: ............ " << total_ticket_sold;
cout << "\nGross Amount: ..................... " << gross_amount;
cout << "\nPercentage of Gross Amount Donated: " << donation_percentage;
cout << "\nAmount Donated: ................... " << amount_donated;
cout << "\nNet Sale: ......................... " << net_sale;

char c;
cout << "\n Press anything to Exit" ;
cin >> c;

return 0;

}