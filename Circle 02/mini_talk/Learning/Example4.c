/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:40:41 by hle               #+#    #+#             */
/*   Updated: 2023/09/18 14:40:41 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<signal.h>

void sig_handler(int signum){
  printf("Inside handler function\n");
}

int main(){
  signal(SIGUSR1,sig_handler); // Register signal handler
  printf("Inside main function\n");
  raise(SIGUSR1);
  printf("Inside main function\n");
  return 0;
}


