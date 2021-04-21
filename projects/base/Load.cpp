#include "Load.h"

void Load::SaveFile(string fileName, int* buffer, int bufferSize)
{
	ofstream file;
	file.open(fileName);
	for (size_t i = 0; i < bufferSize; i++)
	{
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
	int space = 0;
	int count = 0;
	string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>())); //puts the entire txt file into a single string
	int length = content.length();
	if (file.is_open())
	{
		for (size_t i = 0; i < length; i++)
		{
			if (content[i] == ',')
			{
				tileNum[count] = (stoi)(content.substr(startnum, space));
				startnum = i + 2;
				space = 0;
				count++;
			}
			space++;
		}
		file.close();
	}
	else
		cout << "File cannot be opened";
}
