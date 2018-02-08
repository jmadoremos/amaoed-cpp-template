/* ****************************************************************
 * @author: James Michael Adoremos
 * @app name: pause.h
 * @app desc: This library shall contain a function that imitates Windows' PAUSE command
 * @history:
 *  - 2018/02/08
 *      -- Created _pause() function
 * ****************************************************************/

#ifndef _PAUSE
#define _PAUSE

#include <iostream>

// A function to imitate Windows' PAUSE command
void _pause() {
    std::cout << "Press any key to continue...";
    std::cin.get();
}

#endif
