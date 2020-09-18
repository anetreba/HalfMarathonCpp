#include "meadSong.h"

void meadSong() {
    int bottles = 99;

    for ( ; bottles > 0; ) {
        cout << bottles << " bottles of mead on the wall, " << bottles << " bottles of mead." << endl;
        bottles--;
        if (bottles != 0) {
            cout << "Take one down and pass it around, " << bottles << " bottles of mead on the wall." << endl << endl;
        }
    }
    cout << "Take it down and pass it around, no more bottles of mead on the wall." << endl << endl;
    cout << "No more bottles of mead on the wall, no more bottles of mead." << endl;
    cout << "Go to the store and buy some more, 99 bottles of mead on the wall." << endl;
}
