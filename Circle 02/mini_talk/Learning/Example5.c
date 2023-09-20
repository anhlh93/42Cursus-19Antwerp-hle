/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:55:44 by hle               #+#    #+#             */
/*   Updated: 2023/09/18 15:55:47 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>
#include<signal.h>
void sig_handler(int signum){
  printf("Inside handler function\n");
}

int main(){
  pid_t pid;
  signal(SIGUSR1,sig_handler); // Register signal handler
  printf("Inside main function\n");
  pid=getpid();      //Process ID of itself
  kill(pid,SIGUSR1);        // Send SIGUSR1 to itself
  printf("Inside main function\n");
  return 0;
}


