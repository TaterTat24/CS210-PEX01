/** pex1.c
 * =============================================================
 * Name: Benjamin Tat
 * Section: Capt McGraw - T6
 * Project: PEX 1
 * Purpose: Your Name in Pixels
 * Documentation Statement: None
 * ============================================================= */

// Include the Curses library
#include <ncurses.h>

// Put Your Drawing Functions Here
// Remember that at least one must use parameters



// Put Your Main Function Here
int main(int argc, char const *argv[]) {
    initscr(); // Start curses mode

    start_color();
    

    move(40, 70); //move cursor near bottom of the window
    printw("Created with Curses By C2C Benjamin Tat"); // display a message 

    // prevent applicaiton from ending until keystoke
    move(23,10); // move cursor near bottom of the window
    printw("press a key to continue"); // display a message
    getch(); // wait for keystroke
    
    endwin(); // End curses mode

    return 0;
}