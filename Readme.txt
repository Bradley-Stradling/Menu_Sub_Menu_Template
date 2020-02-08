This is a Menu --> Sub menu template for a console application in C++

Menu looping should be fully functional as is. 

1 Header - all functions protoypes declared here. All definitions reside
in their own source files.
1 Main - contains an intro and loop for main menu call.
1 Main menu - # of options can be added by
1+ sub menu's - whenever a sub menu functions is called be sure to set
selection="functioncall"

"selection" is the user input variable. Error handling prevents input
below 0, and above the max options by a local variable "selection_Limit"
contained within each menu or sub menu function. Both are passed to
the input error selection check by the get selection function.

Complied and written in Microsoft Visual Studio Community 2019
Version 16.4.4

This code is written as open source as is. See License.

-Bradley Stradling
