#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

ifstream inputFile;
ofstream outputFile;

string firstName;
string lastName;

double testScore1, testScore2, testScore3, testScore4, testScore5;
double avgScore;

inputFile.open("test.txt");

outputFile.open("testavg.out");

outputFile << fixed << showpoint;
outputFile << setprecision(2);

cout << "Processing Data" << endl;

inputFile >> firstName >> lastName;
inputFile >> testScore1 >> testScore2 >> testScore3 >> testScore4 >> testScore5;

avgScore = (testScore1 + testScore2 + testScore3 + testScore4+ testScore5) / 5.0;

outputFile << "Student Name: " << firstName << " "
<< lastName << endl;
outputFile << "Test Scores: " << setw(6) << testScore1
<< setw(6) << testScore2 << setw(6) << testScore3
<< setw(6) << testScore4 << setw(6) << testScore5
<< endl;
outputFile << "Average test scores: " << setw(6)
<< avgScore << endl;

inputFile.close();
outputFile.close();
}