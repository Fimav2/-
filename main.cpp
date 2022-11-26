#include <iostream>
#include <string>
#include "utils.h"

using namespace std;

int main()
{
    int byte_count = 16;
    int number = -12;


    cout << to_direct_code(number, byte_count) << endl;
    cout << to_reversed_code(number, byte_count) << endl;
    cout << to_additional_code(number, byte_count) << endl;
}
