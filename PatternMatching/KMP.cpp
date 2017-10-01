#include <iostream>
#include <string.h>
using namespace std;
void get_next(char T[],int next[]){
	int i = 1;
	next[1] = 0;
	int j = 0;
	while(i <= T[0]){
		if (j == 0||T[i] == T[j])
		{
			++i;
			++j;
			next[i] = j;
		}
		else
		{
			j = next[j];
		}
	}
}

int KMP(char S[], char T[], int next[], int pos){
	int i = pos;
	int j = 1;
	while( i< S[0]&&j < T[0]){
		if (j == 0 || S[i] == T[j])
		{
			++i;
			++j;
		}
		else
			j = next[j];
	}
	if( j > T[0])
		return i - T[0];
	else
		return 0;
}

int main(int argc, char const *argv[])
{
	char S[] = {15,'a','b','c','a','b','a',
	'a','a','b','a','a','b','c','a','c'};
	char T[] = {8,'a','b','a','a','b','c',
	'a','c'};
	cout<<int(T[0]);
	int next[9];
	get_next(T,next);
	T[0] = 8;
	cout<<int(T[0]);
	for (int i = 1; i < 9; ++i)
	{
		cout<<next[i]<<" ";
	}
	cout<<endl;
	int result = KMP(S,T,next,1);
	cout<<result<<endl;
}