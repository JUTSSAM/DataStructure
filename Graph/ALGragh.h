#define MaxVertexNum 100 //节点数的最大值

typedef struct ArcNode{ //边表节点
	int adjvex; //该弧指向的顶点的位置
	struct ArcNode *next; //指向下一条弧的位置
	//InfoType info //网的边权值
}ArcNode;

typedef struct VNode{ //顶点表信息
	VertexType data; //顶点信息
	ArcNode *first; //指向第一条依附该顶点的弧的指针
}VNode ,AdjList[MaxVertexNum];

typedef struct{
	AdjList vertices; //邻接表
	int vexnum, arcnum;//图的顶点数和弧数
}ALGraph;