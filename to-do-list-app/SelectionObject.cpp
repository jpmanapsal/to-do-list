#include "SelectionObject.h"
#include <iostream>

SelectionObject::SelectionObject(std::string n, void(*f)())
	: name{n}, function{f}
{

}

SelectionObject::~SelectionObject()
{

}

std::string SelectionObject::get_name()
{
	return name;
}

void SelectionObject::run_function()
{
	function();
}