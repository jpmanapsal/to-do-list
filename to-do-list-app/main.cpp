#include "Menu.h"
#include "SelectionObject.h"
#include "SelectionFunctions.h"

#include <vector>

int main()
{
	// Main Menu
	SelectionObject selection_quit{"Quit", quit};
	std::vector<SelectionObject> main_selection{selection_quit};
	Menu main{"Main", main_selection};

	main.display_menu();

	return 0;
}