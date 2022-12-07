#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>

void bai1(){
    char tenMon[50], tenGV[50];
    int sTC;
    float diem;
    fflush(stdin);
    printf("Nhap ten mon: ");
    gets(tenMon);
    printf("Nhap ten giang vien: ");
    gets(tenGV);
    printf("Nhap so tin chi mong muon: ");
    scanf("%d", &sTC);
    printf("Nhap diem mong muon: ");
    scanf("%f", &diem);
    while(diem < 0 || diem > 10){
        printf("\nVui long nhap lai diem!: ");
        scanf("%f", &diem);
    }
    printf("\n\nXuat thong tin: \n");
    printf("Mon: %s\nGiang vien: %s\nTin chi: %d\nDiem: %.2f", tenMon, tenGV, sTC, diem);
    printf("\n\nNhan Enter de tiep tuc");
}