#pragma once
#include "SelectionObject.h"
#include "SelectionFunctions.h"
#include <vector>
#include <string>

namespace TaskManager
{
	SelectionObject selection_remove_task{"Remove Task", tm_remove_task};
	SelectionObject selection_main_menu{"Return To Main Menu", display_main_menu};
	SelectionObject selection_add_task{"Add Task", tm_add_task};

	std::vector<SelectionObject> tasks{};

	void add_task(SelectionObject task)
	{
		tasks.push_back(task);
	}

	void remove_task(std::string task_name)
	{
		for (size_t i{0}; i < tasks.size(); i++)
		{
			SelectionObject task{tasks.at(i)};
			if (task.get_name() == selection_remove_task.get_name() || task.get_name() == selection_main_menu.get_name() || task.get_name() == selection_add_task.get_name())
				continue;
			else if (tasks.at(i).get_name() == task_name)
				tasks.erase(tasks.begin() + i);
		}

		display_main_menu();
	}

	std::vector<SelectionObject> get_menu_set()
	{
		std::vector<SelectionObject> temp{};

		for (SelectionObject i : tasks)
			temp.push_back(i);

		temp.push_back(selection_add_task);
		temp.push_back(selection_remove_task);
		temp.push_back(selection_main_menu);

		return temp;
	}
}