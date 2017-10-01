#include <iostream>
#include <string.h>
#define Elemtype char
#include "SimpleMatching.h"
using namespace std;
int main(int argc, char const *argv[])
{
	string S  = "*ababcabcacbab"; 
	string T  = "*abcac";
	int i = 1 ,j = 1;
	while(i < S.length()&&j < T.length()){
		if (S[i] == T[j])
			{++i;++j;}
		else
			{i=i-j+2;j=1;}
	}
	if (j == T.length()) cout<<i-T.length()+1;
	else cout<<0;
}