#include <stdio.h>
	void meNu(){
		printf("\n---------MENU----------\n");
		printf("1.nhap so luong phan tu va gia tri can nhap\n");
		printf("2.in ra gia tri cac phan tu dang quan ly\n");
		printf("3.them mot phan tu vao vi tri chi dinh\n");
		printf("4.sua mot phan tu vao vi tri chi dinh\n");
		printf("5.xoa mot phan tu o vi tri chi dinh\n");
		printf("6.sap xep cac phan tu \n");
		printf("7.tim kiem vi tri phan tu nhap vao\n");
		printf("8.thoat\n");
		printf("moi ban lua chon ");
	} 
	int arrange(int arr[100],int size){
		for(int i=0;i<size;i++){
			for(int j=0;j<size-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp = arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
		 		} 
			} 
		}
	} 
int main(){
	int arr[100];
	int choice,n,m,size;
	int addValue,addIndex,deleteIndex;
	int adjustTheValue,searchForValue,index; 
	do{
		meNu();
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("moi ban nhap so luong phan tu ");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					printf("moi ban nhap gia tri vao vi tri cua arr[%d]=",i);
					scanf("%d",&arr[i]); 
				}
				break;
			case 2:
				if(size<=0){
					printf("moi ban nhap phan tu vao mang \n");
					break; 
				}else{
					printf(" gia tri cac phan tu dang quan ly \t");
					for(int i=0;i<size;i++){
						printf("%d\t",arr[i]);
					}
				} 
				break; 
			case 3:
				if(size<=0){
					printf("moi ban nhap phan tu vao mang \n");
					break; 
				}else{
					printf("moi ban nhap gia tri cua vi tri can them\n");
					scanf("%d",&addValue);
					printf("moi ban nhap vi tri can them\n");
					printf("%d",&addIndex); 
				}
				break; 
			case 4:
				if(size<=0){
					printf("moi ban nhap phan tu vao mang \n");
					break;
				}else{
					do{
						printf("moi ban nhap gia tri cua vi tri can sua\n");
						scanf("%d",&adjustTheValue);
						printf("moi ban nhap vi tri can sua\n");
						scanf("%d",&index);
						if(index>size || index<0){
							printf("moi ban nhap lai\n");
						}
					} while(index>size || index<0);
					arr[index]= adjustTheValue;
					
					printf(" gia tri cac phan tu dang quan ly \t");
					for(int i=0;i<size;i++){
						printf("%d\t",arr[i]);
					}
				}
				break; 
			case 5:
				if(size<=0){
						printf("moi ban nhap phan tu vao mang \n");
						break;
					}else{
						do{
							printf("moi ban nhap vi tri can sua\n");
							scanf("%d",&deleteIndex);
							if(deleteIndex>size ||deleteIndex<0){
								printf("moi ban nhap lai\n");
							}
						} while(deleteIndex>size || deleteIndex<0);
						for(int i=deleteIndex;i<size;i++){
							arr[i]=arr[i+1]; 
						}
						size--; 
						printf(" gia tri cac phan tu dang quan ly \t");
						for(int i=0;i<size;i++){
							printf("%d\t",arr[i]);
						}
					}
				break; 
			case 6:
				printf("1.giam dan \n");
				printf("2.tang dan \n");
				scanf("%d",&n);
				switch(n){
						case 1:
							if(size<=0){
								printf("moi ban nhap phan tu vao mang \n");
								break;
							}else{	
								for(int i=0;i<size;i++){
									for(int j=0;j<size-i-1;j++){
										if(arr[j]<arr[j+1]){
											int temp=arr[j];
											arr[j]=arr[j+1];
											arr[j+1]=temp;
										} 
									} 
								}
								printf("ham sau khi sap xep giam dan ");
								for(int i=0;i<size;i++){
								printf("%d\t",arr[i]);
								}
							}
							break;
						case 2:
							if(size<=0){
								printf("moi ban nhap phan tu vao mang \n");
								break;
							}else{
								arrange(arr,size);
								printf("ham sau khi sap xep tang dan ");
								for(int i=0;i<size;i++){
								printf("%d\t",arr[i]);
								}
							}
							break; 
						default:
							printf("loi cu phap"); 
				}
				break;  
			case 7:
				printf("1.tim kiem tuyen tinh  \n");
				printf("2.tim kiem nhi phan \n");
				scanf("%d",&m); 
				switch(m){
					case 1:
							if(size<=0){
								printf("moi ban nhap phan tu vao mang \n");
								break;
							}else{
								printf("moi ban nhap gia tri can tim \t");
								scanf("%d",&searchForValue);
								for(int i=0;i<size;i++){
									 if(arr[i]==searchForValue){
									 	printf("vi tri cua %d la arr[%d]",searchForValue,i);
										break;
									}
								}
							}
						break;
					case 2:
						if(size<=0){
								printf("moi ban nhap phan tu vao mang \n");
								break;
							}else{
								arrange(arr,size);
								printf("moi ban nhap gia tri can tim \t");
								scanf("%d",&searchForValue);
								for(int i=0;i<size;i++){
									 if(arr[i]==searchForValue){
									 	printf("vi tri cua %d la arr[%d]",searchForValue,i);
										break;
									}
								}
							}
						break; 
				default:
				printf("loi cu phap");
				}
				break; 
			case 8:
				printf("ban da hoat khoi MENU"); 
				return 0; 
			default:
				printf("loi cu phap"); 
		} 
	}while(1);
} 
