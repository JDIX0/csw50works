#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // get the message from user
    string message = get_string("Message: ");

    // loop characters
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        // convert char to binary

        char c = message[i];

        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)

        {
            int bit = (c >> j) & 1;

            // print light bulbs with the right emoji

            print_bulb(bit);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
