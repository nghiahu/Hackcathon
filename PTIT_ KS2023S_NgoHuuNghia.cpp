#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n,i,k,prime;
	prime = 0;
	int numbers[100];
	int currentIndex = 0;
	int m;
	int newNumbers[currentIndex + 1];
  do{
  	printf("******************MENU****************\n");
  	printf("1. Nhap gia tri n phan tu cua mang\n");
  	printf("2. In gia tri cac phan tu trong mang\n");
  	printf("3. Tinh trung binh cac phan tu duong trong mang\n");
  	printf("4. In ra vi tri cac phan tu co gia tri bang k trong mang \n");
  	printf("5. Su dung thuat toan sap xep noi bot sap xep mang giam dan \n");
  	printf("6. Tính so luong cac phan tu la so nguyen to trong mang\n");
  	printf("7. Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai o giua mang theo thu tu tang dan\n");
  	printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep giam dan)\n");
  	printf("9. Thoat\n");
  	printf("Lua chon cua ban: ");
  	
  	int choice;
  	scanf("%d",&choice);
  	switch(choice){
  		case 1:
  			printf("So phan tu can nhap:");
				scanf("%d",&n);
				for( i=0 ;i < n ;i++){
					printf("numbers[%d]= ",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
  			break;
  		case 2:
  			printf("Gia tri cac phan tu trong mang\n");
  			for( i = 0 ;i < currentIndex; i++){
  				printf("%d\t",numbers[i]);
			  }
			  printf("\n");
  			break;
  		case 3:
  			printf("Trung binh cac phan tu duong trong mang: ");
  			int sumNumbers,j;
  			sumNumbers = 0, i = 0;
  			float avgValue;
  			for( i = 0; i < currentIndex; i++){
  				if( numbers[i] > 0){
  				sumNumbers+=numbers[i];
  				j++;
				  }
			  }
			  avgValue=sumNumbers/j;
			  printf("%f\n",avgValue);
  			break;
  		case 4:
  			printf("Nhap vao gia tri k: ");
  			scanf("%d",&k);
  			printf("Vi tri cac phan tu co gia tri bang k trong mang: ");
  			for( i = 0; i < currentIndex; i++){
  				if (numbers[i] == k){
  					printf("%d\t",i);
				  }
			  }
			  printf("\n");
  			break;
  		case 5:
  			int temp;
  			for( i = 0; i < currentIndex; i++){
  				for(int j = 0; j < currentIndex-1-i; j++){
					if(numbers[j]<numbers[j+1]){
						int temp = numbers[j];
						numbers[j] = numbers[j+1];
						numbers[j+1] = temp;
				}
			}
		}
		printf("Mang sau khi sap xep la:\n");
			for(i=0;i<currentIndex;i++){
				printf("%d\t",numbers[i]);
			}
			printf("\n");	
  			break;
  		case 6:
			for( i=0; i < currentIndex; i++){
				int isPrime = 0;
				if(numbers[i] >= 2){
					for(int j=2; j <= sqrt(numbers[i]); j++){
						if(numbers[i] % j == 0){
							isPrime = 1;
							break;
							}
						}
					}else{
						isPrime=1;
				}
				if (isPrime == 0){
					prime ++;
				}
			}
			printf("So luong cac phan tu la so nguyen to trong mang la: %d\n",prime);
  			break;
  		case 7:
  			printf("Em khong lam phan nay\n");
  			break;
  		case 8:
  			printf("Em khong lam phan nay");
  			break;
  		case 9:
  			exit(0);
  		default:
  			printf("Vui long chon tu 1 -9\n");
	  }
  }while(1==1);
}
