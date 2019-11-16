#pragma once
#include <string>
using namespace std;

class user_data_base_controller
{
public:
	bool add_user(string logn, string passwd, string accountType);
	// returns false when something went wrong!!!
	// instruction to use function:
	// pass this function arguments which are login, password and type of account
	// types of accounts are teacher and student
	// if function returns false, account type passed to the function is wrong

	bool user_data(string logn, string &passwd, string &accountType, float &lvl);
	// pass this function login of the user you want to find data for
	// also pass the variables you want to save user information in
	// if lvl variable becomes equal to -1 it means that the ackount is teacher(he has no level)
	// if function returns false that means there`s no such user

};

class user
{
protected:
	string login;
	string password;
public:
	string get_login();
	string get_password();
	user(string logn, string passwd) : login(logn), password(passwd) {};
	~user() {};
	friend bool add_user(string logn, string passwd, string accountType);
};

class student : public user
{
public:
	void write_to_file();
	float get_level();
	student(string logn, string passwd, float lvl = 0) : user(logn, passwd), level(lvl) {};
	~student() {};
private:
	float level;
};

class teacher : public user
{
public:
	void write_to_file();
	teacher(string logn, string passwd) : user(logn, passwd) {};
	~teacher() {};
	friend bool add_user(string logn, string passwd, string accountType);
};
