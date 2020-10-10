#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

class Hole
{
	private:

		int length;
		int par;

	public:

		Hole(void);
		Hole(int length, int par);

		void setLength(int inLength);
		void setPar(int inPar);

		int getLength();
		int getPar();
};