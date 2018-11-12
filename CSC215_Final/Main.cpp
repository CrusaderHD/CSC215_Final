//Creator Information:
/*
 *Name: Hunter Derrick
 *Professor Name: Tony Hinton
 *Class: CSC215 @ UAT
 *Assignment: Final Project. Compile everything throughout the course and apply it.
 *Assignment Start Date: 11/11/2018
 *Assignment Complete Date: 11/11/2018
 */

 //Task:
 /*
The more humor in this program the better you will remember it.
Your program must contain a description for the user of what it does.
Your program must ask for the user's name, then greet them by name,
Your program must contain simple/primitive data type variables.
Your program must be able to print text to the display.
Your program must accept user input.
Your program must use one or more types of loops. For example, "for loop", or "do "while loop", or the "while loop".
Your program must have at least one other function that takes parameters and returns a value which is called from main.
Your program must use at least one reference
Your program must use at least one pointer
Your program must have at least one additional header file (.h) you created.
Your program must have at least one additional code file (CPP) you created.
Your program must use heavy comments in the code showing a good understanding of your code.
Your program must include at least two classes, one base class, and one child class.
Your program must demonstrate inhearitence correctly.
Your program must your private and public correctly to demonstrate encapsulation.
Your program must be placed in GitHub
You may make your program graphical, however you are only required to have a text-based console application. Get your program working using text before you think about making a GUI.
The video is a demonstration of all functionality in your final project.  There is no maximum time requirement,but there is a the requirement to demonstrate all functionality from 
a user perspective only. Not from the role of the developer. This will be worth half of your grade on this assignment. Tell an interesting story, sell your program to the viewer on how exciting it is!
*/

//Lets include Preprocessor Directives
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "FunctionPrototypes.h"


//Lets add a namespace
using namespace std;

//Lets add some variables:
string gameChoice;

//Here will be the main(). 
int main()
{
	cout << "\t\t\t\t************************************" << endl;
	cout << "\t\t\t\t*WELCOME TO THE SMALL HALL OF GAMES*" << endl;
	cout << "\t\t\t\t************************************" << endl;

	cout << "\n\n\nHere in the SMALL HALL, We have two games here for you to play!" << endl;
	cout << "According to the Gaming Bureau of Gamer Statistics. You have to have a minimum of 3 games" << endl;
	cout << "or more to be considered a 'NORMAL HALL'. Since we only have 2. We are Small. SMALL but MIGHTY!\n" << endl;
	cout << "Please. Choose a game.\n" << endl;
	cout << "Game 1: Word Scramble!" << endl;
	cout << "Game 2: Mysterious Adventure!" << endl;
	cout << "\n\nWhat is your choice: ";

	getline(cin, gameChoice);
	cout << "\n\n" << endl;

	if(gameChoice == "Word Scramble" || gameChoice == "word scramble")
	{
		PlayKeywordGame();
	}
	else if (gameChoice == "Mysterious Adventure" || gameChoice == "mysterious adventure")
	{
		PlayAdventureGame();
	}
	else
	{
		cout << "You didn't make a correct selection." << endl;
	}


	system("pause");
	return(0);


}