#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Defines the max number of voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

//The candidate preference "j" for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// An array of candidates (can contain up to 9 candidates)
candidate candidates[MAX_CANDIDATES];

//Number of voters and candidates
int voter_count;
int candidate_count;

//Prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

//We give the candidates on argv
int main(int argc, string argv[])
{
    //If the user didn't enter a candidate name
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    //Assigns candidate_count the number of candidate names entered
    candidate_count = argc - 1;

    //If the user entered more than 9 candidate names
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }

    //Populates the candidates array initializing the name instance
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    //Prompts for the number of voters
    voter_count = get_int("Number of voters: ");

    //If the user entered a number greater than 100
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    //Vertical list of all the voters
    for (int i = 0; i < voter_count; i++)
    {
        //Horizontal list of all the preferences for voter i
        for (int j = 0; j < candidate_count; j++)
        {
            //NOTE: + 1 is for displaying Rank 1 instead of Rank 0
            //when asking for the preference.

            //Query for each rank for candidate i (rank = preference)
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }
        //Prints a new line for visually separating each voter
        printf("\n");
    }

    tabulate();
}

bool vote(int voter, int rank, string name)
{
    //For each candidate (entered on argv)
    for (int i = 0; i < candidate_count; i++)
    {
        //compare if this candidate's name is iqual to the voted candidate
        if (strcmp(name, candidates[i].name) == 0)
        {
            //If so, assign their position from the candidate vector to
            //the preference of voter i (inside the preferences matrix)
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

void tabulate(void)
{
    //Updates the vote count for all non-eliminated candidates
    for (int i = 0; i < voter_count; i++)
    {
        if (!candidates[i].eliminated)
        {
            //If the candidate's first prefference is into the candidates array
            //increase 1 vote
            if (candidates[preferences[i][0]].name == candidates[i].name)
            {
                candidates[i].votes++;
                printf("%s has %i\n", candidates[i].name, candidates[i].votes);
            }
        }

        //If the candidate was already eliminated
        else
        {
            for (int j = 0; j < candidate_count; j++)
            {
                if (candidates[preferences[i][j]].name == candidates[i].name)
                {
                    candidates[j].votes++;
                    printf("%s has %i\n", candidates[j].name, candidates[j].votes);
                }
            }
        }
    }
}

