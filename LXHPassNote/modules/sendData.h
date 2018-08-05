#pragma once
#include <string>

class SendData
{
public:
	size_t SendRequest(std::string &data, std::string &receiveBuffer);
	int lastErrorCode;

};