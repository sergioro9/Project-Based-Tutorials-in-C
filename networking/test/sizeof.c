#include <stdio.h>
#include <netdb.h>

int main(int argc, char **argv)
{
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(struct addrinfo));
    printf("%zu\n", sizeof(socklen_t));
    printf("%zu\n", sizeof(__socklen_t));
    printf("%zu\n", sizeof(__U32_TYPE));
    printf("%zu\n", sizeof(unsigned int));
    printf("%zu\n", sizeof(unsigned long int));
    printf("%zu\n", sizeof(__ULONGWORD_TYPE));
    return 0;
}
