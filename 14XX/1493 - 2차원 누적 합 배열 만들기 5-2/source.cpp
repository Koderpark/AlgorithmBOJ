#include <stdio.h>

int main(){
	int n,m;
	int arr[101][101] = {0};
	int parr[101][101] = {0};
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			for(int k=0; k<=i; k++){
				for(int l=0; l<=j; l++){
					parr[i][j]+=arr[k][l];
				}
			}
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
