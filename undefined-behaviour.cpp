// Source - https://stackoverflow.com/q/1239938
// Posted by seg.server.fault, modified by community. See post 'Timeline' for change history
// Retrieved 2025-12-31, License - CC BY-SA 4.0

#include <iostream>

using namespace std;

int main()
{
    int array[2];
    
    array[0] = 1;
    array[1] = 2;
    array[3] = 3;
    array[4] = 4;
    
    cout << array[3] << endl;
    cout << array[4] << endl;
    
    return 0;
}

