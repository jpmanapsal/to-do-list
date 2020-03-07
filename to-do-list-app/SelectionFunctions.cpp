#include "TaskManager.h"
#include "SelectionFunctions.h"
#include "SelectionObject.h"
#include "Menu.h"


void quit()
{
	return;
}

void view_tasks()
{
	std::vector<SelectionObject> tasks{TaskManager::get_menu_set()};
	Menu task_menu{"Tasks", tasks};
	task_menu.display_menu();
}

void display_task()
{
	
}

void add_task()
{
	std::string in{};
	
	std::cout << "Enter the name of your task.\n";
	std::cin >> in;

	SelectionObject task{in, display_task};
	TaskManager::add_task(task);
}

void display_main_menu()
{
	SelectionObject selection_view_tasks{ "View Tasks", view_tasks };
	SelectionObject selection_quit{ "Quit", quit };
	std::vector<SelectionObject> main_selection{ selection_view_tasks, selection_quit };
	Menu menu_main{ "Main", main_selection };

	menu_main.display_menu();
}