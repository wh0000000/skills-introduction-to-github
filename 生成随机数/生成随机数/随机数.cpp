#include<iostream>
using namespace std;
#include<ctime>
int main()
{
	srand((unsigned int)time(NULL));
	int num=rand() % 100 + 1;
	cout << num << endl;
	system("pause");
	return 0;
}