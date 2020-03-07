#include <iostream>
#include <string>
using namespace std;

int ex1_5_string()
{
    string user_name;

    cout << "Please enter your name: ";
    cin >> user_name; 

    switch ( user_name.size() ){
        case 0:
				cout << "Ah, the user with no name. "
                 << "Well, ok, hi, user with no name\n";
				break;

		  case 1:
				cout << "A 1-character name? Hmm, have you read Kafka?: "
                 << "hello, " << user_name << endl;
            break;

			 default:
		      // any string longer than 1 character
				cout << "Hello, " << user_name
                 << " -- happy to make your acquaintance!\n";
				break;
		}
		return 0;
}

int main() {

	ex1_5_string();
	// ex1_5_cstyle();
	// ex1_6_vector();
	// ex1_6_array();
	// int rev_val = ex1_7();

	
	// ex1_xtra1();
	// ex1_xtra2();	
	return 0; 
}