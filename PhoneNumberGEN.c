#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

int main()
{
	system("clear");
	int num;
	printf("Choose option you would like:\n[1] Generate numbers\n[2] Credits\n[3] Exit\n>> ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			GenerateNum();
			break;
		case 2:
			credits();
		case 3:
			exit(0);
			break;
		default:
			printf("Try again!\n");
			break;
	}
	return 0;
}

void credits(){
	printf("Made by: \nDiscord:Mr dolphin#0777\nGithub: Mr-Dolphin0777");
}

int GenerateNum(){
	system("clear");
	system("cls");
	long long n;
	printf("What is your prefix >> ");
	scanf("%lld",&n);
	long gen;
	printf("How many results would you like to Gen >> ");
	scanf("%ld",&gen);
	time_t tim;
	srand((unsigned) time(&tim));
	if(countDigit(n) == 1)
	{
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %99999999;
			sprintf(str ,"%d",num);
			if(strlen(str) == 7)
			{
				printf("447%lld%s00\n",n,str);
			}
			else if(strlen(str) == 6)
			{
				printf("447%lld%s00\n",n,str);
			}
			else if(strlen(str) == 5)
			{
				printf("447%lld%s000\n",n,str);
			}
			else if(strlen(str) == 4)
			{
				printf("447%lld%s0000\n",n,str);
			}
			else if(strlen(str) == 3)
			{
				printf("447%lld%s00000\n",n,str);
			}
			else if(strlen(str) == 2)
			{
				printf("447%lld%s000000\n",n,str);
			}
			else if(strlen(str) == 1)
			{
				printf("447%lld%s0000000\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	if(countDigit(n) == 2){
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %9999999;
			sprintf(str ,"%d",num);
			if(strlen(str) == 6)
			{
				printf("447%lld%s0\n",n,str);
			}
			else if(strlen(str) == 5)
			{
				printf("447%lld%s00\n",n,str);
			}
			else if(strlen(str) == 4)
			{
				printf("447%lld%s000\n",n,str);
			}
			else if(strlen(str) == 3)
			{
				printf("447%lld%s000\n",n,str);
			}
			else if(strlen(str) == 2)
			{
				printf("447%lld%s0000\n",n,str);
			}
			else if(strlen(str) == 1)
			{
				printf("447%lld%s00000\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	if(countDigit(n) == 3){
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %999999;
			sprintf(str ,"%d",num);
			if(strlen(str) == 5)
			{
				printf("447%lld%s0\n",n,str);
			}
			else if(strlen(str) == 4)
			{
				printf("447%lld%s00\n",n,str);
			}
			else if(strlen(str) == 3)
			{
				printf("447%lld%s000\n",n,str);
			}
			else if(strlen(str) == 2)
			{
				printf("447%lld%s000\n",n,str);
			}
			else if(strlen(str) == 1)
			{
				printf("447%lld%s0000\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	if(countDigit(n) == 4){
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %99999;
			sprintf(str ,"%d",num);
			if(strlen(str) == 4)
			{
				printf("447%lld%s0\n",n,str);
			}
			else if(strlen(str) == 3)
			{
				printf("447%lld%s000\n",n,str);
			}
			else if(strlen(str) == 2)
			{
				printf("447%lld%s0000\n",n,str);
			}
			else if(strlen(str) == 1)
			{
				printf("447%lld%s0000\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	if(countDigit(n) == 5){
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %9999;
			sprintf(str ,"%d",num);
			if(strlen(str) == 3)
			{
				printf("447%lld%s0\n",n,str);
			}
			else if(strlen(str) == 2)
			{
				printf("447%lld%s0000\n",n,str);
			}
			else if(strlen(str) == 1)
			{
				printf("447%lld%s0000\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	if(countDigit(n) == 6){
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %999;
			sprintf(str ,"%d",num);
			if(strlen(str) == 2)
			{
				printf("447%lld%s0\n",n,str);
			}
			if(strlen(str) == 1)
			{
				printf("447%lld%s0\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	if(countDigit(n) == 7){
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %99;
			sprintf(str ,"%d",num);
			if(strlen(str) == 1)
			{
				printf("447%lld%s0\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	if(countDigit(n) == 8){
		for(int i = 0; i < gen; i++)
		{
			char str[255];
			int num = rand() %9;
			sprintf(str ,"%d",num);
			if(strlen(str) == 0)
			{
				printf("447%lld%s0\n",n,str);
			}
			else{
				printf("447%lld%s\n",n,str);
			}
		}
	}
	return 0;
}
int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
