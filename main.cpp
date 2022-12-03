#include "Chat.h"
#include <iostream>




int main()
{ 
	Chat Chat;
	
	Chat.start();	

	while (Chat.ischatWork())
	{
		Chat.showLoginMenu();

		while (Chat.getCurentUser_())
		{
			Chat.showUserMenu();
		}
	}
	return 0;
}
