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


//Here are the random words and hints. Words on Left. Hints on Right.
/*
"alpha", "First letter of Military Phonetic Alphabet"
"eagle", "Freedom Bird"
"duck","Code Debugger or Pond Swimmer"
"fox","What does it say? Does anyone know?"
"glasses","Tool to assist in eyesight"
"paper","Write on me, draw on me. I don't care. I am a useful tool."
"window","People look out of me, but don't realize it is what's on the inside that matters."
"door","I get slammed, I get shut, I get closed. But on some occasions, I get open. What am I?"
"television","You watch me. "
"keyboard","Odds are, you're using me right now. How dare you use me like that."
"star", "It shines brightly at night."
"camera", "I take pictures or videos."
"phone", "I can talk, text, record and many other things."
"gold", "My nemesis is silver."
"stairs", "Up, Down? Just walk, I can take you both ways."
"brain", "You should use me when thinking. I am a useful tool."
"desk", "I typically have a computer on top of me."
"fan", "I spin in circles all day and help people be cool."
"controller", "You use me to play most video games."
"ground", "Odds are, you walk on me at least once a day.
"mario", "Its'a me _______. Also  a Nintendo Icon."
"luigi", "Green Brother. Also had a mansion where he hunted ghosts."
"square", "A more evenly sided rectangle."
"pokemon", "Gotta Catch'em all..."
"yoshi", "Always willing to help Mario. Even if it means his own demise."
"dragon", "I breathe hot fire."
"blanket", "When you are cold, you will use me."
"swimming", "I am something you do in a pool."
"vehicle", "Vroom Vroom."
"toilet", "Remember to flush..."
 */




