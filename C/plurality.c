#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
} candidate;

int main(int argc, string argv[])
{
    if (argc >= 2)
    {
        int voterNum = get_int("Number of voters: ");
        for (int i = 0; i < voterNum; i++)
        {
            string votedCand[i];
            votedCand[i] = get_string("Vote: ");
            return 0;
        }
    }

    else
    {
        printf("Usage: ./plurality candidates\n");
        return 1;
    }
}