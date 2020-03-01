#include "Menu.h"
#include "SelectionObject.h"
#include "SelectionFunctions.h"

#include <vector>

int main()
{
	// Main Menu
	SelectionObject selection_view_tasks{"View Tasks", view_tasks};
	SelectionObject selection_quit{"Quit", quit};
	std::vector<SelectionObject> main_selection{selection_view_tasks, selection_quit};
	Menu menu_main{"Main", main_selection};

	menu_main.display_menu();

	return 0;
}