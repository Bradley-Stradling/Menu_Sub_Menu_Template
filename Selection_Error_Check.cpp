#include "Menu_Sub_Menu_Template.h"

//******************************************************************************

//This function checks if cin for selection is integer in range and flags if not
int selection_Error_Check(int selection, int selection_Limit, int flag)
{
	if (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "Please enter a number -- > ";
		flag = 1;
	}
	if ((0 > selection) || (selection > selection_Limit))
	{
		cout << "Selection =" << selection << endl;
		cout << "Error! Please enter a number of an "
			<< "existing option, or 0 to exit. -->";
		flag = 1;
	}

	return flag;
}