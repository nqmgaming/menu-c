#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>

void bai2(){
    float luong;
    char tiepTuc;
    do{
        printf("Nhap luong mong muon (trieu dong): ");
        scanf("%f", &luong);
        while(luong < 0 ){
            printf(":))\nNhap lai: ");
            scanf("%f", &luong);
        }
        if(luong > 25){
            printf("Hay no luc het minh\n");
        }else if(luong > 15){
            printf("Co gang len\n");
        }
        else if (luong > 8)
        {
            printf("Cham chi\n");
        }
        else{
            printf("Yeu nhau song bang tinh yeu\n");
        }
        printf("Ban con muon kiem tra tiep chu? (Y de tiep tuc hoac N de thoat): ");
        scanf("%s", &tiepTuc);
    }while(tiepTuc == 'Y' || tiepTuc == 'y');
    printf("\n\nNhan Enter de tiep tuc");

}