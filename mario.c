#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int height, row, column, space;

    // Prompt user to enter pyrmaid's height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print row
    for (row = 0; row < height; row++)
    {
        // Print spaces
        for (space = 0; space < height - row - 1; space++)
        {
            printf("  ");
        }
        // Print columns
        for (column = 0; column <= row; column++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
