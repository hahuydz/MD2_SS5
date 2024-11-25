#include<stdio.h>
int main(){
	int a,b,c;

	do{
		printf("CALCULATOR\n");
        printf("1.Tong 2 so\n");		
	    printf("2.Hieu 2 so\n");		
	    printf("3.Tich 2 so\n");	
	    printf("4.Thuong 2 so\n");			
	    printf("5.Thoat\n");
	    printf("Nhap so thu nhat:");
	    scanf("%d",&a);
		printf("Nhap so thu hai:");
		scanf("%d",&b);
	    printf("Nhap so ban muon:");
		scanf("%d",&c);
		float thuong=a/b;
		switch (c){
			case 1:
				printf("Tong 2 so la:%d\n",a+b);
				break;
			case 2:
				printf("Hieu 2 so la:%d\n",a-b);
				break;
			case 3:
				printf("Tich 2 so la:%d\n",a*b);
				break;
			case 4:
				printf("Thuong 2 so la:%.2f\n",thuong);
				break;
		}
		
	} while(c<5);
	printf("Ket thuc chuong trinh");
	
	return 0;
}
	


