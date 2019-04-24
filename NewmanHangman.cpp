/*Program Name: Hangman
Purpose: I am hoping to write a c++ program to imitate the classic game called Hangman.
I have been advised that the user will have several different words which may be used for
the game.  I assumme I will eventually learn to draw using c++ and develop a funtion that will
draw a stick figure gallow with a stick figure person attached to. The user is expected to
spell the word before the number of guess attempts draw the full stick figure gallow and person.
Author: Derris Newman
Date Last Modified: April 14, 2019 */

#include <iostream>
using namespace std;

int main()
{
/* Initial Description
Given the user is expected to spell a word before enough wrong guesses draws a stick figure and gallows,
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
/* The compter will then read a file with five words to be picked for use in the game. A random selector program
   will be used to choose the word*/
// Potential Words include: Program, Argument, Function, and Computer.
// The words will be entered into an array with each aplhabet/letter an element/subscript to the word array.
/* Once a word is randomly selected by the computer, the screen will ilustrate an empty _ for each
   letter of the word to be spelled with one hint below it. for example"

   _ _ _ _ _ _ _ _
   hint: An electronic device for storing and processing data, typically in binary form,
   according to instructions given to it in a variable program
   I have not figured out how to keep each alphapbet visual on screen while the user atempts additional guesses.
   I am not sure if it mandatory to also show incorrectly guessed alphabets in a area away from the gallows as well*/


// An illustration of where the gallows will be drawn will also be presented
/* The rules will indicate that no alphabets will be repeated to spell each
    mystery word (I can keep on screen as a reminder to user)*/
/*  A function is under development which will print "Good Guess" for each alhpabet guess correctly and will also "else"
   draw a portion of the gallows if guessed incorrectly with "Sorry wrong alphabet" printed with each wrong guess*/
// The user will have up to 13 incorrect guesses before the hangman and gallow are completely drawn to end the game
// The user will either recieve a "Congratulations you won" or "Sorry, you lose" to end the game.
// The user will as if he/she wants to exit the game, if not, the game will repeat.
//

  return 0;
}
