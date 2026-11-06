#include <stdio.h>

#define PAGE_SIZE 1024
#define PAGE_TABLE_SIZE 8

int main(void)
{
    int page_table[8] = {5, 2, -1, 7, 0, -1, 3, -1};

    int address[] = {0, 1500, 3100, 6200, 9000, 2049};

    int count = sizeof(address) / sizeof(address[0]);

    for (int i = 0; i < count; i++)
    {
        int page = address[i] / PAGE_SIZE;
        int offset = address[i] % PAGE_SIZE;

        if (page >= PAGE_TABLE_SIZE ||
            page_table[page] == -1)
        {
            printf("%d -> invalid address\n", address[i]);
        }
        else
        {
            int physical =
                page_table[page] * PAGE_SIZE + offset;

            printf("%d -> page %d offset %d : physical %d\n",
                   address[i], page, offset, physical);
        }
    }

    return 0;
}
