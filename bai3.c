#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>

void canNang(int n, float sV[]){
    int i;
    for(i = 0; i < n; i++){
        printf("Cang nang sinh vien so %d (kg): ", i + 1);
        scanf("%f", &sV[i]);
        while(sV[i] < 0){
            printf("Nhap lai can nang sinh vien: ");
            scanf("%f", &sV[i]);
        }
    }
}

void soSanh(int n, float sV[]){
    int dem = 0, i;
    for(i = 0; i < n; i++){
        if(sV[i] > 50){
            dem = dem + 1;
        }
    }
    if(dem == 0){
        printf("Khong co sinh vien nao tren 50 kg\n");
    }else{
        printf("So luong sinh vien co can nang > 50 kg la: %d\n", dem);
    }
}

void nhoNhat(int n, float sV[]){
    int min = sV[0], i;
    for(i = 0; i < n; i++){
        if(min > sV[i]){
            min = sV[i];
        }
    }
    for(i = 0; i < n; i++){
        if(min == sV[i]){
            printf("Sinh vien %d co can nang nho nhat: %.2f kg", i + 1, sV[i]);
        }
    }
}

void canNangTB(int n, float sV[]){
    float tB = 0, tong = 0;
    int i;
    for(i = 0; i < n; i++){
        tong = tong + sV[i];
    }
    tB = tong / n;
    printf("Trung binh can nang cua sinh vien la: %.2f\n", tB);
}

void chan(int n, float sV[]){
    int i;
    for(i = 0; i < n; i++){
        if((int)sV[i] % 2 == 0){
            printf("\nSinh vien %d la sinh vien dau tien co can nang chan\n", i + 1);
            break;
        }
    }
}

void bai3(){
    int n;
    float sV[50];
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    while (n < 0){
        printf("Nhap lai so luong sinh vien: ");
        scanf("%d", &n);
    }
    canNang(n, sV);
    printf("\n\tXuat thong tin\n");
    printf("\nSo luong sinh vien la: %d\n", n);
    nhoNhat(n, sV);
    chan(n, sV);
    soSanh(n, sV);
    canNangTB(n, sV);
    printf("\n\nNhan Enter de tiep tuc");
}
