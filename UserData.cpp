#include "UserData.h"

UserData::UserData()
{
	m_username = "user";
}

UserData::UserData(string username)
{
	m_username = username;
}

void UserData::setUsername(string username)
{
	m_username = username;
}