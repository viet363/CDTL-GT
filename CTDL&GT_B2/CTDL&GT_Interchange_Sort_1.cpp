// Cai dat Phuong phap doi cho truc tiep

void InterchangeSort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
