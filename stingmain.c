/*****************************************************************************
 * Copyright (C) Ankur singh as.ankursingh3.1@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include<stdio.h>
#include"stringheader.h"
int main() {
	char str1[] = "Jerry", str2[] = "Ferry", str3[128], *a, *b, c, d; 
	int i, j, k,l;
	double sn, cs, tn, sqt, pwr;
	i = mstrlen(str1);
	printf("%d\n", i);
	mstrlwr(str1);
	printf("%s\n", str1);
//	printf("%s\n", str1);
	mstrupr(str1);
	printf("%s\n", str1);
	mstrrev(str1);
	printf("%s\n", str1);
	mstrcpy(str1, str3);
	printf("%s\n", str3);
	mstrncpy(str2, str3, 3);
	printf("%s\n", str3);
	mstrcat(str1, str2);
	printf("%s\n", str1);	
	i = mstrcmp(str2, str3);
	printf("%d\n", i);
	i = mstrncmp(str2, str3, 2);
	printf("%s\n", str2);	
	printf("%s\n", str3);	
	printf("%d\n", i);
	j = mstrrchr(str3,'r');
	printf("%d\n", j);
	k = mstrrchr(str3, 'c');
	printf("%d\n", k);
	l = mstrstr(str2, "er");
	printf("%d\n", l);
	sn = sine(30);
	cs = cose(60);
	tn = tang(30);
	sqt = sqrrt(25);
	pwr = power(3, 2);
	printf("sine = %lf\n", sn);
	printf("cose = %lf\n", cs);
	printf("tang = %lf\n", tn);
	printf(" sqrt = %lf\n", sqt);
	printf("power = %lf\n", pwr);
	return 0;
}
