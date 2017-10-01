typedef struct{
	Elemtype *elem;
	int TableLen;
}SSTable;

int Search_Seq(SSTable ST,Elemtype key){
	ST.elem[0] = key;
	int i ;
	for(i = ST.TableLen;ST.elem[i]!=key;--i);
	return i;
}

int Search_Seq_Ordered(SSTable ST,Elemtype key){
	int i ;
	for(i = 0;i < ST.TableLen;++i){
		if (key >= ST.elem[i] && key < ST.elem[i+1])
		{
			return i;
		}
	}
	return -1;
}

int Binary_Search(SSTable ST,Elemtype key){
	int low = 0,high = ST.TableLen-1,mid;
	while(low <= high){
		mid = ( low + high )/2;
		if (ST.elem[mid] == key)
		{
			return mid;
		}else if( ST.elem[mid] > key ){
			high = mid-1;
		}else{
			low = high + 1;
		}
	}
	return -1;
}