//Justin Ortiz//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int user1;
    cout << "Enter \"1\" for yes or \"2\" for no: ";
    cin >> user1;

    if (user1 == 1) {
    cout << "Rolling dice..." << endl;
    cout << "You rolled " << (rand() % 6 + 1) << " and " << (rand() % 6 + 1) << " !" << endl;
}

    else {
        cout << "Bye !" << endl;
    }

    return 0;
}
