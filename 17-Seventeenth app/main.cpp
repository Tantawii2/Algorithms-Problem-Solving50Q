#include <iostream>
#include <string>
using namespace std;

string ReadTarget() {
    string Target = "";
    cout << "Enter The Target Word: " << endl;
    cin >> Target;
    return Target;
}

bool PrintWords(string Target) {
    int Sum = 0;
    string Word = "";
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                Word = char(i);
                Word += char(j);
                Word += char(k);
                Sum++;

                cout << "Trial [" << Sum << "] " << Word << endl << endl;

                if (Word == Target) {
                    cout << "Congratulations Password Is" << endl;

                    cout << "Trial [" << Sum << "] " << Word << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    PrintWords(ReadTarget());
    return 0;
}