#include <stdio.h>

int leet(char text[15])
{
    int es = 0;
    int buchstaben = 0;
    for (int i = 0; i <= 15; i++)
    {
        if (text[i] == 'e')
        {
            text[i] = 3;
            es++;
        }
        else
        {
            buchstaben++;
        }
    }
    buchstaben = buchstaben*(-1);
    return 0;
}

int main()
{
    char text[15];
    scanf("%c", &text);
    printf("%c", text);
    leet(text);
    printf("%c", text);

    return 0;
}
