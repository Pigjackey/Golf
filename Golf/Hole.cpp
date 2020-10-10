#include"Hole.h"

using namespace std;

Hole::Hole(void)
{

}

Hole::Hole(int lengthIn, int parIn)
{
	length = lengthIn;
	par = parIn;
}

void Hole::setLength(int inLength)
{
	length = inLength;
}

void Hole::setPar(int inPar)
{
	par = inPar;
}

int Hole::getLength()
{
	return length;
}

int Hole::getPar()
{
	return par;
}