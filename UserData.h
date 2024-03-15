#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

class UserData
{
private:
	int courses_taken;
	string m_username;
	map<int, vector<int>> m_grades;

public:
	UserData();
	UserData(string username);
	void setUsername(string username);
	string getUsername() { return m_username; };
};
