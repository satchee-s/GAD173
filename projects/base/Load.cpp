#include "Load.h"
using namespace std;

Load::Load()
{
}

Load::~Load()
{
}

void Load::SaveFile(string fileName, int* buffer, int bufferSize)
{
	ofstream file;
	file.open(fileName);
	for (size_t i = 0; i < bufferSize; i++)
	{
		file << buffer[i] << ", " ;
		if ((i+1) % 10 == 0)
		{
			file << endl;
		}
	}
	file.close();
}


/*void Load::LoadFile(string filename)
{
}*/



