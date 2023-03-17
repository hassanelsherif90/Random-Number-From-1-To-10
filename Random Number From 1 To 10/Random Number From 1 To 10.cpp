#include <iostream>
#include <cstdlib>

using namespace std;

int RandomFromTo(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << RandomFromTo(20, 30) << endl;
	cout << RandomFromTo(20, 30) << endl;
	cout << RandomFromTo(20, 30) << endl;
	cout << RandomFromTo(20, 30) << endl;
	
	


	return 0;
}