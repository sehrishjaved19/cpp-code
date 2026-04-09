#include<iostream>
using namespace std;
int main()
{
	cout<<"hello \nworld"<<endl;
	cout<<"hello \rworld"<<endl;
	cout<<"hello \tworld"<<endl;
	cout<<"hello \bworld"<<endl;
	cout<<"hello \vworld"<<endl;
	cout<<"hello \fworld"<<endl;
	//escape sequences are special charaters used in control string to modify the format of output.
	/*
	| Escape Sequence | Meaning         | Example Output                |
	| --------------- | --------------- | ----------------------------- |
	|	 \n           | New line        | Moves text to next line       |
	|	 \r           | Carriage return | Moves cursor to start of line |
	|	 \t           | Horizontal tab  | Adds space like a tab         |
	|	 \b           | Backspace       | Deletes previous character    |
	|	 \f           | Form feed       | Page break (rarely used)      |
	|	 \v           | Vertical tab    | Vertical spacing              |
	|	 \'           | Single quote    | Prints `'`                    |
	|	 \"           | Double quote    | Prints `"`                    |
	|	 \\           | Backslash       | Prints `\`                    |

	*/
}
