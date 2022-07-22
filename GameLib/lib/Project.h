#pragma once
#include "Window.h"

class Project
{
public:
	~Project();
	void run(Window& window);
	void stop();
	//void addWindow(Window& window);
};