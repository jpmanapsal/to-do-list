#pragma once
#include <string>

class SelectionObject
{
private:
	std::string name;
	void(*function)();
public:
	SelectionObject(std::string, void(*)());
	~SelectionObject();

	std::string get_name();
	void run_function();
};

