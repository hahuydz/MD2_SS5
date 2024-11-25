#include<stdio.h>
int main(){
	
	int a,sum=0;
	printf("Nhap mot so nguyen: ");
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		printf("%d \n",i);
		sum+=i;
	}
	printf("Tong cac so la: %d",sum);
	
	return 0;
}
