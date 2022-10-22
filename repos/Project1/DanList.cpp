#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[128];
    char author[40];
    struct Book* next;
};
void getInput(struct Book* book)
{
    printf("请输入书名：");
    fflush(stdin);
    scanf("%s", book->title);
    printf("请输入作者：");
    fflush(stdin);
    scanf("%s", book->author);

}

void addBook(struct Book** library)
{
    struct Book* book, * temp;

    book = (struct Book*)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("内存分配失败！\n");
        fflush(stdin);
        exit(1);
    }

    getInput(book);

    if (*library != NULL)
    {
        temp = *library;
        *library = book;
        book->next = temp;
    }
    else
    {
        *library = book;
        book->next = NULL;
    }
}

void printLibrary(struct Book* library)
{
    struct Book* book;
    int count = 1;

    book = library;
    while (book != NULL)
    {
        printf("\nBook%d:\n", count);
        fflush(stdin);
        printf("书名：%s", book->title);
        fflush(stdin);
        printf("\n作者：%s", book->author);
        fflush(stdin);
        book = book->next;
        count++;
    }
}

void releaseLibrary(struct Book* library)
{
    while (library != NULL)
    {
        library = library->next;
        free(library);
    }
}

int main()
{
    //头指针
    struct Book* library = NULL;
    int ch;
    while (1)
    {
        fflush(stdin);
        printf("是否需要录入书籍信息（Y/N）：");
        fflush(stdin);
        do
        {
            ch = getchar();
        } while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
        {
            addBook(&library);
        }
        else
        {
            break;
        }
    }

    printf("是否需要打印图书信息（Y/N）：");
    fflush(stdin);
    do {
        ch = getchar();
    } while (ch != 'Y' && ch != 'N');
    if (ch == 'Y')
    {
        printLibrary(library);
    }

    releaseLibrary(library);

    return 0;
}
