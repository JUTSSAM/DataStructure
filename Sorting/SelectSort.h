int pos;
int min;
for (int i = 0; i < T.TableLen; ++i)
{
	pos = i;
	min = T.elem[i];
	for (int j = i; j < T.TableLen; ++j)
	{
		if(T.elem[j] < min){
			pos = j;
			min = T.elem[j];
		}		
	}
	T.elem[pos] = T.elem[i];
	T.elem[i] = min;
}