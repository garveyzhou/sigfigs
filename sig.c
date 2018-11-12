#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void sighandler(int signo){
  if(signo == SIGINT){
    printf("Interruption from keyboard \n");
    exit(0);
  }
  if(signo == SIGUSR1){
    printf("Parent PID: %d \n",getppid());
  }
}

int main(){
	signal(SIGINT, sighandler);
	signal(SIGUSR1, sighandler);
	while(1){
		printf("Hello! My PID is %d\n", getpid());
		sleep(1);
	        }
}

