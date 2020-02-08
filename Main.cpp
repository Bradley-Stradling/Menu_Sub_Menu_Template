//******************************************************************************
#include "Menu_Sub_Menu_Template.h"

int main()
{
	int selection = 1;


	cout << "**********************************************************"
		<< "**********************" << endl;
	cout << "                   Welcome to Bradleys C++ Menu System";
	cout << endl;

	do
	{
		selection = main_Menu_Console(selection);
		cout << endl;

	} while (selection != 0);

	cout << endl;
	/*
	cout << "Main menu loop exited sucessful. Selection =" << selection << endl;
	*/

	return 0;
}



