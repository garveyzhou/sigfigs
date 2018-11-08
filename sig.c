#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void sighandler(int signo){
  if(signo == SIGINT){
    printf("Interruption from keyboard \n");
    exit();
  }
  if(signo == SIGUSR){
    printf("Parent PID: %d \n",getppid());
  }
}

