#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>

using namespace std;

char plaintext[999999];
char key[16];
char newKey[999999];
char encrpyted[999999];
char output[999999];

int length = 0;

void preprocessing()
{
	cout << "Preprocessing..." << endl;
	int letterCount = 0;
	for (int i = 0; i < 999999; i++)
	{
		if (plaintext[i] != NULL)
		{
			cout << plaintext[i];
		}
	}

	cout << endl;
	system("PAUSE");
	cout << endl;
}

int charToInt(char c)
{
	switch (c)
	{
		case 'A': return 0;
		case 'B': return 1;
		case 'C': return 2;
		case 'D': return 3;
		case 'E': return 4;
		case 'F': return 5;
		case 'G': return 6;
		case 'H': return 7;
		case 'I': return 8;
		case 'J': return 9;
		case 'K': return 10;
		case 'L': return 11;
		case 'M': return 12;
		case 'N': return 13;
		case 'O': return 14;
		case 'P': return 15;
		case 'Q': return 16;
		case 'R': return 17;
		case 'S': return 18;
		case 'T': return 19;
		case 'U': return 20;
		case 'V': return 21;
		case 'W': return 22;
		case 'X': return 23;
		case 'Y': return 24;
		case 'Z': return 25;
	}
}

char intToChar(int i)
{
	switch (i)
	{
		case 0: return 'A';
		case 1: return 'B';
		case 2: return 'C';
		case 3: return 'D';
		case 4: return 'E';
		case 5: return 'F';
		case 6: return 'G';
		case 7: return 'H';
		case 8: return 'I';
		case 9: return 'J';
		case 10: return 'K';
		case 11: return 'L';
		case 12: return 'M';
		case 13: return 'N';
		case 14: return 'O';
		case 15: return 'P';
		case 16: return 'Q';
		case 17: return 'R';
		case 18: return 'S';
		case 19: return 'T';
		case 20: return 'U';
		case 21: return 'V';
		case 22: return 'W';
		case 23: return 'X';
		case 24: return 'Y';
		case 25: return 'Z';
	}
}

void substitution()
{
	cout << "Substitution..." << endl;
	

	

	cout << "Input Text: " << endl;
	for (int i = 0; i < 999999; i++)
	{
		if (plaintext[i] != NULL)
		{
			cout << plaintext[i];
			length++;
		}
	}
	cout << endl;
	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (key[counter] != NULL)
		{
			newKey[i] = key[counter];
			counter++;
		}
		else
		{
			counter = 0;
			newKey[i] = key[counter];
			counter++;
		}
		cout << newKey[i];
	}

	cout << endl;

	for (int i = 0; i < length; i++)
	{
		int plain = charToInt(plaintext[i]);
		int keyNum = charToInt(newKey[i]);
		encrpyted[i] = intToChar((plain + keyNum) % 26);
		cout << encrpyted[i];
	}

	cout << endl;
}

void padding()
{
	cout << "Padding" << endl;
	for (int k = 0; k < length; k++)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << encrpyted[k];
				k++;
				//we're missing letters here...
			}
			cout << endl;
		}
		cout << endl;
	}
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
	//cin.get(plaintextFileName, 256);
	//cout << "Filename: " << plaintextFileName << endl;

	ifstream is("test.txt");

	char c;
	int i = 0;
	cout << endl;
	cout << "Input: " << endl;
	while (is.get(c))
	{
		//cout << i;
		cout << c;
		if (!isspace(c))
		{
			if (isalpha(c))
			{
				plaintext[i] = c;
			}
		}
		i++;
	}

	cout << endl;
	system("PAUSE");
	is.close();

	preprocessing();

	cout << "Enter the name of the input key file: " << endl;

	ifstream keyFile("key.txt");

	char ch;
	int j = 0;
	cout << endl;
	cout << "Key: " << endl;
	while (keyFile.get(ch))
	{
		cout << ch;
		if (isalpha(ch))
		{
			key[j] = ch;
		}
		j++;
	}

	cout << endl;
	system("PAUSE");
	keyFile.close();

	cout << "Enter the name of the output ciphertext file: " << endl;
	cin.get(outputCipherTextFileName, 256);
	cout << "Output ciphertext filename: " << outputCipherTextFileName << endl;

	
	substitution();
	padding();
	shiftrows();
	parityBit();
	mixColumn();
	system("PAUSE");
	return 0;
}