#include <string>
#include <iostream>
#include <fstream>
#include "user.h"
using namespace std;

bool user_data_base_controller::add_user(string logn, string passwd, string accountType) 
{
	user *new_user;
	if (accountType == "teacher")
	{
		new_user = new teacher(logn, passwd);
		((teacher *)new_user)->write_to_file();
		return true;
	}
	else if (accountType == "student")
	{
		new_user = new student(logn, passwd);
		((student *)new_user)->write_to_file();
		return true;
	}
	return false;
}

void student::write_to_file() 
{
	const string users_file_name = "..\\data\\users.txt";
	ofstream users(users_file_name, ios::app);
	string buff; 
	buff = "student " + login + " " + password + " 0\n";
	users << buff;
	users.close();
}

void teacher::write_to_file() 
{
	const string users_file_name = "..\\data\\users.txt";
	ofstream users(users_file_name, ios::app);
	string buff; 
	buff = "teacher " + login + " " + password + "\n";
	users << buff;
	users.close();
}

void parse_user_data(string dataLine, string logn, string &passwd, string &accountType, float &lvl) {
	int tmp = dataLine.find_first_of(' ');
	accountType = dataLine.substr(0, tmp);
	tmp = accountType.size() + 1 + logn.size() + 1;
	passwd = dataLine.substr(tmp, dataLine.find(' ', tmp + 1) - tmp - 1);
	tmp += 1 + passwd.size();
	if (tmp <= dataLine.size())
	{
		lvl = stof(dataLine.substr(tmp, dataLine.size() - tmp));
	}
	else
	{
		lvl = -1;
	}
}

bool user_data_base_controller::user_data(string logn, string &passwd, string &accountType, float &lvl) 
{
	const string dir_file = "..\\data\\users.txt";
	ifstream user_data_file(dir_file);
	
	string clogin;
	string buff;
	int tmp = 0;
	while (!user_data_file.eof()) 
	{
		getline(user_data_file, buff);
		clogin = buff.substr(buff.find_first_of(' ') + 1, buff.find(' ', buff.find_first_of(' ') + 1) - buff.find_first_of(' ') - 1);
	
		if (logn == clogin) 
		{	
			parse_user_data(buff, logn, passwd, accountType, lvl);
			return true;
		}
	}
	return false;	
}

string user::get_login() 
{
	return login;
}

string user::get_password()
{
	return password;
}

float student::get_level() 
{
	return level;
}