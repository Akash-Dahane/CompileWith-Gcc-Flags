#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
int main(int args, char* argv[]){
	char* arguments[12];
	//printf("%s\t %s\n",argv[0],argv[1]); 
	arguments[0]="g++";
	arguments[1]="-std=c++11";
	arguments[2]="-Wall";
	arguments[3]="-Wextra";
	arguments[4]="-pedantic";
	arguments[5]="-Wshadow";
	arguments[6]="-fsanitize=address";
	arguments[7]="-fsanitize=undefined";
	arguments[8]="-fstack-protector";
	arguments[9]="-O2";
	if(args==2){
		arguments[10]=argv[1];
		arguments[11]=(char*)NULL;
		if(execvp(arguments[0],arguments)==-1){
                	perror("execv failed!");
                	exit(1);
        	}

	}else{
		printf("->Only one argument(cpp file) allowed.\n->Requtired syntax: ./compile program.cpp\n");
	}
	return 0;
}

