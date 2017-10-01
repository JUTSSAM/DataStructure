#define MaxVertexNum 100
//typedef int VertexType;	顶点的数据类型
typedef int EdgeType;		//边上权值数据类型
typedef struct{
	VertexType Vex[MaxVertexNum];//顶点表
	EdgeType Edge[MaxVertexNum][MaxVertexNum];//邻接矩阵
	int vexnum, arcnum; //图当前的顶点数和弧数
}MGraph;

