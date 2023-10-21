#include<iostream>
using namespace std;
int main()
{
	char string[100];
	cout << "enter string\n";
	cin >> string;
	int i, j;
	int n = strlen(string);
	for (i = 0; i<n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (string[i] > string[j])
			{
				char temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
	cout << "the sorted string is:" << string;
	return 0;
}