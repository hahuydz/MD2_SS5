#include<stdio.h>
int main(){
	
	int a,b;
	printf("Nhap 2 so nguyen:");
	scanf("%d %d",&a,&b);
	int min = a<b?a:b;
	for(int i=min; i>=1; i--){
		if((a%i==0)&&(b%i==0)){
			printf("UCLN la: %d\n",i);
			break;
		}
	}
	return 0;
}
