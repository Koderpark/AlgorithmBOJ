#include <stdio.h>

int main(){
	int n,m;
	int arr[101][101] = {0};
	
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) scanf("%d", &arr[i][j]);
	}
	
	for(int i=0; i<n; i++,puts("")) for(int j=0; j<m; j++) printf("%d ", arr[i][j]);
	return 0;
}
