#pragma once
class FileUtils
{
public:
	FileUtils();
	~FileUtils();
	char readConfigSwitch();
	char readConfigExit();
	void writeConfig(char keySwitch, char keyExit);
};
