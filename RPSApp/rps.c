#include "rps.h"
#include <string.h>

const char* rps_winner(const char* p1, const char* p2)
{
    // If inputs are same - Draw
    if (strcmp(p1, p2) == 0)
        return "Draw";

    // Player1 win conditions
    if ((strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0) ||
        (strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0) ||
        (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Paper") == 0))
        return "Player1";

	// Player2 win conditions (basically opposite of Player1)
    if ((strcmp(p2, "Rock") == 0 && strcmp(p1, "Scissors") == 0) ||
        (strcmp(p2, "Paper") == 0 && strcmp(p1, "Rock") == 0) ||
        (strcmp(p2, "Scissors") == 0 && strcmp(p1, "Paper") == 0))
        return "Player2";

    // Otherwise - invalid input
    return "Invalid";
}
