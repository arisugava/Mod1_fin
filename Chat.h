#pragma once
#include <vector>
#include <memory>
#include "Message.h"


	class Chat
	{
	private:

		bool chatWork = false;
		std::vector <User> Users_;
		std::vector <Message> Messages_;
		std::shared_ptr<User> curentUser_ = nullptr;

		void login();
		void singUp();
		void showChat() const;
		void showAllUserName() const;
		void addMessage();
		std::vector<User>& getAllUsers() { return Users_; }
		std::vector <Message>& getAllMessages() { return Messages_; }
		std::shared_ptr<User> getUserByLogin(const std::string& login) const;

	public:
		void start();
		bool ischatWork() const { return chatWork; };
		std::shared_ptr <User> getCurentUser_() const { return curentUser_; };
		void showLoginMenu();
		void showUserMenu();
	};
