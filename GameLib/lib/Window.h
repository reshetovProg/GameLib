#pragma once
#include "Color.h"

class Window
{
private:
	int height;
	int width;
	bool fullscreen;
	std::string name;
	int framerate;
	bool visible;
	//Color* backgroundColor = nullptr;
	//Workspace* workspace = nullptr;
	//DisplayArea* displayArea = nullptr;
public:
	Window(int width, int height, Color color, std::string name="", int framerate=60);
	void setSize(int width, int height);
	void setName(std::string name);
	void setFullscreen(bool fullscreen);
	void setFramerate(int framerate);
	void setBackground(Color color);
	void setVisible(bool visible);
	int getWidth();
	int getHeight();
	void open();
	void close();
	void minimize();
	bool isOpen();

};