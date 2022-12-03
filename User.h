#pragma once
#include <string>


class User
	{
	
		const std::string Login_;
		std::string Password_;

	public:
	
		User(const std::string& login, const std::string& password) : Login_(login), Password_(password) {};
		

		const std::string& getLogin_() const { return Login_; };
	

		const std::string& getPassword_() const { return Password_; };
		void setPassword_(const std::string& password) { Password_ = password; };		
		
	};
