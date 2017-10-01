//dynamic
#define IntSize 100
typedef struct{
	Elemtype *data;
	int MaxSize,length;	
}SeqList;

SeqList initRand(int length){
	SeqList L;
	L.data = new Elemtype[length];
	for (int i = 0; i < length; ++i)
	{
		L.elem[i] = rand()%100;
		L.TableLen++;
	}
	return L;
}