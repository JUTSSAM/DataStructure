//static sqlist
#define MaxSize 50
typedef struct {
	Elemtype data[MaxSize];
	int length;
}SqList;

bool ListInsert(SqList &L,int i,Elemtype e){
	if(i<1||i>L.length+1)
		return false;
	if(L.length >= MaxSize)
		return false;
	for(int j = L.length;j>=i;j++)
		L.data[j] = L.data[j-1];
	L.data[i-1] = e;
	L.length++;
	return true;
}