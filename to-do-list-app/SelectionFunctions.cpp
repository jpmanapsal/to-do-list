#include "SelectionFunctions.h"
#include "SelectionObject.h"
#include "Menu.h"

void quit()
{
	return;
}

void view_tasks()
{
	SelectionObject selection_example_task{"Example Task", display_task};
	std::vector <SelectionObject> task_selection{ selection_example_task };
	Menu task_menu{ "Tasks", task_selection };

	task_menu.display_menu();
}

void display_task()
{

}