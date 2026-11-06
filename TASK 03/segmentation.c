#include <stdio.h>

#define SEGMENTS 3

int main(void)
{
    int base[3] = {1000, 4000, 7000};
    int limit[3] = {500, 800, 600};

    int segment, offset;

    printf("Enter segment number (0 to 2): ");
    scanf("%d", &segment);

    printf("Enter offset: ");
    scanf("%d", &offset);

    if (segment < 0 || segment >= SEGMENTS)
    {
        printf("Segmentation fault: Invalid segment\n");
    }
    else if (offset < 0 || offset >= limit[segment])
    {
        printf("Segmentation fault: Invalid offset\n");
    }
    else
    {
        printf("Physical address = %d\n",
               base[segment] + offset);
    }

    return 0;
}
