#include <iostream>
#include <string>
using namespace std;

string ReadTarget() {
    string Target = "";
    cout << "Enter The Target Word: " << endl;
    cin >> Target;
    return Target;
}

string EncryptionText(string text, int EncryptionKey)
{
    for (size_t i = 0; i < text.length(); i++)
    {
        text[i] = text[i] + EncryptionKey;

    }
    return text;
}


string DeccryptionText(string text, int EncryptionKey)
{
    for (size_t i = 0; i < text.length(); i++)
    {
        text[i] = text[i] - EncryptionKey;

    }
    return text;

}

int main() {
    const int EncryptionKey = 2;

    string text = ReadTarget();
    string TextAfterEncryption = EncryptionText(text, EncryptionKey);
    string TextAfterDecryption = DeccryptionText(TextAfterEncryption, EncryptionKey);

    cout << "Text Before Encryption: " << text << endl;

    cout << "Text After Encryption: " << TextAfterEncryption << endl;

    cout << "Text After Decryption: " << TextAfterDecryption << endl;




    return 0;
}

