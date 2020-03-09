#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
// #include "stack.h"
using namespace std;

class Stack {
    public:    
        bool   Push( const string& );
        bool   Pop ( string &elem );
        bool   Peek( string &elem );

        bool   Find(  const string &elem ) const;
        int    Count( const string &elem ) const;

        bool   Empty() const { return _stack.empty(); }
        bool   Full()  const { return _stack.size() == _stack.max_size(); }
        int    Size()  const { return _stack.size(); }

    private:
        vector<string> _stack;
};

bool
Stack::Pop( string &elem ) 
{
    if ( Empty() )
         return false;

    elem = _stack.back();
    _stack.pop_back(); 
    
    return true;
}

bool
Stack::Peek( string &elem ) 
{
    if ( Empty() )
         return false;

    elem = _stack.back();
    return true;
}

bool
Stack::Push( const string &elem ) 
{
    if ( Full() )
         return false;

    _stack.push_back( elem );
    return true;
}

#include <algorithm>

bool
Stack::Find( const string &elem ) const
{
	vector<string>::const_iterator end_it = _stack.end();
	return std::find( _stack.begin(), end_it, elem ) != end_it;
}

int
Stack::Count( const string &elem ) const 
{
	return std::count( _stack.begin(), _stack.end(), elem );
}

int main(int argc, char *argv[])
{
	Stack testStack;
	string word;
	cout << "Please enter some strings: ";
	while (cin >> word && !testStack.Full())
		testStack.Push(word);
	if (testStack.Empty())
		cerr << "Sorry, the stack is empty." << endl;
	if (testStack.Peek(word))
		cout << "There are " << testStack.Size() << " strings in the stack." << endl;
	cout << "The reverse order: ";
	while (testStack.Size())
		if (testStack.Pop(word))
			cout << word << " ";
	cout << endl << "There are " << testStack.Size() << " strings in the stack." << endl;
	return 0;
}