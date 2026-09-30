#include<stdio.h>
#define MAX_SIZE 50

int main(){
	int choice;
	int tickets[MAX_SIZE] = {85, 120, 60, 150, 95};
	int n = 5;
	int pos;
	int value;
	int newValue;
	int target;
	do{
       	printf("\n=====================================================\n");
        printf("      CHUONG TRINH QUAN LY VE BAN RA STARTCINEMA       \n");
        printf("=====================================================\n");
        printf("1.Them so ve ban ra \n");
        printf("2.Sua so ve ban ra\n");
        printf("3.Xoa so ve ban ra\n");
        printf("4.Tim kiem so ve ban ra\n");
        printf("0. Thoat chuong trinh\n");
        printf("=====================================================\n");
        printf("Vui long nhap lua chon cua ban (0 - 4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
            		if(n == MAX_SIZE){
            		printf("Mang da day, khong the them!");
            		break;
				}
				printf("Nhap gia tri muon them: ");
				scanf("%d",&value);
				
				printf("Nhap vi tri muon chen: ");
				scanf("%d",&pos);
				if(pos < 1 || pos > n + 1){
					printf("Vi tri chen khong hop le!");
					break;
				}
				for(int i = n; i >= pos; i--){
					tickets[i] = tickets[i - 1];
				}
				
				tickets[pos - 1] = value;
				n++;
				
				printf("Them thanh cong\n");
				printf("Mang sau khi them la: ");
				for(int i = 0; i < n; i++){
					printf("%d",tickets[i]);
					if( i < n - 1){
						printf(", ");
					}
				}
            	 break;
            case 2:
            	printf("Nhap vi tri can sua: ");
				scanf("%d",&pos);
				if(pos < 1 || pos > n){
					printf("Vi tri sua khong hop le!");
					break;
				}
				
				printf("Nhap vao gia tri moi: ");
				scanf("%d",&newValue);
				if(newValue < 0){
					printf("So ve ban ra khong hop le!");
					break;
				}
				
				tickets[pos - 1] = newValue;
				printf("Sua gia tri thanh cong\n");
				printf("Mang sau khi sua la: ");
				for(int i = 0; i < n; i++){
					printf("%d",tickets[i]);
					if( i < n - 1){
						printf(", ");
					}
				}
            	break;
            case 3:
            	if(n == 0){
            		printf("Mang rong, khong the xoa!");
            		break;
				}
				printf("Nhap vao vi tri can xoa: ");
				scanf("%d",&pos);
				if(pos < 1 || pos > n){
					printf("Vi tri xoa khong hop le!");
					break;
				}
				for(int i = pos; i < n - 1; i++){
					tickets[i] = tickets[i + 1];
				}
				n--;
				
				printf("Xoa thanh cong\n");
				printf("Mang sau khi xoa la: ");
				for(int i = 0; i < n; i++){
					printf("%d",tickets[i]);
					if( i < n - 1){
						printf(", ");
					}
			}
            	break;
            case 4:
            	{
				
            	int count = 0;
  				
            	printf("Nhap gia tri can tim: ");
            	scanf("%d",&target);
            	
            	printf("Tim thay tai vi tri: ");
            	for(int i = 0; i < n; i++){
            		if(tickets[i] == target)
            			printf("%d",i + 1);
				}
				if(count > 0){
					printf("Tong so lan xuat hien: %d",count);
				} 
				if(count == 0){
					printf("Khong tim thay gia tri trong mang!");
				}
            	break;
            	}
            case 0:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
	}while(choice!=0);


	return 0;
}
