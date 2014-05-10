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
int m = n;
int l = n;

for(int i = n; i > 1; i--){
cout << "I " << i-1 << endl;

}

for(int i = m; i > 1; i--){
cout << "F " << i-1 << endl;
}

for(int i = l; i > 1; i--){
cout << "R " << i-1 << endl;
}
return 0;
}
