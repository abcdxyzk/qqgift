#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int i,j,k,l;
	FILE *fpin, *fpout;
	int N = 25; // 一天内每小时送一次
	for (i=0;i<N;i++) {
		printf("%d\n", (int)time(NULL));
		system("firefox a.html"); // 先在火狐上登录好，直接用火狐打开。这样就不用自己发cookie
		fflush(stdout);
		if (i < N-1) sleep(3600);
	}
	return 0;
}
