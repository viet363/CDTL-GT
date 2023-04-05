//nguon :https://hiepsiit.com/detail/ctdl/ctdl-va-giai-thuat/bai-tap-hay-ve-hang-doi
#include<iostream>
#include<queue>

using namespace std;

int main(){
	queue<int> q;
	bool b[1001];
	int a[1001];
	int n, k;
	cout<<"nhap so phan tu trong mang:";
	cin >>n;
	for (int  i = 0; i < 1001; i++){
		b[i] = false;
	}
	for (int i = 0; i < n; i++){
		cout<<"phan tu thu "<<i<<" =";
        cin>>a[i];
	}
	cout<<"nhap so phan tu toi da ";
	cin >> k;
	for (int i = 0; i < n; i++)
	if (!b[a[i]]){
		if (q.size() < k){
			b[a[i]] = true;
			q.push(a[i]);
		}
		else{
			b[q.front()] = false;
			b[a[i]] = true;
			q.push(a[i]);
			q.pop();
		}
	}
	while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
	return 0;
}
