#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <errno.h>

#define MEMORY_SIZE (128UL * 1024UL * 1024UL)

int main(void)
{
    char *memory = malloc(MEMORY_SIZE);

    if (memory == NULL)
    {
        perror("Memory allocation failed");
        return 1;
    }

    memset(memory, 0, MEMORY_SIZE);

    if (mlock(memory, MEMORY_SIZE) == 0)
    {
        printf("Successfully locked 128 MB of memory\n");

        memory[0] = 'A';

        printf("Memory test successful: %c\n", memory[0]);

        munlock(memory, MEMORY_SIZE);
    }
    else
    {
        printf("mlock failed: %s\n", strerror(errno));
        printf("Check the locked-memory limit using: ulimit -l\n");
    }

    free(memory);

    return 0;
}
