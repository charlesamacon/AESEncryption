#include <iostream>

using namespace std;

void preprocessing()
{
  cout << "Preprocessing" << endl;
}

void substitution()
{
  cout << "Substitution" << endl;
}

void padding()
{
  cout << "Padding" << endl;
}

void shiftrows()
{
  cout << "Shift Rows" << endl;
}

void parityBit()
{
  cout << "Parity Bit" << endl;
}

void mixColumn()
{
  cout << "Mix Column" << endl;
}

int main()
{
  cout << "Input: " << endl;
  cout << "Enter the name of the plaintext file: " << endl;
  cout << "Enter the name of the input key file: " << endl;
  cout << "Enter the name of the output ciphertext file: " << endl;
  
  preprocessing();
  substitution();
  padding();
  shiftrows();
  parityBit();
  mixColumn();
  return 0;
}