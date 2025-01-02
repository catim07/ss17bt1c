#include<stdio.h>
void inputValue(int *array,int *numValue){
	printf("moi ban nhap so phan tu: ");
	scanf("%d",numValue);
	for(int i=0;i<*numValue;i++){
		printf("array[%d]=",i+1);
		scanf("%d",&array[i]);
	}
}
void showValue(int *array,int*numValue){
	for(int i=0;i<*numValue;i++){
		printf("array[%d]=%d\n",i+1,*(array+i));
	}
}
void lenArray(int *array,int*numValue){
	int count=0;
	for(int i=0;i<*numValue;i++){
		count++;
	}
	printf("do dai mang la: %d\n",count);
}
void totalValue(int *array,int*numValue){
	int total;
	for(int i=0;i<*numValue;i++){
		total+=*(array+i);
	}
	printf("tong cac phan tu trong mang la: %d\n",total);
}
void showValuePig(int *array,int*numValue){
	int valuePig=*(array+0);
	for(int i=1;i<*numValue;i++){
		if(valuePig<*(array+i)){
			valuePig=*(array+i);
		}
	}
	printf("phan tu lon nhat trong mang la: %d\n",valuePig);
}
int main(){
	int array[100];
	int value,numValue,chose,check=1;
	do{
	printf("------------MENU--------------\n\n");
	printf("1. Nhap vao so phan tu va tung phan tu\n");
	printf("2. Hien thi cac phan tu trong mang\n");
	printf("3. Tinh do dai mang\n");
	printf("4. Tinh tong cac phan tu trong mang\n");
	printf("5. Hien thi phan tu lon nhat\n");
	printf("6. Thoat\n");
	printf("Lua chon cua ban: ");
	scanf("%d",&chose);
	switch(chose){
		case 1:
			inputValue(array,&numValue);
			check=0;
			break;
		case 2:
			if(check){
				printf("moi ban nhap phan tu truoc");
		    }else{
		    	showValue(array,&numValue);
		    }
		    break;
		case 3:
			if(check){
				printf("moi ban nhap phan tu truoc");
		    }else{
		    	lenArray(array,&numValue);
		    }
		    break;
		case 4:
			if(check){
				printf("moi ban nhap phan tu truoc");
		    }else{
		    	totalValue(array,&numValue);
		    }
		    break;
		case 5:
			if(check){
				printf("moi ban nhap phan tu truoc");
		    }else{
		    	showValuePig(array,&numValue);
		    }
		    break;
		case 6:
			printf("tam biet ban nhe <3\n");
			break;
		default:
			printf("khong hop le\n");
    }
}while(chose!=6);
}
