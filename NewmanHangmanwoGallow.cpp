
/*Program Name: Hangman!
Purpose: I am writing a c++ program to imitate the classic game called Hangman.
The user will have twenty six different words which may be used for
the game. The user is expected to spell the word before nine incorrect guess attempts
will draw the full gallow and user.

Author: Derris Newman
Date Last Modified: June 19, 2019 */
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessWord(string word);

int main()
{
srand(time(NULL));
const int SIZE = 26;
string word;
char ch;
ifstream dataln;

dataln.open("HangmanWords.txt");

if (dataln.fail())
{
  cout << "File not found";
  return 1;
}
else
{
  string words[SIZE];
  for (int i = 0; i < SIZE; i++)
  {
    dataln >> word;
    words[i] = word;
  }
  dataln.close();
  while (true)
  {
    int n = rand() % (26) + 1;
    guessWord(words[n]);
    cout << "\nDo you want to continue the game (Y/N): ";
    cin >> ch;
    if (ch =='y' || ch == 'Y')
    {
      continue;
    }
    else
    {
      break;
    }
  }
}
return 0;
}
//*****************************************************************************
// This function asks the player to guess a word                              *
//*****************************************************************************
void guessWord(string word)
{
  const int MAXCHANCES = 9;
  char ch;
  int miss = 0, flag;
  int len = word.length();
  char arr[len];
  for (int i = 0; i < len; i++)
  {
    arr[i] = '*';
  }
  while (len != 0)
  {
    flag = 0;
    cout << "(Guess) Enter a letter in word ";
    for (int i = 0; i < word.length(); i++)
    {
      cout << arr[i];
    }
    cout << ">";
    cin >> ch;
    for (int i = 0; word.length(); i++)
    {
      if (word.at(i) == ch && arr[i] == '*')
      {
        arr[i] = ch;
        len--;
        flag = 1;
      }
      else if (word.at(i) == ch && arr[i] != '*')
      {
        cout << ch << " is already in the word." << endl;
        flag = 1;
      }
    }
    if (flag == 0)
    {
      miss++;
      cout << ch << " is not in the word." << endl;
      cout << "You have " << MAXCHANCES - miss << " left." << endl;
      if (MAXCHANCES == miss)
      {
        cout << "You lost the game. The word is: " << word << endl;
        break;
      }
    }
  }
  if (len == 0)
  {
    cout << "The Word is: ";
    for (int i = 0; i < word.length(); i++)
    {
      cout << arr[i];
    }
    cout << "\nYou won the game!" << endl;
  }
}
