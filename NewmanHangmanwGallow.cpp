
/*Program Name: Hangman!
Purpose: I am writing a c++ program to imitate the classic game called Hangman.
The user will have twenty six different words which may be used for
the game. The user is expected to spell the word before nine incorrect guess attempts
will draw the full gallow and user.

1. The game selects a random word for the player to guess.
2. The player guesses one letter at a time until either the word is completed,
   or the number of missed guesses reach nine.

Author: Derris Newman
Date Last Modified: June 26, 2019 */

#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void guessWord(string word);

int main()
{
srand(time(0));                                               // Random gnerated selected word from list "HangmanWords.txt"
const int SIZE = 26;                                          // Number of words in the text file for use
string word;
char ch;



ifstream inputFile;

inputFile.open("HangmanWords.txt");                           // Guessing word game function

if (inputFile.fail())                                         // Testing file
{
  cout << "File not found";
  return 1;
}
else
{
  string words[SIZE];
  for (int i = 0; i < SIZE; i++)
  {
    inputFile >> word;
    words[i] = word;
  }
  inputFile.close();
  while (true)
  {
    int n = rand() % (25) + 1;
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
  const int MAXCHANCES = 10;                                        // The gallow has nine scenes before completely built
  char ch;
  int miss = 0, flag;
  int len = word.length();
  char arr[len];
  cout << "Welcome to the game Hangman!" << endl;
  cout << "Please guess the mystery word. If you guess the wrong letter more than 10 times, you loose the game!" << endl;

  for (int i = 0; i < len; i++)
  {
    arr[i] = '*';                                                  // '*' for each letter if word to be guessed
  }
  while (len != 0)
  {
    flag = 0;
    cout << "(Guess) Enter a letter in the word: ";
    for (int i = 0; i < word.length(); i++)
    {
      cout << arr[i];
    }
    cout << "> ";
    cin >> ch;
    for (int i = 0; i < word.length(); i++)
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
      miss++;                                                            // The gallow image would be connected to the miss variable
      cout << ch << " is not in the word." << endl;
      cout << "You have " << MAXCHANCES - miss << " left." << endl;
      if (MAXCHANCES == miss)
      {
        cout << "You lost the game. The word is: " << word << endl;
        break;
      }
    }


  if (MAXCHANCES == miss)                                                       // Scene 10 is the full display
  {
    cout << "     ***********" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "  *  *  *      " << "*" << endl;
    cout << "   * * *       " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "    * *        " << "*" << endl;
    cout << "   *   *       " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry incorrect guess, you lose!" << endl;
  }
  else if ((MAXCHANCES - miss) == 1)
  {
    //symbol = "*";

    cout << "     ***********" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "  *  *  *      " << "*" << endl;
    cout << "   * * *       " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "      *        " << "*" << endl;
    cout << "        *      " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #9, please try again" << endl;
  }
  else if ((MAXCHANCES - miss) == 2)
  {
    ///symbol = "*";
    cout << "     ***********" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "  *  *  *      " << "*" << endl;
    cout << "   * * *       " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #8, please try again" << endl;
  }
  else if ((MAXCHANCES- miss) == 3)
  {
    //symbol = "*";
    cout << "     ***********" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *  *      " << "*" << endl;
    cout << "     * *       " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #7, please try again" << endl;
  }
  else if ((MAXCHANCES - miss) == 4)
  {
    //symbol = "*";
    cout << "     ***********" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #6, please try again" << endl;
  }
  else if ((MAXCHANCES - miss) == 5)
  {
    //symbol = "*";
    cout << "     ***********" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "    ***        " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #5, please try again" << endl;
  }
  else if ((MAXCHANCES - miss) == 6)
  {
    ///symbol = "*";
    cout << "     ***********" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "     *         " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #4, please try again" << endl;
  }
  else if ((MAXCHANCES - miss) == 7)
  {
    //symbol = "*";
    cout << "     ***********" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout << "               " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #3, please try again" << endl;
  }
  else if ((MAXCHANCES - miss) == 8)
  {
    //symbol = "*";
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout << "       " << "*" << endl;
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout <<"Sorry, wrong guess #2, please try again" << endl;
  }
  else if ((MAXCHANCES - miss) == 9)
  {
    //symbol = "*";
    cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
    cout << "Sorry, wrong guess, please try again!" << endl;
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
}
