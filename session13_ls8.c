#include<stdio.h> 
int greatestCommondivisor(int num1,int num2){
	while(num1!=0){
	int temp=num1;
	num1=num2%num1;
	num2=temp;
    }
    return num2; 
}

int main(){
	int num1,num2;
	printf("Moi ban nhap so thu 1: ");
	scanf("%d",&num1);
	printf("Moi ban nhap so thu 2: ");
	scanf("%d",&num2);
	printf("Uoc chung lon nhat cua so %d va so %d la %d \n",num1,num2,greatestCommondivisor(num1,num2));
}
