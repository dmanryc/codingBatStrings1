#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>

using namespace std;

string firstHalf(string str);

int main()
{

	assert(firstHalf("WooHoo") == "Woo");
	assert(firstHalf("HelloThere") == "Hello");
	assert(firstHalf("abcdef") == "abc");
	assert(firstHalf("davidcolin") == "david");
	assert(firstHalf("colindavid") == "colin");





return 0;
}

//*****************************8

string firstHalf(string str)
{
	int temp;
	int i;
	i = str.length();
	temp = i / 2;
	str.erase(temp);
	return str;
}


