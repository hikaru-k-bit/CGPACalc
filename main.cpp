#include <iostream>
#include <string>
#include <fstream>
#include "UserData.h"

using namespace std;

int main()
{
	string temp;
	UserData userData;
	cout << "Salut, dear user. Please, type your name: ";
	cin >> temp;
	userData.setUsername(temp);
	cout << userData.getUsername() << ": My name is " << userData.getUsername();
}
