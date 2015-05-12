#include <Windows.h>
#include <winsock2.h>
#include <iostream>

#pragma comment(lib,"Ws2_32.lib")

using namespace std;

int main()
{
	WSAData wsdata;
	int res=0;

	res = WSAStartup(MAKEWORD(2, 2), &wsdata);
	if (res != 0)
	{

		printf("Startup failed:%d\n", &res);
		return 1;
	}

	return 0;
}