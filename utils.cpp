#include <string>
#include "utils.h"

using namespace std;


string to_direct_code(int number, int byte_count){
     string bytes(byte_count, '0');

     if (number <0) {
         number = -number;
         bytes[0] = '1';
     }

     int index = byte_count - 1;
     int digit;

     while (number > 0){
        digit = number % 2;

        if (digit == 0) {
            bytes[index] = '0';
        }
        else {
            bytes[index] = '1';
        }

        index = index - 1;
        number = number / 2;

     }

     return bytes;
}


string to_reversed_code(int number, int byte_count){
    string bytes = to_direct_code(number, byte_count);

    if (bytes[0] == '0') {
        return bytes;
    }

    else {
        for (int index(1); index<byte_count; ++index){
             if (bytes[index] == '0'){
                bytes[index] = '1';
             }
             else{
                bytes[index] = '0';

             }

        }
    return bytes;
}
}


string to_additional_code(int number, int byte_count){
    string bytes = to_reversed_code(number, byte_count);

    if (bytes[0] == '0') {
        return bytes;
    }

    else {
        for (int index(byte_count - 1); index>0; --index){
             if (bytes[index] == '1'){
                bytes[index] = '0';
             }
             else{
                bytes[index] = '1';
                break;

             }

        }
    return bytes;
}
}

