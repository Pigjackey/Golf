#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<iomanip>
#include"Hole.h"

using namespace std;

void cutTheGrass(vector<Hole>&)
{
	ifstream courseList;
	string userInput = "";
	int inLength;
	int inPar;
	int inType;
	Hole hole;
	vector<string> result;
	int index = 0;

	cout << "Welcome to CourseMaker(TM)!" << endl << "Please enter the file to load" << endl;

	getline(cin, userInput);

	cout << endl;

	courseList.open(userInput + ".txt");

	while (getline(courseList, userInput))
	{
		istringstream iss(userInput);
		for (string userInput; iss >> userInput;)
		{
			result.push_back(userInput);
		}
		
		for (int i = 0; i < result.size(); i++)
		{
			cout << result.at(i) << " ";
		}

		cout << endl;

		result.clear();
	}

	courseList.close();
}

int main()
{
	vector<Hole> course;

	cutTheGrass(course);

	return 0;
}