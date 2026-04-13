#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message) {
  int Number = 0;
  do {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);

  return Number;
}

void frequency(int Number) {


  int Target, reminder, sum = 0;

  cout << "Enter The Target Number " << endl;
  cin >> Target;
  for (; Number > 0;) {
    reminder = Number % 10;
    Number = Number / 10;
    if (reminder == Target) {
      sum += 1;
    }
  }
  cout << " The Target Number " << Target << "  Freq is : " << sum << " Times"
       << endl;
}

int main() {
  frequency(ReadPositiveNumber("Please enter a positive number ? "));
  return 0;
}