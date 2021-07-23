/* Inventory Value
Long Beach City College
Date : October 21, 2018
Author : Douglas Lopez
*/

#include <sstream>
#include <iostream> 
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
	//Variable Declaration 
	string item = string();
	double unit, cost = double();

	

	//Header
	cout << "====================================================================" << endl;
	cout << "Inventory Value" << endl;
	cout << "Long Beach City College" << endl;
	cout << "Author: Douglas Lopez" << endl;
	cout << "Oct. 30, 2018" << endl;
	cout << "====================================================================" << endl;

	//Inputs
	cout << "....................................................................." << endl;
	cout << "      Inventory Report For Jane Doe International Hardware           " << endl;
	cout << "....................................................................." << endl;
	cout << "Item       Number of Units         Unit  Cost(s)       Total Value($)" << endl << endl;

	

	string line;
	ifstream myfile("Assign5.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	
	//ofstream out;
	//out.open("output.txt");

	//Processing
	

	//Output
		cout << "====================================================================" << endl;

	system("Pause");
	return 0;
}