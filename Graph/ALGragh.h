#define MaxVertexNum 100 //�ڵ��������ֵ

typedef struct ArcNode{ //�߱�ڵ�
	int adjvex; //�û�ָ��Ķ����λ��
	struct ArcNode *next; //ָ����һ������λ��
	//InfoType info //���ı�Ȩֵ
}ArcNode;

typedef struct VNode{ //�������Ϣ
	VertexType data; //������Ϣ
	ArcNode *first; //ָ���һ�������ö���Ļ���ָ��
}VNode ,AdjList[MaxVertexNum];

typedef struct{
	AdjList vertices; //�ڽӱ�
	int vexnum, arcnum;//ͼ�Ķ������ͻ���
}ALGraph;