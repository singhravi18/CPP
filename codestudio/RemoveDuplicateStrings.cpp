# include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char *input) {
    if (input[0] == '\0') return; // Base case: If string is empty, return

    if (input[0] == input[1]) {
        int i = 0;
        while (input[i] != '\0') { // Shift the string left
            input[i] = input[i + 1];
            i++;
        }
        removeConsecutiveDuplicates(input); // Recur for the modified string
    } else {
        removeConsecutiveDuplicates(input + 1); // Recur for the next character
    }
}
