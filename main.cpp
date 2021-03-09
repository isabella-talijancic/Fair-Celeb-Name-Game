// C4 P1 Functions & Arrays

# include <iostream>
# include <string>

using namespace std;

// FUNCTION Declarations
void loadNames();    		// Movie star names
char displayNames();		// Output star names

// Initializing string array
string movieActors[5];


int main()
{
	cout << "* * * * Celebrity Name Game * * * *\n\n";
	
	loadNames();
	
	displayNames();
	
	cout << "\nEnd of game!";
	return 0;
}

// Function definitions
void loadNames()
{
 
    cout << "Please list 5 movie actors:\n\n\t";
    cout << "Movie Actor 1: ";
    getline(cin, movieActors[0]);
    cout << "\n\tMovie Actor 2: ";
    getline(cin, movieActors[1]);
    cout << "\n\tMovie Actor 3: ";
    getline(cin, movieActors[2]);
    cout << "\n\tMovie Actor 4: ";
    getline(cin, movieActors[3]);
    cout << "\n\tMovie Actor 5: ";
    getline(cin, movieActors[4]);
}

char displayNames()
{
    cout << "\n\nHere are the 5 actors you entered: \n\n\t";
    for (int i = 0; i < 5; i++)
    {
        cout << movieActors[i] << "\n\t";
    }
}