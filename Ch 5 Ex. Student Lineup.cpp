// Ch 5 Ex. Student Lineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const int maxname = 100;
	string names[maxname];
	int a, number = 0;

	ifstream inputfile("LineUp.txt");
	if (!inputfile) 
	{
		cout << "There was an error opening the file.\n";
	}

	while (inputfile >> names[number] && number < maxname)
	{
		number++;
	}

	string small = names[0], large = names[0];

	for (a = 1; a < number; a++)
	{
		if (names[a] < small)
			small = names[a];
		if (names[a] > large)
			large = names[a];
	}

	cout << "The student at the front of the line would be " << small << "." << "\n";
	cout << "The student at the back of the line would be " << large << "." << "\n";
	cout << "There are " << number << " students in the class.";

	inputfile.close();

	return 0;
}


