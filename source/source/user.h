#pragma once
#include <string>
using namespace std;

bool add_user(string logn, string passwd, string accounttype);
// returns false when something went wrong!!!
// instruction to use function:
// pass this function arguments which are login, password and type of account
// types of accounts are teacher and student
// if function returns false, account type passed to the function is wrong

bool user_data(string logn, string &passwd, string &accounttype, float &lvl);


class user
{
public:
	user(string logn, string passwd);
	~user() {};
	friend bool add_user(string logn, string passwd, string accounttype);
protected:
	virtual void write_to_file();
	string login;
	string password;
};

class student : public user
{
public:
	student(string logn, string passwd, float lvl = 0) : user(logn, passwd), level(lvl) {};
	~student() {};

private:
	virtual void write_to_file();
	float level;
};

class teacher : public user
{
public:
	teacher(string logn, string passwd) : user(logn, passwd) {};
	~teacher() {};
	friend bool add_user(string logn, string passwd, string accounttype);
private:
	
};
