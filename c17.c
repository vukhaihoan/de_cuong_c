#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void inputNM(int *n, char c)
{
    printf("nhap %c: ", c);
    scanf("%d", n);
    if (*n <= 0)
    {
        inputNM(n, c);
    }
}
void inputArr(int arr[], int n, char c)
{
    printf("\nnhap he so da thuc %c\n", c);
    for (int i = n; i >= 0; i--)
    {
        printf("%c[%d] = ", c, i);
        scanf("%d", &arr[i]);
    }
}
void outputArr(int arr[], int n, char c)
{
    printf("\nhe so da thuc %c : ", c);
    for (int i = 0; i <= n; i++)
    {
        printf("%4d ", arr[i]);
    }
}
int tinhgiatri(int arr[], int n, int x)
{
    int tong = 0;
    for (int i = n; i >= 0; i--)
    {
        tong += arr[i] * pow(x, i);
    }
    return tong;
}
int tinhhesodathuctong(int p[], int q[], int t[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i <= n && j <= m)
    {
        t[k++] = p[i++] + q[j++];
    }
    while (i <= n)
    {
        t[k++] = p[i++];
    }
    while (j <= m)
    {
        t[k++] = q[j++];
    }
    return k - 1;
}
int main()
{
    int arrp[100], arrq[100], arrt[100], n, m, x;
    inputNM(&n, 'n');
    inputNM(&m, 'm');
    printf("nhap x: ");
    scanf("%d", &x);
    inputArr(arrp, n, 'p');
    inputArr(arrq, m, 'q');
    printf("\ngia tri P : %d", tinhgiatri(arrp, n, x));
    printf("\ngia tri Q : %d", tinhgiatri(arrq, n, x));
    outputArr(arrp, n, 'p');
    outputArr(arrq, m, 'q');
    outputArr(arrt, tinhhesodathuctong(arrp, arrq, arrt, n, m), 't');
}