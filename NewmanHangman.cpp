/*Program Name: Hangman
Purpose: I am writing a c++ program to imitate the classic game called Hangman.
The user will have twenty six different words which may be used for
the game. The user is expected to spell the word before nine incorrect guess attempts
will draw the full gallow and user.

Author: Derris Newman
Date Last Modified: June 19, 2019 */

#include <iostream>
using namespace std;

int main()
{
/* Initial Description
Given the user is expected to spell a word before enough wrong guesses draws a  figure and gallows,
I am not sure how the word to be spelled will be presented to the user.  Should the user open another file
containing a list of words of which one will be randomly chosen.

Next thing I must learn to do is learn to draw to the stick figure and gallow to be used in the program.
Once I learn how to draw the stick figure, I will have to convert to a loop file where each wrong guess will
draw a portion of the "hangman".

Should I interact with the user after each guess either with a "congratulation, you guessed a correct alphabet" or
"sorry, guess again" and draw a portion of the "hangman".

I am finally reading and going over the Prof Wolfe and Scott McDermontt's videos for chapter 7 Arrays and Vectors.
Hopefully this chapter will answer some of my questions on how to develop the program.
*/


// Hangman Pseudocode
// Newman Hangman main program
// Get the player's namespace

// Greet player and introduce game and rules
// Ask player to hit enter to begin the game
/* The compter will randomly select one of five words to be spelled in the program.
    The user will be notified no letters are repeated.
// Potential Words include: Program, Argument, Function, and Computer.
// The words will be entered into an array with each aplhabet/letter an element/subscript to the word array.
/* Once a word is randomly selected by the computer, the screen will ilustrate an empty _ for each
   letter of the word to be spelled with one hint below it. for example"

   C_ O_ M_ P_ U_T_ E_ R_
   hint: An electronic device for storing and processing data, typically in binary form,
   according to instructions given to it in a variable program
   I will create a loop that will once a letter is correctly guessed,it will print/display again through a loop
   once the second, third, fourth....,eight letter is guessed */

// An illustration of where the gallows will be drawn will also be presented
/* The rules will indicate that no alphabets will be repeated to spell each
    mystery word (I can keep on screen as a reminder to user)*/
/*  A function is under development which will print "Good Guess" for each alhpabet guess correctly and will also "else"
   draw a portion of the gallows if guessed incorrectly with "Sorry wrong alphabet" printed with each wrong guess*/
// The user will have up to 10 incorrect guesses before the hangman and gallow are completely drawn to end the game
// The user will either recieve a "Congratulations you won" or "Sorry, you lose" to end the game.
// The user will as if he/she wants to exit the game, if not, the game will repeat.
//

  return 0;
}
