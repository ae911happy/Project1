#include <stdio.h>

struct Date
{
    int year;
    int mouth;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
} book = {
    "������̫����",
    "������",
    48.8,
    {2022,2,05},
    "����̫��������"
};

int main1()
{
    struct Book *pt;
    pt = &book;

    printf("������%s\t���ߣ�%s\t�ۼۣ�%f\t�������ڣ�%d-%d-%d\t�����磺%s\n",
        pt -> title, 
        pt -> author, 
        pt -> price, 
        pt -> date.year, pt -> date.mouth, pt -> date.day, 
        pt -> publisher);

    return 0;
}
