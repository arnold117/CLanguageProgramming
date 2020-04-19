#include<stdio.h>

int main(void)
{
    char str[100], ch;
    int i;
    FILE *fp;

    fp = fopen("E:/arnol/Documents/VisualStudio/C/ClassEG/20191122/a1.txt", "w+");

    for (i = 0; i < 10; i++)
    {
        fprintf(fp, "%d", i + 1);
    }
    
    rewind(fp);
    fscanf(fp, "%d", &i);
    printf("%d\n", i);

    getchar();
    return 0;
}