#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>

#include "bai1.h"
#include "bai2.h"
#include "bai3.h"

void menu(){
    int menu;
    while(menu != -1){
        printf("\n+==========Menu===============\n");
        printf("\t1. Thong tin ve mon hoc\n");
        printf("\t2. Luong khi ra truong\n");
        printf("\t3. Thong tin ve thanh vien trong lop\n");
        printf("\t-1. Thoat\n");
        printf("+==========NOM===============\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            system("cls");
            printf("1. Thong tin ve mon hoc:\n");
            bai1();
            getch();
            system("cls");
            break;
        case 2:
            system("cls");
            printf("2. Luong khi ra truong: \n");
            bai2();
            getch();
            system("cls");
            break;
        case 3:
            system("cls");
            printf("3. Thong tin ve cac thanh vien trong lop \n");
            bai3();
            getch();
            system("cls");
            break;
        case -1:
            system("cls");
            printf("-1. Thoat \n");
            printf("Hen gap lai");
            exit(0);
            break;

        default:
            printf("Vui long nhap lai lua chon cua ban!");
            printf("\n\nNhan Enter de tiep tuc");
            getch();
            system("cls");
            break;
        }
    }
}