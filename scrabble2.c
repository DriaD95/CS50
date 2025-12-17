#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
// Letters      A, B, C, D, E, F, G, H, ....
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
// Index        0, 1, 2, 3, 4, 5, 6, 7, ....

int compute_score(string word);

int main(void)
{
    // Prompt the user for two words
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute the score of each word
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int compute_score(string word)
{
    // Compute and return score for word
     // Keep track of score
    int score = 0;

    // Compute score for each character
    int len = strlen(word);
    for (int i = 0; i < len ; i++)
    {
        char letter = word[i];
        printf("Looking at %c...", letter);

        if (isupper(letter)) // D
        {
            score += POINTS[letter - 'A']; // 0 - 25
            printf("points: %i\n", POINTS[letter - 'A']);
        }
        else if (islower(letter)) // d
        {
            score += POINTS[letter - 'a'];
            printf("points: %i\n", POINTS[letter - 'a']);
        }
    }
    printf("\n");
    return score;
}
