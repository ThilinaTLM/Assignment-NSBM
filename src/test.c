#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    
    char a[100] = *argv[1];
    printf("%s\n", a);

    return 0;
}