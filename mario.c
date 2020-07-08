#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // asks the user for integer and prints pyramid size accordingly
    int size = 0;
    do
    {
        size = get_int("Height: ");
    }
    while (size < 1 || size > 8);
    
    string whitespace = " ";
    string box = "#";
    
    // loop to make each line of the pyramid
    int i = 0;
    string output;
    while (i < size)
    {
        // loop for whitespace
        int l = 1;
        while (l < size - i)
        {
            printf("%s", whitespace);
            l++;
        }
        
        // loop for left part of the pyramid
        int j = 0;
        while (j <= i)
        {
            printf("%s", box);
            j++;
        }
        
        printf("%s", whitespace);
        printf("%s", whitespace);
        
        // loop for right part of pyramid
        int k = 0;
        while (k <= i)
        {
            if (k == i)
            {
                printf("%s\n", box);
            }
            else
            {
                printf("%s", box);
            }
            k++;
        }
        // string output = ((size - i) * whitespace) + (i * box) + (2 * whitespace) + (i * box);
        // printf("%s\n", output);
        i++;
    }
}