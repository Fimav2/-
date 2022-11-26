#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <string>

using namespace std;

string to_direct_code(int number, int byte_count);

string to_reversed_code(int number, int byte_count);

string to_additional_code(int number, int byte_count);

#endif // UTILS_H_INCLUDED
