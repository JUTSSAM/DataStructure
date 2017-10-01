#include <iostream>
#define VertexType int
#include "MGraph.h"
using namespace std;
int main(){
	//bool visited[100];
	MGraph G{
		{1,2,3,4},
		{
			{0,1,1,0},
			{0,0,0,0},
			{0,0,0,1},
			{1,0,0,0}
		},
		4,
		4
	};
	cout << G.vexnum<<endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << G.Edge[i][j];
		}
		cout << endl;
	}

	system("pause");
}