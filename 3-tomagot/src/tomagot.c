// ERROR CODES
#define ERROR 1
#define SUCCESS 0

// LIBRARIES
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

// CONSTANTS
const char *level_one_happiness = "feeling down";
const char *level_two_happiness = "okay";
const char *level_three_happiness = "beaming";

// FUNCTIONS
// TODO: Capitalize name
char *process_name(char *name_str)
{
    return "";
}

// TODO: Convert to float representation
// TODO: Round to the nearest integer
int process_feeeding(char *last_fed_days_str)
{
    return 0;
}

// TODO: Convert to float representation
// TODO: Map to appropriate happiness statement
const char *process_happiness(char *happiness_str)
{
    return "";
}

// TODO: Process user-specified arguments
// TODO: Validate correct number of arguments were supplied.
// TODO: Print informative error messages if validation fails.
// TODO: Print tomagotchi statement (and account for plural words).
// TODO: Return ERROR or SUCCESS code
int tomagotchi_email(int argc, char *argv[])
{
    // Correct number of arguments supplied
    if (argc == 4)
    {
        // Processing user-specified arguments
        char *name = process_name(argv[1]);
        int last_fed_days = process_feeeding(argv[2]);
        const char *happiness_statement = process_happiness(argv[3]);
    }
    return 0;
}

// MAIN FUNCTION -- DO NOT EDIT
int main(int argc, char *argv[])
{
    return tomagotchi_email(argc, argv);
}
