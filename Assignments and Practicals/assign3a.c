/*
Define a structure data type called time_struct containing 3 members int hour, int minute 
and int second. Write functions that accept the structure to perform the following 
operations:
1. Input new time
2. Display the time
3. Update the time such that the function accepts the time_struct and increments the time by 
one second.(If the increment results in 60 seconds, the then second member is set to 0 and 
the minute is incremented by 1. Then, if the result is 60 minutes, the minute member is set 
to 0 and the hour member is incremented by 1. Finally when the hour becomes 24, it is set 
to zero.) 
*/

#include<stdio.h>
#include<time.h>

struct time
{
	int hour;
	int minute;
	int sec;
};

int main()
{
	struct time t;
	printf(" Enter hh:mm:ss :");
	scanf(" %d %d %d",&t.hour,&t.minute,&t.sec);
	
	if (t.hour>= 0 && t.hour<24 && t.minute>=0 && t.minute<60 && t.sec>=0 && t.sec<60) 
	{
		t.sec++;
	} else
	{
		printf(" Invalid input");
	}

	if (t.sec == 60)
	{
		t.sec = 00;
		t.minute++;
	}
	if (t.minute == 60)
	{
		t.minute = 00;
		t.hour++;
	}
	if (t.hour == 24)
	{
		t.hour = 00;
	}
	printf(" %d:%d:%d",t.hour,t.minute,t.sec);
	return 0;
}
