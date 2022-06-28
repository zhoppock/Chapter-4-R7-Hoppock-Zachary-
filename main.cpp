#include <iostream>

using namespace std;

int main()
{
cout << "a." << endl;

for (int i = 1; i < 10; i++) { cout << i << " "; }

cout << endl << "b." << endl;

for (int i = 1; i < 10; i += 2) { cout << i << " "; }

cout << endl << "c." << endl;

for (int i = 10; i > 1; i--) { cout << i << " "; }

cout << endl << "d." << endl;

for (int i = 0; i < 10; i++) { cout << i << " "; }

cout << endl << "e." << endl;

for (int i = 1; i < 10; i = i * 2) { cout << i << " "; }

cout << endl << "f." << endl;

for (int i = 1; i < 10; i++) { if (i % 2 == 0) { cout << i << " "; } }

   return 0;
}