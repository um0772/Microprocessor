//Pjt17
#include <stdio.h>
#include <time.h>
#include "MyCGI_web.h"

int main()
{
	char	data[64];

	time_t t = time(NULL);
	char* tp = ctime(&t);

	//sprintf_s(data, 64, "Current temperature is 10 degree.");
	MyCGI_web(tp);

	return 0;
}
