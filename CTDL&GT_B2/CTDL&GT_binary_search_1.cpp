//Cai Dat Tim Kiem Nhi Phan
int BS(int a[], int n, int x)
{
	int l = 0, r = n-1;	
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid+1;
		}		
		else{
			r = mid;
		}
	}	
	if (a[l] == x)
		return l;	
	return -1;
}
