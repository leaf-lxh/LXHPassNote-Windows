#include "sendData.h"
#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

size_t SendData::SendRequest(std::string & data, std::string & receiveBuffer)
{
	
	WSADATA wsaInfo;
	WSAStartup(MAKEWORD(2, 2), &wsaInfo);

	SOCKET socketFD = socket(AF_INET, SOCK_STREAM, 0);
	sockaddr_in server_addr = {};
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(30000);
	inet_pton(AF_INET, "118.25.38.253", &server_addr.sin_addr.S_un.S_addr);

	if (connect(socketFD, (sockaddr*)&server_addr, sizeof(server_addr)))
	{
		OutputDebugStringA("connectÊ§°Ü\n");
		this->lastErrorCode = WSAGetLastError();
		closesocket(socketFD);
		WSACleanup();
		return 0;
	}

	size_t remainingLength = data.length();
	int lengthToSend = 0;
	int sendedLength = 0;
	while (remainingLength > 0)
	{
		if (remainingLength > 4096)
		{
			lengthToSend = 4096;
		}
		else
		{
			lengthToSend = remainingLength;
		}
		sendedLength = send(socketFD, data.substr(data.length() - remainingLength, lengthToSend).c_str(), lengthToSend, 0);
		
		if (sendedLength < 0)
		{
			OutputDebugStringA("sendÊ§°Ü\n");
			this->lastErrorCode = WSAGetLastError();
			closesocket(socketFD);
			WSACleanup();
			return 0;
		}
		remainingLength -= sendedLength;
	}
	shutdown(socketFD, SD_SEND);

	receiveBuffer = "";
	char buffer[4096];
	while (recv(socketFD, buffer, 4096, 0) > 0)
	{
		receiveBuffer += buffer;
		
	}

	this->lastErrorCode = WSAGetLastError();
	closesocket(socketFD);
	WSACleanup();
	return receiveBuffer.length();
}



