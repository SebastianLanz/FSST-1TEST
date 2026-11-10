#include <stdio.h>

int leet(char text[15])
{
    int es = 0;
    for (int i = 0; i <= 15; i++)
    {
        if (text[i] == 'e')
        {
            text[i] = 3;
            es++;
        }
    }
    return 0;
}

int main()
{
    char text[15];
    scanf("%c", &text);
    
    leet(text);

    

    return 0;
}
