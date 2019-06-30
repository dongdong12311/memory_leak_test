#include "tracey.hpp"
#include<malloc.h>

int main() {
    {
        // monitor & report only this scope (will find one leak)
        //
        int n = 10;
        tracey::scope sc;
        int *p = new int [10];
        if (n == 0)
            delete p;
        delete p;

    }

    //tracey::disable(); // do not show final report on exit

}
