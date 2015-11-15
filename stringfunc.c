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
//#include<ncurses.h>
#include"stringheader.h"
char arr[128], *q;
/*********************************************************
		string lenght code
/********************************************************/
int mstrlen(char *s) {
	int i = 0;
	while(*s != 0) {
		s++;
		i++;
	}
	return i;
}
/*********************************************************
		lowercase code
/********************************************************/
void mstrlwr(char *s) {
	char *p;
	int i = 0, x;
	p = s;
	while(*p != '\0') {
		i = *p;
		x = (i >= 65 && i <= 90? 1 : 0);
		if(x == 1){
			i = i + 32;
			*p = i;
		}
		p++;
	}
	//return s;
}
/*********************************************************
		uppercase code
/********************************************************/
void mstrupr(char *s){
	char *p;
	int i = 0, x;
	p = s;
	while(*p != '\0') {
		i = *p;
		x = (i >= 97 && i <= 122 ? 1 : 0);
		if(x == 1){
			i = i - 32;
			*p = i;
		}
		p++;
	}
	//return s;
}
/*********************************************************
		string reverse code
/********************************************************/
void mstrrev(char *s){
	int i = 0, l, tmp;
	l = mstrlen(s);
	for(i = 0; i < (l / 2); i++) {
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
	/*while(j < l){
		arr[j] = s[l-1-j];
		j++;
	}
	return arr;*/
}
/*********************************************************
		string copy code
/********************************************************/
void mstrcpy(char *s, char *t){
	char *p, *q;
	p = s;	
	q = t;
	while(*p != '\0'){
		*q = *p;
		q++;
		p++;
	}
	*q = '\0';
	//return t; 
}
/*********************************************************
		string cat code
/********************************************************/
void mstrcat(char *s, char *t){
	int i;
	char *p;
	p = s;
	i = mstrlen(p);
	p = p + i;
	while(*t != '\0'){
		*p = *t;
		t++;
		p++;
	}
	*p = '\0';
	//return s;
}
/*********************************************************
		string compare code
/********************************************************/
int mstrcmp(char *s, char *t){
	int x, i, j, diff = 0;
	while(diff == 0){
		i = *s;
		j = *t;
		diff = i - j;
		s++;
		t++;
		if(diff == 0 ){
			if(*s == '\0')
				return *t;
			if(*t == '\0')
				return *s;
		}
		else 
			return diff;
	}
}
/*********************************************************
		string copy code (n-bytes)
/********************************************************/
void mstrncpy(char *s, char *t, int n){
	char *p, *q;
	int i = 0;
	p = s;	
	q = t;
	while(i < n){
		*q = *p;
		q++;
		p++;
		i++;
	}
	*q = '\0';
	//return t; 
}
/*********************************************************
		string cat code (n-bytes)
/********************************************************/
void mstrncat(char *s, char *t, int n){
	int i, j = 0;
	char *p;
	p = s;
	i = mstrlen(p);
	p = p + i;
	while(j <= n){
		*p = *t;
		t++;
		p++;
		j++;
	}
	*p = '\0';
	//return s;
}
/*********************************************************
		string compare code (n-bytes)
/********************************************************/
int mstrncmp(char *s, char *t, int n){
	int x, i, j, diff = 0, k = 0;
	while(diff == 0 && k < n){
		i = *s;
		j = *t;
		diff = i - j;
		s++;
		t++;
		k++;
		if(diff == 0 ){
			if(*s == '\0')
				return *t;
			if(*t == '\0')
				return *s;
		}
		else 
			return diff;
	}
	return 0;
}
/*********************************************************
	code to find a char in the string
********************************************************/
int mstrchr(char *s, char a){
	int i = 1;
	char *p;
	p = s;
	while(*p != '\0'){	
		if(*p == a)
			return i;
		p++;
		i++;
	}
	//printf("No such character in the string\n");
	return -1;
}
/*********************************************************
	code to find a char in the string in reverse order
********************************************************/
int mstrrchr(char *s, char a){
	int l, i;
	char *p;	
	p = s;
	l = mstrlen(s);
	i = l;
	p = p - 1 + l;
	while(l-- >= 0){
		if(*p == a)
			return i;
		p--;
		i--;
	}
	
	//printf("No such character in the string\n");
	return -1;
}
/*********************************************************
	code to find a sub-string
/********************************************************/
int mstrstr(char *a, char *b){
	char *p = a, *q = b;
	while(*p != '\0' && *q != '\0'){
		if(*p == *q){
			p++;
			q++;
		}
		else{
			p = p - (q -b) + 1;
			q = b;
		}
	}
	if(*q == '\0')
		return p - (q - b) - a + 1;
	else
		return -1;
}
/*********************************************************
	code to replace a sub-string
/********************************************************/
int stringreplace(char *text, char *orig, char *new){
        int  i, w, l, m , n, count = 0;
        l = mstrlen(text);
        m = mstrlen(orig);
        n = mstrlen(new);
        char *p = text, *q = orig, *r = new;
        while(*p != '\0'){
                if(*p == *q){
                        p++;
                        q++;
                }
                else{
                        p = p - (q -orig) + 1;
                        q = orig;
                }
                if(*q == '\0'){
                        //i = 0;
                        w = p - (q -orig) - text;
                        for(i = l - 1; i >= w + m; i--)
                                text[i + (n-m)] = text[i];
                        for(i = 0; i < n; i++)
                                text[w + i] = new[i];
			count++;
                }
        }
        if(i == 0)
                printf("no match\n");
	return count;
}
/*********************************************************
		cose code
/********************************************************/
double cose(int input) {
	//int input;
	float pi;
	double degree;
	double cosx, powersix, powerfour, powertwo;
	//long int powerseven;
//	long int powerfive;
//	long int powerthree;
//	input = 5;
	//scanf("%d", &input);
	pi=3.142;
	degree= (input*pi)/180;	
	powersix=(degree*degree*degree*degree*degree*degree);
	powerfour=(degree*degree*degree*degree);
	powertwo=(degree*degree);
	cosx = (1 - (powertwo/fact(2)) + (powerfour/fact(4)) - (powersix/fact(6)));
	return cosx;
	//getchar();
}
/*********************************************************
		factorial code
/********************************************************/
int fact(int n) {
	if(n == 0){
		return 1;
	}
	else {
		return (n*fact(n-1));
	}
}
/*********************************************************
		sine code
/********************************************************/
double sine(int input) {
	//int input;
	float pi;
	double degree;
	double sinx, powerseven, powerfive, powerthree;
	//long int powerseven;
//	long int powerfive;
//	long int powerthree;
//	input = 5;
	//scanf("%d", &input);
	pi=3.142;
	degree= (input*pi)/180;	
	powerseven=(degree*degree*degree*degree*degree*degree*degree);
	powerfive=(degree*degree*degree*degree*degree);
	powerthree=(degree*degree*degree);
	sinx = (degree - (powerthree/fact(3)) + (powerfive/fact(5)) - (powerseven/fact(7)));
	//printf("%lf", sinx);
	//getchar();
	return sinx;
}
/*********************************************************
		tan code
/********************************************************/
double tang(int input) {
	int x;
	x = input;
	return (sine(x) / cose(x));
} 
/*********************************************************
		square root code
/********************************************************/
float sqrrt(float num) {
	float i,j;
	//float num;
	j = 0.0001;
	//printf("ENTER ANY NUMBER : \n");
	//scanf("%f", &num);
	for(i = 0; i < num; i = i + j) {
		if((i * i) > num) {
			i = i - j;
	  		break;
	  	}
	 }
	 //printf("%.2f", i);
	 //getch();
	 return i;
}
/*********************************************************
		power code
/********************************************************/
float power(int a, int b){
	int i, index = b,  sign, left, base3_trm;
	float ans = 1.0;
	base3_trm = a * a * a;
	if(index == 0)
		return 1;
	else if(index < 0){
		index = -index;
		sign = -1;
	}
	for(i = 0; i < (index / 3); i++)
		ans = ans * base3_trm;
	if(index % 3 == 1)
		left = a;
	else if(index % 3 == 2)
		left = a * a;
	ans = ans * left;
	if(sign == -1)
		ans = 1.0/ans;
	return ans;
}
