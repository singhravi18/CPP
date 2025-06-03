#include <iostream>
using namespace std;

// Function to check if a character is alphanumeric (letter or digit)
bool isAlphaNumeric(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

// Function to convert uppercase to lowercase manually
char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A'); // Convert uppercase to lowercase
    }
    return ch; // Return as is if it's already lowercase or a number
}

// Function to check if the string is a palindrome
bool isPalindrome(char name[], int n) {
    int s = 0, e = n - 1;

    while (s < e) {
        // Skip non-alphanumeric characters manually
        while (s < e && !isAlphaNumeric(name[s])) {
            s++;
        }
        while (s < e && !isAlphaNumeric(name[e])) {
            e--;
        }

        // Compare characters after converting to lowercase manually
        if (toLowerCase(name[s]) != toLowerCase(name[e])) {
            return false;
        }

        s++;
        e--;
    }
    return true;
}

// Function to calculate length manually
int getLength(char name[]) {
    int count = 0;
    while (name[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char ch[100];  // Increased size to handle long input

    cout << "Enter a string: ";
    cin.getline(ch, 100);  // Read full line (handles spaces)

    int len = getLength(ch);

    if (isPalindrome(ch, len)) {
        cout << "Yes, it is a palindrome (ignoring case & non-alphanumeric characters)." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }

    return 0;
}
