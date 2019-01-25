#include<stdio.h>
#include <windows.h>
int main() {
	int a[10002];
	int i = 0;
	double run_time;
	_LARGE_INTEGER time_start;	//开始时�?
	_LARGE_INTEGER time_over;	//结束时间
	double dqFreq;		//计时器频�?
	LARGE_INTEGER f;	//计时器频�?
	QueryPerformanceFrequency(&f);
	dqFreq=(double)f.QuadPart;
	QueryPerformanceCounter(&time_start);	//计时开�?
	for( i = 1; i <= 10000; i++)a[i]=i;	//要计时的程序
	QueryPerformanceCounter(&time_over);	//计时结束
	run_time=1000000*(time_over.QuadPart-time_start.QuadPart)/dqFreq;
	//乘以1000000把单位由秒化为微秒，精度�?1000 000/（cpu主频）微�?
	printf("\nrun_time�?%fus\n",run_time);
	return 0;
}
