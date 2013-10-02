#include <iostream>
#include <string>

using namespace std;

bool run();
void validityCheck(string);
bool isPalindrome(string); //initial setup function
bool isPalindrome(string, int, int); //actual recursion
string filter(string);

int main()
{
	bool running = true;
	while(running)
	{
		run();
	}
	
	return 0;
}

bool run()
{
	char option;
	string input;
	bool result;
	
	cout << "Would you like to filter out non-alphabetic characters? (Y/N)" << endl;
	cin >> option;
	
	cout << "Please input the string to check:" << endl;
	cin >> input;
	
	try
	{
		validityCheck(input);
	
		if(toupper(option) == 'Y')
			input = filter(input);
		result = isPalindrome(input);
		
		cout << (result ? "Your string is a palindrome." : "Your string is not a palindrome.")
			<< endl;
	}
	catch(string exception)
	{
		cout << exception;
	}
	
	cout << "Would you like to try another? (Y/N)" << endl;
	cin >> option;
	return (toupper(option) == 'Y');
}

void validityCheck(string input)
{
	
}

bool isPalindrome(string input)
{

}

string filter(string input)
{
	
}
