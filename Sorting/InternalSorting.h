void InsertSort(Elemtype S[], int n) {
	int i, j;
	for (int i = 2; i <= n; ++i)
	{
		if (S[i] < S[i - 1])
		{
			S[0] = S[i];
			int j = i - 1;
			for (; S[0] < S[j]; --j)
			{
				S[j + 1] = S[j];
			}
			S[j + 1] = S[0];
		}
	}
}

void BubbleSort(Elemtype S[] ,int n){
	for (int i = 0; i < n; i++)
	{
		bool flag = false;
		for (int j = n; j > i; j--)
		{
			if (S[j-1] > S[j])
			{
				std::swap(S[j-1], S[j]);
				flag = true;
			}
		}
		if (flag == false)
		{
			return;
		}

	}
}

int Paritition(Elemtype S[], int low ,int high){
	Elemtype pivot = S[low];
	while(low < high){
		while (low < high && S[high] >= pivot)	--high;
		S[low] = S[high];
		while (low < high && S[low] <= pivot)	++low;
		S[high] = S[low];
	}
	S[low] = pivot;
	return low;
}

void QuickSort(Elemtype S[] ,int low ,int high){
	if(low < high){
		int pivotpos = Paritition(S, low, high);
		QuickSort(S, low, pivotpos - 1);
		QuickSort(S, pivotpos + 1, high);
	}
}