#include <iostream>
#include <string>
#include <fstream>

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
  char plaintextFileName[256];
  char inputKeyFileName[256];
  char outputCipherTextFileName[256];
  
  cout << "Enter the name of the plaintext file: " << endl;
  cin.get (plaintextFileName, 256);
  cout << "Filename: " << plaintextFileName << endl;
  
  // Doesn't work. Need to fix this.
  cin.clear();
  fflush(stdin);
  
  cout << "Enter the name of the input key file: " << endl;
  cin.get (inputKeyFileName, 256);
  cout << "Input key filename: " << inputKeyFileName << endl;
  
  cout << "Enter the name of the output ciphertext file: " << endl;
  cin.get (outputCipherTextFileName, 256);
  cout << "Output ciphertext filename: " << outputCipherTextFileName << endl;
  
  preprocessing();
  substitution();
  padding();
  shiftrows();
  parityBit();
  mixColumn();
  return 0;
}