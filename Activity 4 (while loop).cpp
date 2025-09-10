#include<iostream>
using namespace std;

int main()
{
    int start;
    
    cout <<  "Type number: " ;
    cin >> start ;
   
    while ( start <= 15 ) {
         cout << "Hello World: " << start << endl ;
         start++ ;
    }
    
    
    return 0;
}