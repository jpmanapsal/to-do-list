#pragma once

#include "SelectionObject.h"
#include <string>
#include <vector>
#include <iostream>

class Menu
{
private:
	std::string name;
	std::vector<SelectionObject> selection;
public:
	Menu(std::string, std::vector<SelectionObject>);
	~Menu();

	void display_menu();
};

