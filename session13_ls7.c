#include <stdio.h>
int array(int n){
	int arr[100][100]; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	} 
}
int main(){
	int n;
	printf("moi ban nhap so hang va cot ");
	scanf("%d",&n);
	array(n);
	return 0;
	 
} 
