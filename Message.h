#pragma once
#include "User.h"
	class Message
	{

		std::string from_;
		std::string to_;
		std::string text_;

	public:
		
		Message(const std::string& from, const std::string& to, const std::string& text) : from_(from), to_(to), text_(text) {}
		

		const std::string& getfrom_() const { return from_; }

		const std::string& getto_() const { return to_; }

		const std::string& gettext_() const { return text_; }
		

	
	};
