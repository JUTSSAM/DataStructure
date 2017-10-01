#define MaxVertexNum 100

typedef struct ArcNode {
	bool mark;
	int ivex, jvex;
	struct ArcNode *ilink, *jlink;
	//InfoType info;
}ArcNode;

typedef struct VNode
{
	VertexType data;
	ArcNode *firstedge;
}VNode;

typedef struct {
	VNode adjmulist[MaxVertexNum];
	int vexnum, arcnum;
}AMLGraph;
