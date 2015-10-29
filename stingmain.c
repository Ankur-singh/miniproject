#include<stdio.h>
#include"stringheader.h"
int main() {
	char s[128] = "Jerry", t[128] = "Ferry", u[128], *j, *k, *l, *m;
	int x, i; 
	//i = mstrlen(s);
	k = mstrrev(s);
	printf("%s\n", k);
/*	j = mstrlwr(s);
	//k = mstrupr(s);
	l = mstrcpy(s, u);
	//m = mstrcat(s, t);
	x = mstrcmp(s, t);
	printf("%d\n", x);
	printf("%s\n", j);
	*/
	return 0;
}

