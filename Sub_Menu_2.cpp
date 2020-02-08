#include "Menu_Sub_Menu_Template.h"

//******************************************************************************

int sub_Menu_2(int selection)
{
	int selection_Limit = 4;//change to match # of opts for error handling
	int flag = 0;
	int sub_Menu_Number = 2;//change to make outputs match

		cout << "******************************   Sub Menu " << sub_Menu_Number
		<< "   *********************************" << endl;

	cout << endl;

	cout << "0. Exit program." << endl;
	cout << "1. Return to main menu." << endl;
	cout << "2. Touch function 1 in sub menu " << sub_Menu_Number << "." << endl;
	cout << "3. Touch function 2 in sub menu " << sub_Menu_Number << "." << endl;
	cout << "4. Touch function 3 in sub menu " << sub_Menu_Number << "." << endl;

	cout << "Enter Selection -->";

	selection = get_Selection(selection, selection_Limit);

	switch (selection)
	{
	case (0):
	{
		return selection;
	}
	break;
	case (1):
	{
		return selection;
	}
	break;
	case (2):
	{
		cout << "Touch of option 2 from sub menu " << sub_Menu_Number
			<< " success.";
		cout << endl;
		return selection;
	}
	break;
	case (3):
	{
		cout << "Touch of option 3 from sub menu " << sub_Menu_Number
			<< " success.";
		cout << endl;
		return 3;
	}
	break;
	case (4):
	{
		cout << "Touch of option 4 from sub menu " << sub_Menu_Number
			<< " success.";
		cout << endl;
		return 4;
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

	cout << endl;
	/*
	cout << "Sub menu " << sub_Menu_Number << " loop end. Selection =" 
	<< selection << endl;
	*/
	return selection;
};
