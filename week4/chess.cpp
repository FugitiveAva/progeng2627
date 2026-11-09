#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // Generate and display a random starting position
    // Initialise the move counter

    // While the knight has not reached a corner square:
        // Read destination coordinates from the user
        // If the move is valid:
            // Update position, increment move counter, display new position
        // Otherwise:
            // Display invalid move message

    // Display the total number of valid moves
    // taken to reach a corner square.

// Seed the random number generator
    std::srand(std::time(NULL));

// Generate random coordinates from 2 to 7
    int row = std::rand() % 6 + 2;
    int col = std::rand() % 6 + 2;

    std::cout << "Starting position: (" << row << ", " << col << ")" << std::endl;
    int moveCounter = 0;
    int destRow, destCol;
    while (!((row == 1 && col == 1) || (row == 1 && col == 8) || (row == 8 && col == 1) || (row == 8 && col == 8)||(moveCounter == 5))) {
        std::cout << "Enter destination coordinates (row and column): ";
        std::cin >> destRow >> destCol;

    // Check if the move is valid for a knight
        if (((abs(destRow - row) == 2 && abs(destCol - col) == 1) || 
            (abs(destRow - row) == 1 && abs(destCol - col) == 2)) &&(destRow >= 1 && destRow <= 8 && destCol >= 1 && destCol <= 8)) {
            row = destRow;
            col = destCol;
            moveCounter++;
            std::cout << "New position: (" << row << ", " << col << ")" << std::endl;
            std::cout << "Moves taken: " << moveCounter << std::endl;
        } else {
            std::cout << "Invalid move. Please try again." << std::endl;
        }
    }
    std::cout << "Total number of valid moves: " << moveCounter << std::endl;
    if (moveCounter == 5) {
        std::cout << "Maximum number of moves reached. You suck." << std::endl;
    } else {
        std::cout << "Congratulations! You reached a corner square." << std::endl;
    }
}