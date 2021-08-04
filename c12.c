#include <stdio.h>
//10h12
FILE *f;
typedef struct hang
{
    char Ten_hang[20];
    float Don_gia;
    int So_luong;
    float Thanh_tien;
} hang;

void nhaphang(hang *hang)
{
    printf("\nnhap ten hang : ");
    gets(hang->Ten_hang);
    printf("nhap don gia : ");
    scanf("%f", &hang->Don_gia);
    printf("nhap so luong : ");
    scanf("%d", &hang->So_luong);
    fflush(stdin);
    hang->Thanh_tien = hang->Don_gia * hang->So_luong;
}

void nhap()
{
    hang h;
    char kt;
    do
    {
        nhaphang(&h);
        fwrite(&h, sizeof(hang), 1, f);
        printf("nhap tiep an 'y' : ");
        kt = getchar();
        fflush(stdin);
    } while (kt == 'y');
}
void nhapdau()
{
    f = fopen("SO_LIEU.C", "wb");
    nhap();
    fclose(f);
}

void bosung()
{
    f = fopen("SO_LIEU.C", "ab");
    nhap();
    fclose(f);
}

void hienthi()
{
    f = fopen("SO_LIEU.C", "rb");
    hang h;
    printf("            SO LIEU BAN HANG\n");
    printf("STT   Ten Hang    Don gia       So luong     Thanh tien\n");
    int i = 0;
    float tongtien;
    while (fread(&h, sizeof(hang), 1, f) > 0)
    {
        tongtien += h.Thanh_tien;
        printf("%-2d    %-10s  %-3.2f         %3d        %5.2f\n", ++i, h.Ten_hang,
               h.Don_gia, h.So_luong, h.Thanh_tien);
    }
    printf("                           Tong tien %.2f", tongtien);
}
int main()
{
    nhapdau();
    hienthi();
    bosung();
    hienthi();
}