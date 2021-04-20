#include "cmath"
#include "kf/kf_log.h"
#include "example.h"
#include <string>

using namespace std;

int main()
{
	Example::inst().run();
	/*string words = "10 5 4 3";
	int num[4];
	int startnum = 0;
	int comma = 0;
	int count = 0;
	int length = words.length();
	for (size_t i = 0; i < length; i++)
	{
		if (words[i] == ' ' && i < length-1)
		{
			num[count] = (stoi)(words.substr(startnum, (comma)));
			cout << num[count] << endl;
			startnum = i+1;
			comma = 0;
			count++;
		}
		else if (i == length-1)
		{
			num[count] = (stoi)(words.substr(startnum, comma));
			cout << num[count] << endl;
		}
		comma++;
	}

	cout << num[0] + num[1];*/
	return 0;
}
