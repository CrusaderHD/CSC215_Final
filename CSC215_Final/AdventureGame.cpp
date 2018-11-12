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
string username;
string* un = &username;
string userWeapon;
string* uw = &userWeapon;

string runOrInvestigate;
string stealthEngageOrRun;


void Investigate()
{
	cout << "\nYou crouch and begin to slowly walk around the tree you hear noises from." << endl;
	cout << "You spot 2 Bandits. They appear to be drunk, but you over hear them say they are looking for someone." << endl;
	cout << "After you listen for a moment, you discover they are looking for you. Their leader placed a bounty on your head because you possess the " << *uw << endl;
	cout << "At this moment, you have 3 choices: 'Stealth,  Engage, or Run. " << endl;
	cout << "Which do you choose: ";
	cin >> stealthEngageOrRun;

	if (stealthEngageOrRun == "Stealth" || stealthEngageOrRun == " stealth")
	{
		system("cls");
		cout << "You try to slowly sneak behind the bandits." << endl;
		cout << "You throw a rock in the opposite direction in an attempt to distract one." << endl;
		cout << "They turn to each other asking if they heard that." << endl;
		cout << "The bandits nod and one heads off toward the direction of the Rock Throw." << endl;
		cout << "You sneak behind the Bandit closest to you and swing your " << *uw << " above your head and deliver a killing blow to one of the Bandits." << endl;
		cout << "As the other Bandit returns, he freaks out when he notices his ally is dead." << endl;
		cout << "He attempts to yell for help, but as he opens his mouth, you take your " << *uw << " and delivery another silent killing blow to the second Bandit" << endl;
		system("pause");
		cout << "\n\n This is where the story ends. To be continued...." << endl;
 	}
	else if (stealthEngageOrRun == "Engage" || stealthEngageOrRun == " engage")
	{
		system("cls");
		cout << "You willingly walk up to the Bandits and ask them one question." << endl;
		cout << "Whatcha guys' looking for?" << endl;
		cout << "They turn to each other, then back at you, then to your " << *uw << "." << endl;
		cout << "Ummm, You they respond." << endl;
		cout << "The bandits pull out their scimitars and begin to attack you." << endl;
		cout << "They aren't very smart and walk side-by-side to try and attack you." << endl;
		cout << "You then call upon the power of " << *uw << " run towards the bandits and deliver a mighty side strike." << endl;
		cout << "The side strike hitting both Bandits and killing them on contact." << endl;
		system("pause");
		cout << "\n\n This is where the story ends. To be continued...." << endl;
	}
	else if (stealthEngageOrRun == "Run" || stealthEngageOrRun == " run")
	{
		cout << "You're a coward. Might as well quit the game here..." << endl;
	}
}

void Run()
{
	cout << "You're a coward. Might as well quit the game here..." << endl;
}



//Function: PlayAdventureGame
void PlayAdventureGame()
{
	cout << "\t\t\t\t*********************************" << endl;
	cout << "\t\t\t\t*WELCOME TO MYSTERIOUS ADVENTURE*" << endl;
	cout << "\t\t\t\t*********************************" << endl;

	//Ask user what their name is.
	cout << "\n\nWhat is your name: ";
	cin >> username;
	cout << "\n\n" << *un << ", it is nice to meet you!" << endl;
	cout << "You are brave embarking on this journey alone." << endl;
	cout << "I have provided you with a choice of 3 weapons. You choose 1. Which will it be?\n\n";
	cout << "*******************" << endl;
	cout << "Greatsword of Peril" << endl;
	cout << "*******************" << endl;
	cout << "\n";
	cout << "***********************" << endl;
	cout << "Skeletal Scythe of Fire" << endl;
	cout << "***********************" << endl;
	cout << "\n";
	cout << "**********************" << endl;
	cout << "Greathammer of Justice" << endl;
	cout << "**********************" << endl;
	cout << "\nChoose now: " << endl;
	cin.ignore();
	getline(cin, userWeapon);
	cout << "\n\n" << endl;

	if (userWeapon == "Greatsword of Peril" || userWeapon == "greatsword of peril")
	{
		cout << "You have choosen and equipped the 'Greatsword of Peril." << endl;
	}
	else if (userWeapon == "Skeletal Scythe of Fire" || userWeapon == "skeletal scythe of fire")
	{
		cout << "You have choosen and equipped the 'Skeletal Scythe of Fire." << endl;
	}
	else if (userWeapon == "Greathammer of Justice" || userWeapon == "greathammer of justice")
	{
		cout << "You have choosen and equipped the 'Greathammer of Justice." << endl;
	}
	else
	{
		cout << "You didn't choose properly. So I am giving you a Squirt Gun for not following directions...Good luck." << endl;
		userWeapon = "Squirt Gun";
	}
	cout << "\n\nOkay, " << *un << ". Now that you have your " << *uw << ". Let's proceed.\n" << endl;
	system("pause");
	system("cls");
	cout << "\n\nYou are in a dark, seemingly desolate forest." << endl;
	cout << "You begin walking through the forest trying not to make any noise as you bang your " << *uw << " on some surrounding trees." << endl;
	cout << "After walking for what seemed to be 15 miles you stop to take a break." << endl;
	cout << "After a moment of sitting down, you hear some rustling in the trees and you think you hear footsteps..." << endl;
	cout << "What do you do? Run or Investigate: ";
	cin >> runOrInvestigate;

	if (runOrInvestigate == "run" || runOrInvestigate == "Run")
	{
		cout << "\nYou Coward! You have a " << *uw << ". How could you be scared!" << endl;
		Run();
	}
	else if(runOrInvestigate == "investigate" || runOrInvestigate == "Investigate")
	{
		cout << *un << ", acting like a true warrior!" << endl;
		Investigate();
	}








}