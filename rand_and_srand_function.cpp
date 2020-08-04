#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char **argv)
{
    cout << "First number: " << rand() % 100;
    srand(time(NULL));
    cout << "\nRandom number: " << rand() % 100;
    srand(1);
    cout << "\nAgain the first number: " << rand() % 100;
    return 0;
}

