#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
{
    cerr << "Wrong number of arguments!" << endl;
    return 1;
}
    int n = atoi(argv[1]);
        for(int i = n; i > 1; i--)
        cout << "I " << i-1 << endl;
    return 0;
}
