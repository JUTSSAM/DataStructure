#include "InternalSorting.h"
#define Elemtype int
#include <iostream>
void InsertSort(Elemtype S[],int start,int end){
	int i ,j;
	for (int i = start; i <= end; ++i)
	{
		if (S[i] < S[i-1])
		{
			S[0] = S[i];
			for (int j = i-1; S[0] < S[j]; --j)
			{
				S[j+1] = S[j];
			}
			S[j+1] = S[0];
		}
	}
}
using namespace std;
int main(int argc, char const *argv[])
{
	int str[21];
	str[0] = 0; //guardian
	for (int i = 1; i <= 20; ++i)
	{
		str[i] = rand()%100;
		cout<<str[i]<<" | ";
	}

	cout<<endl;
	// InsertSort(str,1,20);
	int j;
	for (int i = 2; i <= 20; ++i)
	{
		if (str[i] < str[i-1])
		{
			str[0] = str[i];
			cout<<i<<" "<<str[0]<<endl;
			for (int j = i-1; str[0] < str[j]; --j)
			{
				str[j+1] = str[j];
			}
			str[j+1] = str[0];
		}

		// for (int i = 1; i <= 20; ++i)
		// {
		// 	cout<<str[i]<<" | ";
		// }
	}


	for (int i = 1; i <= 20; ++i)
	{
		cout<<str[i]<<" | ";
	}

	cout<<endl;
	return 0;
}