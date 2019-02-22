//============================================================================
// Name        : discord-challenge-20.cpp
// Author      : Perry Harrington
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
CHALLENGE #20 - BAR CHART GOLF Write a program that takes up to 10 integers >= 0 on stdin, and displays a bar-chart on stdout.
The chart should be no more than 10 characters high, which reflects the largest number. Bars should be rounded up.

Example Input: 8 4 12 6

Example Output:

|     #
|     #
|     #
| #   #
| #   #
| #   # #
| # # # #
| # # # #
| # # # #
| # # # #
+========

Rules:
1) Must compile and run in ideone.com
2) Full golfing rules apply - your source should contain as few bytes as possible
3) All languages capable of running in ideone accepted
4) Challenge Winner Roles for lowest scoring solution per language
*/

#import<iostream>
int n[10],*i,k,l;
auto c=putchar;
int main() {
	for(i=n;std::cin>>l;*i++=l*10)k=k<l?l:k;
	for(l=10;l--&&c('|');c(10))for(int j:n)c(32),c(j/k+(j%k>0)>l?35:32);
	for(c(43);i>n;i--)c(61),c(61);
}
/*
#import<iostream>
auto c=putchar;
int n[10],*i,*j,k,l;
int main() {
	for(i=n;std::cin>>l;*i++=l*10)k=k<l?l:k;
	for(l=10,j=i;l--;c(10))for(i=n,c('|');i<j;i++)c(32),c(*i/k+(*i%k!=0)>l?35:32);
	for(c(43);i>n;i--)c(61),c(61);
}
*/
