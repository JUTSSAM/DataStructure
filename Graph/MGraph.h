#define MaxVertexNum 100
//typedef int VertexType;	�������������
typedef int EdgeType;		//����Ȩֵ��������
typedef struct{
	VertexType Vex[MaxVertexNum];//�����
	EdgeType Edge[MaxVertexNum][MaxVertexNum];//�ڽӾ���
	int vexnum, arcnum; //ͼ��ǰ�Ķ������ͻ���
}MGraph;

