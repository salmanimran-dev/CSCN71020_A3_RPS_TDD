#include "rps.h"
#include <string.h>

const char* rps_winner(const char* p1, const char* p2)
{
    // Minimal logic just to pass the current test:
    if (p1 && p2 && strcmp(p1, p2) == 0)
        return "Draw";

    // Handles Rock beats Scissors (Player1 wins)
    if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0)
        return "Player1";

    // Handles Scissors beats Paper (Player2 wins)
    if (strcmp(p1, "Paper") == 0 && strcmp(p2, "Scissors") == 0)
        return "Player2";

    // Handles Paper beats Rock (Player1 wins)
    if (strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0)
        return "Player1";

    // Handles Scissors beats Rock (Player2 wins)
    if (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Rock") == 0)
        return "Player2";


    return "Invalid"; // temporary result for now
}
