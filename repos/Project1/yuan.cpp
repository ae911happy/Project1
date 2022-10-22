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
    "《鸡你太美》",
    "蔡徐坤",
    48.8,
    {2022,2,05},
    "鸡你太美出版社"
};

int main()
{
    printf("书名：%s\t作者：%s\t售价：%f\t出版日期：%d-%d-%d\t出版社：%s\n",
        book.title, 
        book.author, 
        book.price, 
        book.date.year, book.date.mouth, book.date.day, 
        book.publisher);

    return 0;
}
