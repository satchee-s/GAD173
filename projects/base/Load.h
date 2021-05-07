#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Load
{
public:
	static void SaveFile(string fileName, int* buffer, int bufferSize);
	static void LoadFile(string fileName, int* tileNum);;
};