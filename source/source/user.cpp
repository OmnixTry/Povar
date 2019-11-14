#include <string>
#include <iostream>
#include <fstream>
#include "user.h"
using namespace std;

user::user(string logn, string passwd) {
	login = logn;
	password = passwd;
}

bool add_user(string logn, string passwd, string accounttype) {
	user *new_user;
	if (accounttype == "teacher")
	{
		new_user = new teacher(logn, passwd);
		new_user->write_to_file();
		return true;
	}
	else if (accounttype == "student")
	{
		new_user = new student(logn, passwd);
		((teacher *)new_user)->write_to_file();
		return true;
	}
	return false;
}

void user::write_to_file() {
	const string users_file_name = "..\\data\\users.txt";
	ofstream users(users_file_name, ios::app);
	string buff = "teacher " + login + " " + password + "\n";
	users << buff;
	users.close();
}

void student::write_to_file() {
	const string users_file_name = "..\\data\\users.txt";
	ofstream users(users_file_name, ios::app);
	string buff = "student " + login + " " + password + " 0" + "\n";
	users << buff;
	users.close();
}

bool user_data(string logn, string &passwd, string &accounttype, float &lvl) {
	const string dir_file = "..\\data\\users.txt";
	ifstream user_data_file(dir_file);

	string clogin;
	string buff;
	int tmp = 0;
	while (!user_data_file.eof()) {
		getline(user_data_file, buff);
		clogin = buff.substr(buff.find_first_of(' ') + 1, buff.find(' ', buff.find_first_of(' ') + 1) - buff.find_first_of(' ') - 1);
	
		if (logn == clogin) {
			tmp = buff.find_first_of(' ');
			accounttype = buff.substr(0, tmp);
			tmp = accounttype.size() + 1 + logn.size() + 1;
			passwd = buff.substr(tmp, buff.find(' ', tmp+1) - tmp - 1);
			tmp += 1 + passwd.size();
			if (tmp <= buff.size()) {
				lvl = stof(buff.substr(tmp, buff.size() - tmp));
			}
			else {
				lvl = -1;
			}
			return true;
		}
	}
	return false;
}