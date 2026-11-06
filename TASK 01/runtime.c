#include <stdio.h>
#include <dlfcn.h>

typedef void (*encrypt_function)(void);

int main(void)
{
    void *handle;
    encrypt_function encrypt;
    const char *error;

    printf("Bank Application Started\n");

    handle = dlopen("./libencrypt.so", RTLD_LAZY);

    if (handle == NULL)
    {
        printf("Library loading failed\n");
        return 1;
    }

    dlerror();
    *(void **)(&encrypt) = dlsym(handle, "encrypt");
    error = dlerror();

    if (error != NULL)
    {
        printf("Function loading failed\n");
        dlclose(handle);
        return 1;
    }

    printf("Encryption Library Version 1.0\n");
    encrypt();

    printf("Bank Application Completed\n");

    dlclose(handle);

    return 0;
}
