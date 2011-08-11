//
//  main.c
//  practice01
//
//  Created by Masato Fujii on 11/06/25.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main(void)
{
	char str[16];
	char str1[12] = "DRAGON";
	char str2[] = "QUEST";
	int i = 3;
	sprintf(str,"%s%s%d\n",str1,str2,i);
	printf(str);
	return 0;
}