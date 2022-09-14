/** pex1.c
 * =============================================================
 * Name: Benjamin Tat
 * Section: Capt McGraw - T6
 * Project: PEX 1
 * Purpose: Your Name in Pixels
 * Documentation Statement: Capt McGraw checked out my code
 * ============================================================= */

// Include the Curses library
#include <ncurses.h>

#define WHITE_BLUE 1 //Blue color of U.S. flag
#define BLACK_RED 2 // Red color of U.S. flag
#define BLACK_WHITE 3 // White color of U.S. flag
#define WHITE_MAGENTA 4 // Background color


// Put Your Drawing Functions Here
// Remember that at least one must use parameters

/**
 *----------------------------------
 * Displays U.S. Flag
 * @param yCoordinate - Y-Coordinate of U.S. Flag location
 * @param xCoordinate - X-Coordinate of U.S. Flag location
 * @return None
 */
void displayUSFlag(int yCoordinate, int xCoordinate) {
    attron(COLOR_PAIR(BLACK_RED)); // Enable BLACK_RED attribute
    move(yCoordinate, xCoordinate); // Move curse
    printw("                                                  "); // Display red line
    move(yCoordinate+2, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+4, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+6, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+8, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+10, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+12, xCoordinate);
    printw("                                                  ");
    attroff(COLOR_PAIR(BLACK_RED)); // Disable BLACK_RED attribute

    attron(COLOR_PAIR(BLACK_WHITE)); // Enable BLACK_WHITE attribute
    move(yCoordinate+1, xCoordinate); // Move curse
    printw("                                                  "); // Display white line
    move(yCoordinate+3, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+5, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+7, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+9, xCoordinate);
    printw("                                                  ");
    move(yCoordinate+11, xCoordinate);
    printw("                                                  ");
    attroff(COLOR_PAIR(BLACK_WHITE)); // Disable BLACK_WHITE attribute

    attron(COLOR_PAIR(WHITE_BLUE)); // Enable BLACK_WHITE attribute
    move(yCoordinate, xCoordinate); // Move curse
    printw(" * * * * * * "); // Display blue lines and stars
    move(yCoordinate+1, xCoordinate);
    printw("  * * * * *  ");
    move(yCoordinate+2, xCoordinate);
    printw(" * * * * * * ");
    move(yCoordinate+3, xCoordinate);
    printw("  * * * * *  ");
    move(yCoordinate+4, xCoordinate);
    printw(" * * * * * * ");
    move(yCoordinate+5, xCoordinate);
    printw("  * * * * *  ");
    move(yCoordinate+6, xCoordinate);
    printw(" * * * * * * ");
    move(yCoordinate+7, xCoordinate);
    printw("  * * * * *  ");
    move(yCoordinate+8, xCoordinate);
    printw(" * * * * * * ");
    attroff(COLOR_PAIR(WHITE_BLUE)); // Disable BLACK_WHITE attribute

    attron(COLOR_PAIR(BLACK_WHITE)); // Enable BLACK_WHITE attribute
    move(yCoordinate + 14, xCoordinate + 5); // Move cursor under the flag
    printw("The flag is inaccurate because of text format"); // Display a message
    attroff(COLOR_PAIR(BLACK_WHITE)); // Disable BLACK_WHITE attribute
}

/** 
 *----------------------------------
 * Displays message about America!
 * @param yCoordinate - Y-Coordinate of message
 * @param xCoordinate - X-Coordinate of message
 * @return None
 */
void america(int yCoordinate, int xCoordinate) {
    attron(COLOR_PAIR(WHITE_MAGENTA)); // Enable WHITE_MAGENTA attribute
    move(yCoordinate, xCoordinate); // Move cursor to parameter coordinates
    printw("YEAH AMERICA!!! WOOO HAMBURGERS, HOTDOGS, AND GUNS!!!"); // Display a message
    attroff(COLOR_PAIR(WHITE_MAGENTA)); // Disable WHITE_MAGENTA attribute
}

// Put Your Main Function Here
int main(int argc, char const *argv[]) {
    initscr(); // Start curses mode

    start_color(); // Enable color

    init_pair(WHITE_BLUE, COLOR_WHITE, COLOR_BLUE); // Define color pair WHITE_BLUE
    init_pair(BLACK_RED, COLOR_BLACK, COLOR_RED); // Define color pair RED_BLACK
    init_pair(BLACK_WHITE, COLOR_BLACK, COLOR_WHITE); // Define color pair WHITE_BLACK
    init_pair(WHITE_MAGENTA, COLOR_WHITE, COLOR_MAGENTA); // Define color pair WHITE_BLACK

    wbkgd(stdscr, COLOR_PAIR(WHITE_MAGENTA)); // Set standard color for window

    displayUSFlag(15, 60); //Display U.S. Flag

    america(5, 5); //Display America message
    america(43, 5); 
    america(5, 110); 
    america(43, 110); 

    attron(COLOR_PAIR(BLACK_WHITE)); // Enable BLACK_WHITE attribute

    move(40, 70); //move cursor near bottom of the window
    printw("Created with Curses By C2C Benjamin Tat"); // display a message

    // Prevent applicaiton from ending until keystoke
    move(37,75); // Move cursor near bottom of the window
    printw("press a key to continue"); // Display a message
    getch(); // Wait for keystroke

    attroff(COLOR_PAIR(BLACK_WHITE)); // Disable BLACK_WHITE attribute

    endwin(); // End curses mode

    return 0;
}
