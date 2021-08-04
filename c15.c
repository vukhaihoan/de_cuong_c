#include <stdio.h>
//2h57
FILE *f;
int n, m;
float a[100][100];
float b[100][100];

void taotep()
{
    f = fopen("MA_TRAN.C", "w");
    printf("nhap n, m :");
    scanf("%d %d", &n, &m);
    fprintf(f, "%d %d\n", n, m);
    fprintf(f, "Ma tran A\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%f", &a[i][j]);
            fprintf(f, "%.2f ", a[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "Ma tran B\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%f", &b[i][j]);
            fprintf(f, "%.2f ", b[i][j]);
        }
        fprintf(f, "\n");
    }

    fclose(f);
}
void doctep()
{
    f = fopen("MA_TRAN.C", "r");
    fscanf(f, "%d %d\n", &n, &m);
    printf("%d %d\n", n, m);
    char s[20];
    fgets(s, 20, f);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fscanf(f, "%f", &a[i][j]);
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
    fscanf(f, "\n");
    fgets(s, 20, f);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fscanf(f, "%f", &b[i][j]);
            printf("%.2f ", b[i][j]);
        }
        printf("\n");
    }
    fclose(f);
}
float c[100][100];
void tinh()
{
    f = fopen("MA_TRAN.C", "a");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            fprintf(f, "%.2f ", c[i][j]);
            printf("%.2f ", c[i][j]);
        }
        fprintf(f, "\n");
        printf("\n");
    }
    fclose(f);
}

int main()
{
    taotep();
    doctep();
    tinh();
}