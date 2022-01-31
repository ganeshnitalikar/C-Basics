// WAP TO READ AND WRITE DATA INSIDE DATA.TXT FILE.
// WE ARE LEARNING CPP//

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f, *frea;
    int len = 200;
    char ab;
    char str[len];
    f = fopen("data.txt", "w");

    fprintf(f, "We Are Learining C++");

    fclose(f);

    f = fopen("data.txt", "r");
    // while (f)
    // {
    //     ab = getc(f);
    //     printf("%c", ab);
    //     if (ab == EOF)
    //     {
    //         break;
    //     }
    // }
    fgets(str, len, f);
    printf("%s", str);

    // printf("%s", ab);
    fclose(f);
    return 0;
}