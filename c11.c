#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sv
{
    char Ho_ten[20];
    int Tuoi;
    float Diem_TB;
} sv;

typedef struct node
{
    sv data;
    struct node *next;

} node;

typedef struct list
{
    node *head;
    node *tail;
} list;

list l;
void createList()
{
    l.head = l.tail = NULL;
}

node *createNode(sv *data)
{
    node *p = (node *)malloc(sizeof(node));
    p->data = *data;
    p->next = NULL;
    return p;
}

void addNodeAtLast(node *p)
{
    if (l.head == NULL)
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next = p;
        l.tail = p;
    }
}
void nhapsv(sv *sv)
{
    printf("nhap ten : ");
    gets(sv->Ho_ten);
    printf("nhap tuoi");
    scanf("%d", &sv->Tuoi);
    printf("nhap diem trung binh : ");
    scanf("%f", &sv->Diem_TB);
    fflush(stdin);
}

void nhapds()
{
    char kt;
    sv sv;
    do
    {
        nhapsv(&sv);
        node *p = createNode(&sv);
        addNodeAtLast(p);
        printf("nhap tiep an 'y' :");
        kt = getchar();
        fflush(stdin);

    } while (kt == 'y');
}

void hienthids()
{
    node *p = l.head;
    printf("danh sach sinh vien :\n");
    printf("STT       Ho ten          Tuoi        Diem TB\n");
    int i = 0;
    while (p != NULL)
    {
        printf("%-2d        %-15s %-2d         %-.2f    \n", ++i, p->data.Ho_ten, p->data.Tuoi, p->data.Diem_TB);

        p = p->next;
    }
}

void chensinhvien()
{
    printf("nhap thong tin sinh vien can chen : \n");
    sv svthem;
    nhapsv(&svthem);
    printf("vao sau sinh vien : ");
    char tensau[20];
    gets(tensau);
    node *q = createNode(&svthem);
    node *p = l.head;
    while (p != NULL)
    {
        if (strcmp(tensau, p->data.Ho_ten) == 0)
        {
            q->next = p->next;
            p->next = q;
            break;
        }
        p = p->next;
    }
}

void xoadau()
{
    node *p = l.head;
    l.head = p->next;
    free(p);
}

void xoaany()
{
    printf("nhap ten sinh vien can xoa :");
    char tenxoa[20];
    gets(tenxoa);
    if (strcmp(tenxoa, l.head->data.Ho_ten) == 0)
    {
        xoadau();
    }
    else
    {
        node *p = l.head;
        node *g;
        while (p != NULL)
        {
            if (strcmp(tenxoa, p->data.Ho_ten) == 0)
            {
                g->next = p->next;
                free(p);
                break;
            }

            g = p;
            p = p->next;
        }
    }
}

void suasv()
{
    printf("nhap sinh vien can sua");
    char tensua[20];
    gets(tensua);
    node *p = l.head;
    while (p != NULL)
    {
        if (strcmp(tensua, p->data.Ho_ten) == 0)
        {
            sv sv;
            nhapsv(&sv);
            p->data = sv;
        }

        p = p->next;
    }
}
int main()
{
    createList();
    nhapds();
    hienthids();
    chensinhvien();
    hienthids();
    xoaany();
    hienthids();
    suasv();
    hienthids();
}