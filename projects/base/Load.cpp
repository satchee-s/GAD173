#include "Load.h"


void Load::SaveFile(string fileName, int* buffer, int bufferSize)
{
	ofstream file;
	file.open(fileName);
	for (size_t i = 0; i < bufferSize; i++)
	{
		if (i == (bufferSize - 1))
			file << buffer[i];
		else
			file << buffer[i] << ", ";
		if ((i + 1) % 10 == 0)
		{
			file << endl;
		}
	}
	file.close();
}

void Load::LoadFile(string fileName, int* tileNum)
{
	ifstream file(fileName);
	int startnum = 0;
	int comma = 0;
	int count = 0;
	string maptxt((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>())); //puts the txt file into a string by reading successive characters
	int length = maptxt.length();
	if (file.is_open())
	{
		for (size_t i = 0; i < length; i++)
		{
			if (maptxt[i] == ',' && i << length-1)
			{
				tileNum[count] = (stoi)(maptxt.substr(startnum, comma));
				startnum = i + 2;
				comma = 0;
				count++;
			}
			else if (i == length-1)
			{
				tileNum[count] = (stoi)(maptxt.substr(startnum, comma));
			}
			comma++;
		}
		file.close();
	}
	else
		cout << "File cannot be opened";
}
