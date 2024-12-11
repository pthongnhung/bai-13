#include<stdio.h>
void menu(void){
	printf("------Menu------\n");
	printf("1.Nhap cac gia tri cua mang\n");
	printf("2.In cac phan tu cua mang theo ma tran\n");
	printf("3.In ra cac phan tu nam tren goc cua mang trann\n");
	printf("4.In ra cac phan tu nam tren duong bien cua ma tran\n");
	printf("5.In ra cac phan tu nam tren duong cheo chinh cua ma tran\n");
	printf("6.In ra cac phan tu la so nguyen to co tren ma tran\n");
	printf("7.Thoat\n");
}
void nhapMang(int array[][100],int *rows, int *cols){
	if(*rows>0 && *cols>0){
		for(int i=0;i<*rows;i++){
			for(int j=0;j<*cols;j++){
				printf("array[%d][%d] ",i,j);
				scanf("%d",&array[i][j]);
			}
		}
	} else {
		printf("Moi ban nhap lai hang va cot\n");
	}
} 
void inMang(int array[][100],int *rows, int *cols){
	if(*rows>0 && *cols>0){
		printf("Mang %d * %d\n",*rows,*cols);
		for(int i=0;i<*rows;i++){
			for(int j=0;j<*cols;j++){
				printf("%d ",array[i][j]);
			}
			printf("\n");
		}
	} else {
		printf("Moi dai ka nhap hang va cot cua mang!\n");
	}
}
void inGoc(int array[][100],int *rows,int *cols){
	if (*rows>0 && *cols>0){
		printf("Cac gia o cac goc cua ma tran: \n");
		for(int i=0;i<*rows;i++){
			for(int j=0;j<*cols;j++){
				if(i==0 && j==0 || i==0 && j==*cols-1 || j==0 && i==*rows-1);
				printf("%d\t",array[i][j]);
			}
		}
		printf("\n");
	} else {
		printf("Moi ban nhap lai hang va cot\n");
	}
}
void inBien(int array[][100], int *rows, int *cols){
	if(*rows>0 && *cols>0 ){
		printf("Cac phan tu nam tren duong bien:\n");
		for(int i=0;i<*rows;i++){
			for(int j=0;j<*cols;j++){
				if (i==0 || i==*rows-1 || j==0 || j==*cols-1){
					printf("%d\t",array[i][j]);
				}
			}
		}
		printf("\n");
	} else {
		printf("Moi ban nhap lai hang va cot cua mang\n");
	}
} 
void inChinhPhu(int array[][100],int *rows, int *cols){
	if (*rows>0 && *cols>0 && *rows==*cols){
		printf("Duong cheo chinh cua mang: ");
		for(int i=0;i<*rows;i++){
				printf("%d\t",array[i][i]);
			}
		}
		printf("\n");
		printf("Duong cheo phu cua mang: ");
		for(int j=0;j<*cols;j++){
			printf("%d\t",array[j][*cols-j-1]);
		}
		printf("\n");
    }
int prime(int number){
	if(number>1){
	    for(int i=2;i*i<=number;i++){
		if(number%i!=0) return 1;
        }
	}
	return 0;
}
void primeOfarray(int array[][100],int *rows, int *cols){
	printf("the primes of array: \n");
	for (int i=0;i<*rows;i++){
		for (int j=0;j<*cols;j++){
			if(prime(array[i][j])==1){
			    printf("%d\n",array[i][j]);
			}
		    if(array[i][j]==2 || array[i][j]==3){
			    printf("%d\n",array[i][j]);
		    }
		}
	}
}

int main(){
	int choice;
	int rows,cols;
	int array[100][100];
	do{
		menu();
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("please you enter rows of array: ");
				scanf("%d",&rows);
				printf("please you enter colums of array: ");
				scanf("%d",&cols);
				nhapMang (array,&rows,&cols);
				break;
			case 2:
			    inMang(array, &rows, &cols);
				break;		
			case 3:
				inGoc(array, &rows, &cols);
				break;
			case 4:
				inBien(array, &rows, &cols);
				break;
			case 5:
				inChinhPhu(array, &rows, &cols);
				break;
			case 6:
			    primeOfarray(array, &rows, &cols);
			    break;
			case 7:
				printf("Cam on ban da su dung chuong trinh\n");
				break;
			default:
				printf("Khong hop le!\n");
		}


	}while(choice!=7);
	return 0;
}
