/* 
 * DO NOT CHANGE THIS FILE!
 * 
 */
#include <iostream>
#include <string.h>
#include "datastructure.hpp"

using namespace std;

int main(int argc, char const *argv[])
{

    // ./main linked_list [INPUT_FILE] [OUTPUT_FILE]
    if (argc != 4)
    {
        cout << "Please follow the correct format.\n";
        return 0;
    }

    if (strcmp(argv[1], "linked_list") == 0) {
        LinkedList::solution(argv[2], argv[3]);
        
    } else if (strcmp(argv[1], "queue") == 0) {
        
        Queue::solution(argv[2], argv[3]);
    } else if (strcmp(argv[1], "stack") == 0) {
        
        Stack::solution(argv[2], argv[3]);
    } else {
        cout << "Please choose one of the following problem: \
        \n \t linked_list \n \t queue \n \t stack \n \
        Example: ./main linked_list [INPUT_FILE] [OUTPUT_FILE]\n";
        return 0;
    }    

    
}
/* 
 * DO NOT CHANGE THIS FILE!
 * 
 */