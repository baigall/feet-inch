#include "stdafx.h"
#include"iostream"
using namespace std;
class CLenth
{
	int  inch;
	int  feet;
public:
	CLenth();
	CLenth(int i, int f);
	void setLenth(int i, int f);
	void display();

};
CLenth::CLenth()
{

}
CLenth::CLenth(int f, int i)
{
	feet = f;
	inch = i;
}
void CLenth::setLenth(int f, int i)
{
	feet = f;
	inch = i;
	for (; inch >= 12; feet++)
	{
		inch = inch - 12;
	}/*feet=12*inch*/
}
void CLenth::display()
{
	cout << "feet=" << feet << " inch=" << inch << endl;
}
int main()
{
	CLenth od;
	od.setLenth(7, 24);
	od.display();
	return 0;
}