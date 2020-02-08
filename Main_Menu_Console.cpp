#include "Menu_Sub_Menu_Template.h"

//******************************************************************************

int main_Menu_Console(int selection)
{
	int selection_Limit = 4;//change to match # of opts for error handling
	int flag = 0;
	cout << "******************************   Main Menu 1   *************"
		<< "*******************" << endl;

	cout << endl;

	cout << "0. Exit program." << endl;
	cout << "1. Main menu 1 option 1" << endl;
	cout << "2. Main menu 1 option 2" << endl;
	cout << "3. Main menu 1 option 3" << endl;

	cout << "Enter Selection -->";

	selection = get_Selection(selection, selection_Limit);

	switch (selection)
	{
	case (0):
	{
		return 0;
	}
	break;
	case (1):
	{
		do
		{
			cout << "Starting sub menu 1.0" << endl;
			cout << endl;
			selection = sub_Menu_1(selection);
			//selection will be off if not set equal to function for the 
			//return of the selection in sub menu.
		} while (selection > 1);
		cout << endl;
		/*
		cout << "Sub menu 1 loop completed sucessful. Selection ="
			<< selection << endl;
		*/
		
		return selection;
	}
	break;
	case (2):
	{
		do
		{
			cout << "Starting sub menu 2" << endl;
			cout << endl;
			selection = sub_Menu_2(selection);
			//selection will be off if not set equal to function for the 
			//return of the selection in sub menu.
		} while (selection > 1);
		cout << endl;
		/*
		cout << "Sub menu 2 loop completed sucessful. Selection ="
			<< selection << endl;
		*/
		return selection;
	}
	break;
	case (3):
	{
		do
		{
			cout << "Starting sub menu 3" << endl;
			cout << endl;
			selection = sub_Menu_3(selection);
			//selection will be off if not set equal to function for the 
			//return of the selection in sub menu.
		} while (selection > 1);
		cout << endl;
		/*
		cout << "Sub menu 3 loop exited sucessful. Selection ="
			<< selection << endl;
		*/
			
		return selection;
	}
	break;
	default:
	{
		cout << "*********************************   Menu   *****************"
			<< "*******************" << endl;
		cout << "*********************************   Broke   ****************"
			<< "*******************" << endl;
		cout << "********************************   Somehow   ***************"
			<< "*******************" << endl;
		return 0; //should exit program
	}
	}//end of switch

	/*

	*/
	return selection;
}