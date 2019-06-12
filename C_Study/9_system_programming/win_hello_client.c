// Socket Client
// �Ʒ� ���̺귯���� ������Ʈ lib�� �߰��Ǿ�� ��
// Ws2_32.lib;Mswsock.lib;AdvApi32.lib 

#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <string.h>
#pragma warning (disable:4996)
void ErrorHandling(char* message);

int main(int argc, char* argv[])
{
	WSADATA wsaData;
	SOCKET hSocket;
	SOCKADDR_IN servAddr;

	char message[30];
	int strLen;
	if(argc!=3)
	{
		printf("Usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	}

	puts("ó�� �����ϴ� �ý��� ���α׷���!");
	puts("���� Ŭ���̾�Ʈ ver1.0\n");
	printf("���� ���� IP: %s, ���� ��Ʈ: %s", argv[1], argv[2]);

	if(WSAStartup(MAKEWORD(2, 2), &wsaData) !=0)
		ErrorHandling("WSAStartup() errer!");

	hSocket=socket(PF_INET, SOCK_STREAM, 0);
	if(hSocket==INVALID_SOCKET)
		ErrorHandling("hSocketet() error!");

	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family=AF_INET;
	servAddr.sin_addr.s_addr=inet_addr(argv[1]);
	servAddr.sin_port=htons(atoi(argv[2]));

	if(connect(hSocket, (SOCKADDR*)&servAddr, sizeof(servAddr))==SOCKET_ERROR)
		ErrorHandling("connect() error!");

	puts("Connection �Ϸ�!");
	puts("���� ������ ����� �����մϴ�.");
	puts("����� �����Ϸ��� bye�� �Է��ϼ���.");

	while (1) {
		printf("Client] ");
		gets(message);
		send(hSocket, message, sizeof(message), 0);
		strLen = recv(hSocket, message, sizeof(message) - 1, 0);
		if (strLen == -1)
			ErrorHandling("read() error!");
		printf("\nMessage from server: %s \n", message);
		if (!strcmp(message, "bye")) {
			break;
		}
	}
	closesocket(hSocket);
	WSACleanup();
	return 0;
}

void ErrorHandling(char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}