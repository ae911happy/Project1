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

int main()
{
    printf("������%s\t���ߣ�%s\t�ۼۣ�%f\t�������ڣ�%d-%d-%d\t�����磺%s\n",
        book.title, 
        book.author, 
        book.price, 
        book.date.year, book.date.mouth, book.date.day, 
        book.publisher);

    return 0;
}
