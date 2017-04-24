#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>

using namespace std;

//string firstHalf(string str);
//string withoutEnd(string str);
string comboString(string str, string str2);

int main()
{

	assert(comboString("Hello", "Hi") == "HiHelloHi");
	assert(comboString("Hi", "Hello") == "HiHelloHi");
	assert(comboString("aaa", "b") == "baaab");
	assert(comboString("a", "bbb") == "abbba");
	assert(comboString("c", "ddd") == "cdddc");





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

/*string withoutEnd(string str)
{
	int i;
	string s;
	
	i = str.size();
	s = str.substr(1,i - 2);
	
	return s;


}*/

//********************************************

string comboString(string str, string str2)
{
	string temp;
	if(str.length() < str2.length())
	{
		temp = str +str2 + str;
		return temp;
	}
	else
	{
		temp = str2 + str + str2;
		return temp;
	}

}
