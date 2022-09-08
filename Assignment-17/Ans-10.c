// Write a program in C to Find the Frequency of Characters.

#include <stdio.h>

int main()
{
    char name[] = "Sohan Prajapati";
    int freq[150] = {0};
    int i = 0;


    while (name[i] != '\0')
    {
        freq[name[i]]++;
        i++;
    }

    for (i = 0; i < 150; i++)
    {
        if (freq[i] != 0)
            printf("\n%c ==> %d\n\n", i, freq[i]);
    }

    return 0;
}