#pragma once
#include "SelectionObject.h"
#include "SelectionFunctions.h"
#include <vector>

namespace TaskManager 
{
	void add_tasks(SelectionObject);
	void remove_tasks(SelectionObject);
	std::vector<SelectionObject> get_menu_set();


	SelectionObject selection_main_menu{"Return To Main Menu", display_main_menu};

	std::vector<SelectionObject> tasks{};
	std::vector<SelectionObject> menu_endings{selection_main_menu};

	void add_task(SelectionObject task)
	{
		tasks.push_back(task);
	}

	void remove_task(SelectionObject task)
	{
		for (int i{0}; i < tasks.size(); i++)
		{
			if (tasks.at(i).get_name() == task.get_name())
			{
				tasks.erase(tasks.begin() + i);
			}
		}
	}

	std::vector<SelectionObject> get_menu_set()
	{
		std::vector<SelectionObject> temp{};

		for (SelectionObject i : tasks)
			temp.push_back(i);

		for (SelectionObject i : menu_endings)
			temp.push_back(i);

		return temp;
	}
}