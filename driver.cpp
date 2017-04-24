#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>

using namespace std;

//string firstHalf(string str);
string withoutEnd(string str);

int main()
{

	assert(withoutEnd("hello") == "ell");
	assert(withoutEnd("java") == "av");
	assert(withoutEnd("coding") == "odin");
	assert(withoutEnd("davidcolin") == "avidcoli");
	assert(withoutEnd("colindavid") == "olindavi");





return 0;
}

//*****************************

/*string firstHalf(string str)
{
	int temp;
	int i;
	i = str.length();
	temp = i / 2;
	str.erase(temp);
	return str;
}*/


//****************************************

string withoutEnd(string str)
{
	int i;
	string s;
	
	i = str.size();
	s = str.substr(1,i - 2);
	
	return s;


}

//********************************************8


