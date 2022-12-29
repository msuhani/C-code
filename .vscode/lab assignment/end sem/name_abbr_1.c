#include <stdio.h>
#include <string.h>

int main()
{
    char *arr[] = {"Suhani Lal Mathur", "Granth Tarun Bagadia", "Granth Ta Bagadia"};
    int r = sizeof(arr) / sizeof(arr)[0];
    for (int o = 0; o < r; o++)
    {
        char *name = arr[o];
        char first = name[0];
        char middle;
        char *last;
        int i=0;
        while (name[i] != "\0"){
            while (name[i++] != 32);
            middle = name[i];
            while (name[i++] != 32);
            last = &name[i];
            break;
        }
        printf("%c. %c. %s\n", first, middle, last);
    }

/*        int space = 0;
        char middle;
        for (int i = 0; i < strlen(name); i++)
        {
            int k = name[i];
            if (k == 32)
            {
                middle = name[i + 1];
                break;
            }
            space++;
        }

        int d;
        for (int i = space + 2; i < strlen(name); i++)
        {
            int k = name[i];
            if (k == 32)
            {
                d = i;
                break;
            }
        }

        int i = d + 1;
        char last[strlen(name) - i];
        while (i < strlen(name))
        {
            last[i - d - 1] = name[i];
            i++;
        }

        sprintf(abb, "%c. %c. %s", first, middle, last);
        printf("%s\n", abb);
    }*/
    return 0;
}