#include <iostream>

//using namespace std; - Not really a recommended practice as you wouldn't know
//                       from which namespace stuff came from, and many other reasons.

using std::cout;
using std::cin;

int main() {
    /*Your code
    here.*/

    //cin.ignore(); - Use this if the program immediately exits without the "Press Enter" prompt.
    cout << "\nPress Enter key to exit.";
    cin.ignore();
    return EXIT_SUCCESS;
}