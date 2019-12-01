#pragma once
#include <string>
#include <vector>
#include "recipe.h"

class user_data_base_controller
{
public:
	bool add_user(std::string logn, std::string passwd, std::string accountType);
	// returns false when something went wrong!!!
	// instruction to use function:
	// pass this function arguments which are login, password and type of account
	// types of accounts are teacher and student
	// if function returns false, account type passed to the function is wrong

	bool user_data(std::string logn, std::string &passwd, std::string &accountType, float &lvl);
	// pass this function login of the user you want to find data for
	// also pass the variables you want to save user information in
	// if lvl variable becomes equal to -1 it means that the ackount is teacher(he has no level)
	// if function returns false that means there`s no such user

};

class user
{
protected:
	std::string login;
	std::string password;
	std::vector<recipe> favorites;
	void build_favorites();
public:
	std::vector<recipe> get_favorites();
	void add_to_favorites(std::string recipeName);
	std::string get_login();
	std::string get_password();
	user(std::string logn, std::string passwd);
	~user() {};
	friend bool user_data_base_controller::add_user(std::string logn, std::string passwd, std::string accountType);
};

class student : public user
{
public:
	void write_to_file();
	float get_level();
	student(std::string logn, std::string passwd, float lvl = 0) : user(logn, passwd), level(lvl) {};
	~student() {};
private:
	float level;
};

class teacher : public user
{
public:
	void write_to_file();
	teacher(std::string logn, std::string passwd) : user(logn, passwd) {};
	~teacher() {};
	friend bool user_data_base_controller::add_user(std::string logn, std::string passwd, std::string accountType);
};
