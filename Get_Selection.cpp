//******************************************************************************
#include "Menu_Sub_Menu_Template.h"

int get_Selection(int selection, int selection_Limit)
{
	int flag = 0;
	do {
		flag = 0;
		cin >> selection;
		cout << endl;
		flag = selection_Error_Check(selection, selection_Limit, flag);
	} while (flag == 1);
	return selection;
}
