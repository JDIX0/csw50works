#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string input = get_string("Input text: ");

    int words = 1;

    int letters = 0;

    int sentences = 0;

    for (int i = 0; i < strlen(input); i++)

    {
        if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122))
        {
            letters++;
        }

        else if (input[i] == ' ')
        {
            words++;
        }

        else if (input[i] == '.' || input[i] == '?' || input[i] == '!')
        {
            sentences++;
        }
    }

    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index > 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i\n", index);
    }
}