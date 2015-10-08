#include<stdio.h>
#include"stringheader.h"
int mstrlen(char *s) {
	int i = 0;
	while(*s != 0) {
		s++;
		i++;
	}
	return i;
}
char *mstrlwr(char *s) {
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
	return s;
}
char *mstrupr(char *s){
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
	return s;
}
char *mstrcpy(char *s, char *t){
	char *p, *q;
	p = s;	
	q = t;
	while(*p != '\0'){
		*q = *p;
		q++;
		p++;
	}
	*q = '\0';
	return t; 
}
char *mstrcat(char *s, char *t){
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
	return s;
}
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
char *mstrchr(char *s, char a){
}
char *mstrrchr(char *s, char a){
}
char *mstrstr(char *s, char *t){
}
char *mstrrev(char *s){
}
char *mstrtok(char *s, char *delimiters){
}
