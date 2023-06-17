#include <iostream>

using namespace std;

/*
* Method used to create the title portion of the game. Message is the game title.
*/ 
void PrintGameTitle(string message)
{
	bool printTop = true; // Determines whither we are at the top of the title portion
	bool printBottom = true; // Determines whither we are at tha bottom of the title portion.
	const int MAX_LAYOUT_WIDTH = 33; // Constant variable that determines the width of the layout.
	bool front = true; // Boolean variable that dtermines when we are in front of a character.

	if (printTop) // If statement that executes if we are at the top of the title portion.
	{

		cout << "+---------------------------------+" << endl; // Prints the format.
		cout << "|"; // Prints the format.

	} // End of if statement
	
	// For loop that centers the message.
	for (int i = message.length(); i < MAX_LAYOUT_WIDTH; ++i)
	{
		if (front) // If statement, if we are at the front of the message.
		{
			message = " " + message; // Add spaces beginning of the message.
		} // End of if statement.
		else // Else, when we are at the end of the message.
		{
			message = message + " "; // Add spaces to the end of the message.
		}// End of else statement.

		/*
		* Changes the front boolean variable to false, indicating that the loop has reach
		* end of the message length.
		*/
		front = !front;

	} // End of for loop.


	cout << message.c_str(); // Displays to consle the message with the correct centered spacing.

	if (printBottom) // If statment that executes if we are at the bottom of the title portion
	{

		cout << "|" << endl; // Prints format.
		cout << "+---------------------------------+" << endl; // Prints format.

	} // End of if statement.


} // End of PrintMessage().

int main() 
{

	const string GAME_TITLE = "Hang Man";

	PrintGameTitle(GAME_TITLE);

	return 0;

}




/*
* What the layout is suppose to look like in the consle.
+---------------------------------+
|             HANG MAN            |
+---------------------------------+
|               |                 |
|               |                 |
|               O                 |
|              /|\                |
|               |                 |
|              / \                |
|         +----------+            |
|         |          |            |
+---------------------------------+
|        Available letters        |
+---------------------------------+
|     A B C D E F G H I J K L M   |
|     N O P Q R S T U V W X Y Z   |
+---------------------------------+
|         Guess the word          |
+---------------------------------+
| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |
+---------------------------------+
>
*/
