#include <iostream>
#include <queue>
#define VertexType int
#include "MGraph.h"
using namespace std;
bool visited[4];
queue<int> Q;

int FirstNeighbor(MGraph G, int v) {

	for (int i = 0; i < G.vexnum; i++)
	{
		if (G.Edge[v][i] != 0) {
			return i;
		}
	}

	for (int i = 0; i < G.vexnum; i++)
	{
		if (G.Edge[i][v]!=0)
		{
			return i + G.vexnum;
		}
	}

	return -1;
}

int NextNeighbor(MGraph G, int v, int w) {
	if ( w < G.vexnum )
	{
		for (int i = w + 1; i < G.vexnum; i++)
		{
			if (G.Edge[v][i] != 0)
			{
				return i;
			}
		}

		for (int i = 0; i < G.vexnum; i++)
		{
			if (G.Edge[i][v] != 0)
			{
				return i + G.vexnum;
			}
		}

	}
		
	for (int i = w - G.vexnum + 1; i < G.vexnum; i++)
	{
		if (G.Edge[i][v]!=0)
		{
			return i + G.vexnum;
		}
	}
	
	return -1;
}

void BFS(MGraph G, int v){
	int pos;
	cout << G.Vex[v] << endl; //visit()
	visited[v] = true;
	Q.push(v);
	while (!Q.empty())
	{
		v = Q.front();
		Q.pop();
		for (int w = FirstNeighbor(G,v); w >=0; w=NextNeighbor(G,v,w))
		{
			if (w >= G.vexnum)
				pos = w - G.vexnum;
			else
				pos = w;
		
			if (!visited[pos])
			{
				cout << G.Vex[pos] << endl;	//visit()
				visited[pos] = true;
				Q.push(w);
			}
		}

	}

}

void BFSTraverse(MGraph G) {
	for (int i = 0; i<G.vexnum; ++i) {
		visited[i] = false;
	}

	for (int i = 0; i<G.vexnum; ++i) {
		if (!visited[i])
		{
			BFS(G, i);
		}
	}
}

void DFS(MGraph G, int v){
	int posw,w,posv;

	if (v >= G.vexnum)
		posv = v - G.vexnum;
	else
		posv = v;

	cout << G.Vex[posv] << endl; //visit()
	
	visited[posv] = true;

	for (w = FirstNeighbor(G,posv); w >=0  ; w = NextNeighbor(G,posv,w))
	{
		if (w >= G.vexnum)
			posw = w - G.vexnum;
		else
			posw = w;

		if (!visited[posw])
		{
			DFS(G, w);
		}

	}
}

void DFSTraverse(MGraph G){
	for (int v = 0; v < G.vexnum; v++)
	{
		visited[v] = false;
	}
	for (int v = 0; v < G.vexnum; v++)
	{
		if (!visited[v])
			DFS(G, v);
	}
}

int main(){
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

	for (int i = 0; i < G.vexnum; i++)
	{
		cout << G.Vex[i] << " ";
	}
	cout << endl;
	
	DFSTraverse(G);

	for (int i = 0; i < G.vexnum; i++)
	{
		cout << G.Vex[i] << " ";
	}
	cout << endl;

	system("pause");
}