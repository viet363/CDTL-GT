// cai dat phuong phap sap xep chon truc tiep
void SelectionSort(int a[], int n){
	for (int i = 0; i < n - 1; i++)	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min]>a[j])
				min = j;
			swap(a[i], a[min]);
	}
}
