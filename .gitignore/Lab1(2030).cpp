// Lab1(2030).cpp : Defines the entry point for the console application.
// Kirk Anderson
// cosc 2030
// 9-17-18
// i got help with jacob silva


#include "stdafx.h"
#include <iostream>
#include <ifstream>
#include <string>

using namespace std;

//using std::endl;
//using std::cout;
//using std::cin;
using std::ofstream;
using std::ifstream;
//using std::getline;
using std::string;


int main()
{
	double one = 0;
	double two = 0;
	double three = 0; //these are the double values at the start and end
	double four = 0;
	int count = 0; //  and this is the total number
	double temp, buffer1 = 0, buffer2 = 0;

	string inBuf;
	ifstream inFile;
	ofstream outFile;


	

	cout << "please enter the file name." << std::endl;
	getline(cin, inBuf);
	inFile.open(inBuf);

	while (inFile >> temp)
	{
		if (!inFile.fail())
		{

		count++;
			if (count == 1)
			{
				one = temp;
			}
			if (count == 2)
			{
				two = temp;
			}
			buffer2 = buffer1;
			buffer1 = temp;

		}

		three = buffer2;
		four = temp;
		inFile.close();

		cout << count << endl << one << endl << two << endl << three << endl << four << endl;


	
	}  
	system("pause");
	return 0;
}

