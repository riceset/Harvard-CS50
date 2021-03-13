#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

//the jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

//candidates array
candidate candidates[MAX_CANDIDATES];

//Number of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    //Checks if the user entered less candidates than the required:
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    candidate_count = argc - 1;

    //Checks if the user entered more than 9 candidates:
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }

    //Gives initial values to the array of candidates:
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    //Asks for the number of voters:
    voter_count = get_int("Number of voters: ");

    //Checks if the user entered a number of voters inside the allowed range:
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
    }

    //For each voter:
    for (int i = 0; i < voter_count; i++)
    {
        //For each vote of the i voter:
        for (int j = 0; j < candidate_count; j++)
        {
            //Prompts for a name:
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }
        printf("\n");
    }
}

bool vote(int voter, int rank, string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[voter].name, name) == 0)
        {
            candidates[voter].votes++;
            return true;
        }
    }
    return false;
}