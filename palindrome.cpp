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
		running = run();
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
	getline(cin, input);
	
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
	
	if(toupper(option) == 'Y')
		return true;
	else
		return false;
}

void validityCheck(string input)
{
	if(input == "")
		throw "Illegal Argument Exception";
}

bool isPalindrome(string input)
{
	return isPalindrome(input, 0, input.length() - 1);
}

bool isPalindrome(string input, int first, int last)
{
	if(first >= last)
	{
		return true;
	}
	else if(input[first] == input[last])
	{
		return isPalindrome(input, first + 1, last - 1);
	}
	return false;
}

string filter(string input)
{
	int len = input.length();
	string output = "";
	for(int index = 0; index < len; index++)
	{
		if(isalpha(input[index]))
		{
			output += toupper(input[index]);
		}
	}
	
	return output;
}

