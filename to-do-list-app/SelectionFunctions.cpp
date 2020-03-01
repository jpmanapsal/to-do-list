#include "SelectionFunctions.h"
#include "SelectionObject.h"
#include "Menu.h"
#include <vector>

void quit()
{
	std::cout << "GAIYHDOA";
	return;
}

void view_tasks()
{
	SelectionObject selection_example_task{"Example Task", display_task};
	std::vector<SelectionObject> tasks{selection_example_task};
	Menu task_menu{"Tasks", tasks};

	task_menu.display_menu();
}

void display_task()
{

}