#include <iostream>
#include <string>
#define shift 3
using namespace std;

string encrypt(const string& text) {
    string result;
    for (char c : text) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            result += char(((c - offset + shift) % 26) + offset);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string text;
    cout << "Enter text to encrypt: \n";
    getline(cin, text);


    string encrypted = encrypt(text);
    cout << "Encrypted text: \n" << encrypted << endl;
    return 0;
}
