#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
//#include <time.h>
#include <unistd.h>

#define _DEBUG

void Log(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	char buf[2048];
	bzero(buf, sizeof(buf));
	vsprintf(buf, fmt, ap);
#ifdef _DEBUG
	printf("%s\n", buf);
#endif
	va_end(ap);
}

int main()
{
	Log("================= start  ==================\n");
	unsigned int i=0;
	while(1)
	{
		Log("i=%u", i);
		i++;
		::sleep(1.0);
	}
	Log("================ end ==================\n");

	return 0;
}

