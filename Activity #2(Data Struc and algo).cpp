#include <iostream>
#include <string>  
using namespace std;

int main() {

    string fullName;
    string courseYearSec;
    string birthday;
    string motto;

    cout << "Enter your Full Name: ";
    getline(cin, fullName);

    cout << "Enter your Course, Year & Section: ";
    getline(cin, courseYearSec);

    cout << "Enter your Birthday: ";
    getline(cin, birthday);

    cout << "Enter your Motto or Motivation in Life: ";
    getline(cin, motto);
    
    cout << endl;
    cout << "Hi! I'm " << fullName << " of " << courseYearSec << "." << "Welcome to Data Structures and Algorithm! " << endl;
    cout << "My Birthday is on " << birthday << ". " << "And my motto/motivation in life is: " << motto << endl;

    return 0;
}

// DONE
