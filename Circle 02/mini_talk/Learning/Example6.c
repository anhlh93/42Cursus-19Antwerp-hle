/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:58:16 by hle               #+#    #+#             */
/*   Updated: 2023/09/18 15:58:16 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

void sig_handler_parent(int signum){
  printf("Parent : Received a response signal from child \n");
    printf("12\n");
}

void sig_handler_child(int signum){
  printf("Child : Received a signal from parent \n");
  printf("13\n");
  sleep(1);
  printf("14\n");
  kill(getppid(),SIGUSR1);
  printf("15\n");
}

int main(){
  pid_t pid;
  int status;
  int i = 0;

  printf("0\n");
  pid=fork();
  if((pid)<0){
    printf("Fork Failed\n");
    printf("16\n");
    exit(1);
  }
  /* Child Process */
  else if(pid==0){

    printf("Entering Child %i\n", pid);
    while (i < 1000000000)
        i++;
    signal(SIGUSR1,sig_handler_child); // Register signal handler
    printf("Child: waiting for signal\n");
    printf("3\n");
    pause();
    printf("4\n");
  }
  /* Parent Process */
  else{
    printf("Entering parent\n");
    signal(SIGUSR1,sig_handler_parent); // Register signal handler
    // printf("6\n");
    sleep(5);
    // waitpid(pid, &status, 0);
    printf("7\n");
    printf("Parent: sending signal to Child\n");
    printf("8\n");
    printf("%i\n",pid);
    kill(pid,SIGUSR1);
    printf("signal sent by parent\n");
    sleep(5);
    printf("9\n");
    printf("Parent: waiting for response\n");
    printf("10\n");
    // pause();
    printf("11\n");
    exit(1);
  }
  return 0;
}


