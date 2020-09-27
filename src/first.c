#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1;
    FILE *fp2;

    if (argc < 3) {
        printf("Please specify input and output files!\n");
        exit(0);
    }

    fp1 = fopen((char *) argv[1], "r");
    fp2 = fopen((char *) argv[2], "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("Success!\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}