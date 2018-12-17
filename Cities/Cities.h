#pragma once
#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <Windows.h>
#include <vector>

using namespace std;

class Cities
{
	map <string, string> cities;
	map <string, string> country;

	string dir;
	

public:
	Cities(string dir);
	void find(string city);
	void enter();
	

};
