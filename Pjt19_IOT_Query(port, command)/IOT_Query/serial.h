#pragma once
HANDLE	openPort(char* port, char* msg);

DWORD	writeCommand(HANDLE hPort, char* cmd, char* msg);
DWORD	readData(HANDLE hPort, int N_HEAD, int N_TAIL, char* data, char* msg);
