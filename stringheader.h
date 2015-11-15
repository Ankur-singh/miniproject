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

void mstrlwr(char *s); /*takes a char string and turn each character into lower case */
void mstrupr(char *s); /*takes a char string and turn each character into upper case */ 
void mstrrev(char *s); /*takes a char string and reverses the order of its character */
void mstrcpy(char *s, char *t); /* takes two char strings; source and target. And copies the contents of source to target string */
void mstrncpy(char *s, char *t, int n); /* takes two char strings; source and target. And copies the first "n" characters of source to target string */
void mstrcat(char *s, char *t); /* takes two char strings; source and target. And appends target string at the end of source string */
void mstrncat(char *s, char *t, int n);/* takes two char strings; source and target. And copies the first "n" characters of source to target string */
int mstrcmp(char *s, char *t);/* takes two char strings; source and target. And compare the contents of source and target string */
int mstrncmp(char *s, char *t, int n); /* takes two char strings; source and target. And compare the first "n" characters of source and target string */
int mstrchr(char *s, char a);/* takes a char string and find for char "a" in the string (starting from the begining) */
int mstrrchr(char *s, char a); /* takes a char string and find for char "a" in the string (starting from the end) */
int mstrlen(char *s); /*takes a char string and returns its lenght*/
int mstrstr(char *s, char *t); /*takes a char string input "s" and and search for sub string "t" in it */
double cose(int input); /*takes an integer value, treat is as degree and fine its cosine*/
double sine(int input); /*takes an integer value, treat is as degree and fine its sine*/
double tang(int input); /*takes an integer value, treat is as degree and fine its tangent*/
float sqrrt(float num); /*takes an integer value, and find its square root*/
float power(int a, int b); /*takes two integer, first is base and 2nd is power i.e x^y */ 
