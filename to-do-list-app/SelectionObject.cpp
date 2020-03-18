#include "SelectionObject.h"

SelectionObject::SelectionObject(std::string name, void(*function)())
	: name{name}, function{function} 
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