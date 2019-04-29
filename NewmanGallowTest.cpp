//Program: Gallow Display
//Purpose: This program breaks down the display of the Gallow with User into 10 Steps
// Pedastal, Stud, Beam, Rope, Head, Torso, Left Arm, Right Arm, Left Leg, and Right Leg
// Auther: Derris Newman
// Date last modified:

#include <iostream>
using namespace std;

// Function Prototype
gallowDisplayStep1 ()

int main ()
{

cout << "Hello and welcome to the game Hangman!" << endl;
cout << "Please guess each letter of the hidden word." << endl;
cout << "No letter is repeated and one hint will be provided with each word." << endl;

cout << gallowDisplayStep1 ();

return 0;
}

//Functions
//********************************************************************************************************************
// Definition of function Gallow Pedastal                                                                            *
// First incorrect answer displays Gallow Pedastal                                                                   *
// *******************************************************************************************************************

gallowDisplayStep1 ()
{

cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
cout << "Sorry, wrong guess, please try again!" << endl;

}

//********************************************************************************************************************
// Definition of function Gallow Pedastal and Stud                                                                            *
// Second incorrect answer displays Gallow Pedastal and Stud                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep2 (char symbol)
// {
// symbol = "*";

//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout << "       " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #2, please try again" << endl;
//}

//********************************************************************************************************************
// Definition of function Gallow Pedastal, Stud, and Beam                                                                            *
// Third incorrect answer displays Gallow Pedastal,Stud, and Beam                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep3 (char symbol)
// {
// symbol = "*";

//cout << "     ***********" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #3, please try again" << endl;
//}

//********************************************************************************************************************
// Definition of function Gallow Pedastal,Stud,Beam,and Rope                                                                            *
// Fourth incorrect answer displays Gallow Pedastal,Stud,Beam,and Rope                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep4 (char symbol)
// {
// symbol = "*";

//cout << "     ***********" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
///cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #4, please try again" << endl;
//}


//********************************************************************************************************************
// Definition of function Gallow Pedastal,Stud,Beam,Rope, and Head                                                                            *
// Fifth incorrect answer displays Gallow Pedastal,Stud,Beam,Rope, and Head                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep5 (char symbol)
// {
// symbol = "*";

//out << "     ***********" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #5, please try again" << endl;
//}

//********************************************************************************************************************
// Definition of function Gallow Pedastal,Stud,Beam,Rope,Head, and Torso                                                                            *
// Sixth incorrect answer displays Gallow Pedastal,Stud,Beam,Rope,Head, and Torso                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep6 (char symbol)
// {
// symbol = "*";

//out << "     ***********" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #6, please try again" << endl;
//}


//********************************************************************************************************************
// Definition of function Gallow Pedastal,Stud,Beam,Rope,Head,Torso, and Right Arm                                                                            *
// Sixth incorrect answer displays Gallow Pedastal,Stud,Beam,Rope,Head,Torso, and Right Arm                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep7 (char symbol)
// {
// symbol = "*";
//
//cout << "     ***********" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *  *      " << "*" << endl;
//cout << "     * *       " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #7, please try again" << endl;
//}


//********************************************************************************************************************
// Definition of function Gallow Pedastal,Stud,Beam,Rope,Head,Torso,Right Arm, and Left Arm                                                                            *
// Sixth incorrect answer displays Gallow Pedastal,Stud,Beam,Rope,Head,Torso,Right Arm, and Left Arm                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep8 (char symbol)
// {
// symbol = "*";
//
//cout << "     ***********" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "  *  *  *      " << "*" << endl;
//cout << "   * * *       " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "               " << "*" << endl;
//cout << "               " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #8, please try again" << endl;
//}


//********************************************************************************************************************
// Definition of function Gallow Pedastal,Stud,Beam,Rope,Head,Torso,Right Arm,Left Arm, Right Leg                                                                            *
// Sixth incorrect answer displays Gallow Pedastal,Stud,Beam,Rope,Head,Torso,Right Arm,Left Arm, Right Leg                                                                   *
// *******************************************************************************************************************

// void gallowDisplayStep9 (char symbol)
// {
// symbol = "*";
//
//
//cout << "     ***********" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "  *  *  *      " << "*" << endl;
//cout << "   * * *       " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "      *        " << "*" << endl;
//cout << "        *      " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry, wrong guess #9, please try again" << endl;
//}

//********************************************************************************************************************
// Definition of function Gallow and User                                                                            *
// Tenth incorrect answer displays Gallow and User/ User loses game                                                                  *
// *******************************************************************************************************************

// void gallowDisplayStep10 (char symbol)
// {
// symbol = "*";
//
//cout << "     ***********" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "    ***        " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "  *  *  *      " << "*" << endl;
//cout << "   * * *       " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "     *         " << "*" << endl;
//cout << "    * *        " << "*" << endl;
//cout << "   *   *       " << "*" << endl;
//cout <<  "*" << "*" << "*" << "*" << "*" <<"*" << "*" << "*" <<"*" << "*" << "*" << "*" << "*" << "*" << "*" << "*" << endl;
//cout <<"Sorry incorrect guess, you lose!" << endl;
//}