//Function: PlayKeywords: This is the play through of Keywords.
void PlayKeywordGame()
{
	string userName;
	string startGameWord;
	bool playAgain = false;


	cout << "\t\t\t\t**************************" << endl;
	cout << "\t\t\t\t*WELCOME TO WORD SCRAMBLE*" << endl;
	cout << "\t\t\t\t**************************" << endl;

	cout << "\n\nHere you will be given 3 different scrambled words per turn. It is your goal to guess each word properly." << endl;
	cout << "Let's begin..." << endl;
	system("pause");

	system("cls");
	//Create a Do_While Loop. This will run the game until player decides they no longer wish to play. Player has to guess all three words 3 times prior to being prompt to play again.
	do
	{
		//For_Loop. This will run through 3 random words. Player guesses 3 words for each game before being asked to play again.
		for (int i = 0; i < 3; ++i)
		{
			bool playAgain = false;

			enum fields { WORDONE, HINTONE, NUM_FIELDS_0 };

			const int NUM_WORDS_0 = 10;  			//State how many words there are in the first iteration.
			const string WORDS_0[NUM_WORDS_0][NUM_FIELDS_0] =
			{
				{"alpha", "First letter of Military Phonetic Alphabet"},
				{"eagle", "Freedom Bird"},
				{"duck","Code Debugger or Pond Swimmer"},
				{"fox","What does it say? Does anyone know?"},
				{"glasses","Tool to assist in eyesight"},
				{"paper","Write on me, draw on me. I don't care. I am a useful tool."},
				{"window","People look out of me, but don't realize it is what's on the inside that matters."},
				{"door","I get slammed, I get shut, I get closed. But on some occasions, I get open. What am I?"},
				{"television","You watch me. "},
				{"keyboard","Odds are, you're using me right now. How dare you use me like that."}
			};
			//Picking a random word from the choices...
			srand(static_cast<unsigned int>(time(0)));
			int choice_0 = (rand() % NUM_WORDS_0);
			string theWord_0 = WORDS_0[choice_0][WORDONE]; //The word to Guess...
			string theHint = WORDS_0[choice_0][HINTONE]; //The hint to the word...
			//Now time to create a jumbled version of chosen word.
			string randWordChoice = theWord_0;
			int length = randWordChoice.size();
			for (int i = 0; i < length; ++i)
			{
				int index0 = (rand() % length);
				int index1 = (rand() % length);
				char temp0 = randWordChoice[index0];
				randWordChoice[index0] = randWordChoice[index1];
				randWordChoice[index1] = temp0;
			}

			//Create another enum for the second batch of words.
			enum { WORDTWO, HINTTWO, NUM_FIELDS_1 };

			const int NUM_WORDS_1 = 10;  			//State how many words there are in the first iteration.
			const string WORDS_1[NUM_WORDS_1][NUM_FIELDS_1] =
			{
				{"star", "It shines brightly at night."},
				{"camera", "I take pictures or videos."},
				{"phone", "I can talk, text, record and many other things."},
				{"gold", "My nemesis is silver."},
				{"stairs", "Up, Down? Just walk, I can take you both ways."},
				{"brain", "You should use me when thinking. I am a useful tool."},
				{"desk", "I typically have a computer on top of me."},
				{"fan", "I spin in circles all day and help people be cool."},
				{"controller", "You use me to play most video games."},
				{"ground", "Odds are, you walk on me at least once a day."}
			};

			srand(static_cast<unsigned int>(time(0)));
			int choice_1 = (rand() % NUM_WORDS_1);
			string theWord_1 = WORDS_1[choice_1][WORDTWO];
			string theHint_1 = WORDS_1[choice_1][WORDTWO];

			string randWordChoice_1 = theWord_1;
			int length_1 = randWordChoice_1.size();
			for (int i = 0; i < length_1; ++i)
			{
				int index_2 = (rand() % length_1);
				int index_3 = (rand() % length_1);
				char temp_1 = randWordChoice_1[index_2];
				randWordChoice_1[index_2] = randWordChoice_1[index_3];
				randWordChoice_1[index_3] = temp_1;
			}


			//Create a third enum for the third batch of words.
			enum { WORDTHREE, HINTTHREE, NUM_FIELDS_2 };

			const int NUM_WORDS_2 = 10;  			//State how many words there are in the first iteration.
			const string WORDS_2[NUM_WORDS_2][NUM_FIELDS_2] =
			{
				{"mario", "Its'a me _______. Also  a Nintendo Icon."},
				{"luigi", "Green Brother. Also had a mansion where he hunted ghosts."},
				{"square", "A more evenly sided rectangle."},
				{"pokemon", "Gotta Catch'em all..."},
				{"yoshi", "Always willing to help Mario. Even if it means his own demise."},
				{"dragon", "I breathe hot fire."},
				{"blanket", "When you are cold, you will use me."},
				{"swimming", "I am something you do in a pool."},
				{"vehicle", "Vroom Vroom."},
				{"toilet", "Remember to flush..."}
			};

			srand(static_cast<unsigned int>(time(0)));
			int choice_2 = (rand() % NUM_WORDS_2);
			string theWord_2 = WORDS_2[choice_2][WORDTHREE];
			string theHint_2 = WORDS_2[choice_2][WORDTHREE];

			string randWordChoice_2 = theWord_2;
			int length_2 = randWordChoice_2.size();
			for (int i = 0; i < length_2; ++i)
			{
				int index_4 = (rand() % length_2);
				int index_5 = (rand() % length_2);
				char temp_2 = randWordChoice_2[index_4];
				randWordChoice_2[index_4] = randWordChoice_2[index_5];
				randWordChoice_2[index_5] = temp_2;
			}


			//Show player what the scrambled words are and take in their guesses. .
			cout << "\nWord One: " << randWordChoice;
			string guessOne;
			cout << "\n\nWhat is your first guess " << userName << "? ";
			cin >> guessOne;

			cout << "\nWord Two: " << randWordChoice_1;
			string guessTwo;
			cout << "\nWhat is your second guess " << userName << "? ";
			cin >> guessTwo;

			cout << "\nWord Three: " << randWordChoice_2;
			string guessThree;
			cout << "\nWhat is your third guess " << userName << "? ";
			cin >> guessThree;

			//Entering the Game Loop
			//While_Loop will run as long as the users guess does not equal 'The Word' or quit. Will also allow user to ask for a hint.
			while ((guessOne != theWord_0 || guessTwo != theWord_1 || guessThree != theWord_2) && (guessOne != "quit"))
			{
				//If user asks for a hint.
				if (guessOne == "hint")
				{
					cout << "\nThe Hint for word one is: " << theHint;
				}
				else if (guessTwo == "hint")
				{
					cout << "\nThe Hint for word two is: " << theHint_1;
				}
				else if (guessThree == "hint")
				{
					cout << "\nThe Hint for word three is: " << theHint_2;
				}
				else
				{
					cout << "\nSorry, that guess is not correct." << endl;
				}
				//After hint is displayed, ask user to guess.
				cout << "\n\nWhat is your guess: ";
				cin >> guessOne;
			}

			//If the user guesses the word.
			if (guessOne == theWord_0)
			{
				cout << "\nCONGRATULATIONS. You guessed word one correctly.\n" << endl;
			}
			else if (guessOne == "quit" || "Quit")
			{
				cout << "I am sad to see you leave. But I understand. :( " << endl;
				playAgain = false;
				break;
			}

			if (guessTwo == theWord_1)
			{
				cout << "\nCONGRATULATIONS. You guessed word two correctly.\n" << endl;
			}
			else if (guessOne == "quit" || "Quit")
			{
				cout << "I am sad to see you leave. But I understand. :( " << endl;
				playAgain = false;
				break;
			}

			if (guessThree == theWord_2)
			{
				cout << "\nCONGRATULATIONS. You guessed word three correctly.\n" << endl;
			}
			else if (guessOne == "quit" || "Quit")
			{
				cout << "I am sad to see you leave. But I understand. :( " << endl;
				playAgain = false;
				break;
			}

			system("pause");
		}

		char playerChoice;
		cout << "\nWould you like to play again 'y/n':  ";
		cin >> playerChoice;

		if (playerChoice == 'y' || playerChoice == 'Y')
		{
			playAgain = true;
		}
		else
		{
			playAgain = false;
		}
	} while (playAgain);

	cout << "\nThanks for playing. Have a nice day!\n" << endl;
}