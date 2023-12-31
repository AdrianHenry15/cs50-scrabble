#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// char word[50] declares an array that is named "word" that can hold a sequence of characters up to a max of 50 characters.
int compute_score(char word[50]);

int main(void)
{
    // Get input words from both players
    char word1[50];
    char word2[50];
    printf("Player 1: ");
    scanf("%s", &word1);
    printf("Player 2: ");
    scanf("%s", &word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }

    else if (score2 > score1)
    {
        printf("Player 2 Wins!\n");
    }

    else
    {
        printf("Tie!\n");
    }
}

int compute_score(char word[50])
{
    // TODO: Compute and return score for string

    int score = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        // for uppercase letters, 65 = 0; 66 = 1; etc.
        // for lowercase letters, 97 = 0; 98 = 1; etc.
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 65];
        }

        if (islower(word[i]))
        {
            score += POINTS[word[i] - 97];
        }
    }
    return score;
}
