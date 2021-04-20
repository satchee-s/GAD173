#pragma once
#include <fstream>
#include <string>
using namespace std;

class Load
{
public:
	Load();
	~Load();
	static void SaveFile(string fileName, int* buffer, int bufferSize);
	//static void LoadFile(string filename);



};

