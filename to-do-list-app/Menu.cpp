#include "Menu.h"

Menu::Menu(std::string n, std::vector<SelectionObject> s)
	: name{n}, selection{s}
{
}

Menu::~Menu()
{
}

void Menu::display_menu()
{
	// Display
	std::cout << name << std::endl;
	for (size_t i{0}; i < selection.size(); i++)
		std::cout << "   [" << i << "] - " << selection.at(i).get_name() << std::endl;
	std::cout << "> ";

	// Input
	int in{0};
	std::cin >> in;
	if (in >= 0 && in < selection.size())
		selection.at(in).run_function();
}