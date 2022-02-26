// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
const double feet_to_inch = 12; // conversion from feet to inches
const double inch_to_centi = 2.54; // conversion from inches to centi

string input = "";
int feet = 0;
int inches = 0;
double total_inches = 0.0;
double total_centi = 0.0;

// Entered value by user in feet
cout << "Enter in feet and inches in below format Ex: 5,4 or 5,0:\n" ;
cin >> input ;

vector<int> v;

stringstream ss(input);

for (int i; ss >> i;) {
        v.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }

for (size_t i = 0; i < v.size(); i++){
    if(i == 0){
        feet = v[i];
    }else{
        inches = v[i];
    }
}

//Calculate number of inches
total_inches = (feet * feet_to_inch) + inches ;

// Convert to centimeters
total_centi = total_inches * inch_to_centi ;

// Output results
cout << "\n The Result in inches: " << total_inches << " and in Centimeters: "<<total_centi;

char c;
cout << "\n Press anything to Exit" ;
cin >> c;

return 0;

}