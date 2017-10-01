#define MaxVertexNum 100

typedef struct ArcNode{
	int tailvex, headvex;
	struct ArcNode *hlink, *tlink;
	//InfoType info;
}ArcNode;

typedef struct VNode
{
	VertexType data;
	ArcNode *firstin, *firstout;
}VNode;

typedef struct{
	VNode xlist[MaxVertexNum];
	int vexnum, arcnum;
}GLGraph;