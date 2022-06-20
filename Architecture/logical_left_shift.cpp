/* C++ Program to demonstrate use of left shift
operator */
#include<stdio.h>
#include<iostream>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;
	unsigned char c = a>>1;
	int cd=10;
	printf("cd<<1 = %d\n", cd>>1);

	// The result is 00001010
	printf("a<<1 = %d\n", a<<1);
	printf("c>>1 = %d\n", c);

	// The result is 00010010
	printf("b<<1 = %d\n", b<<1);
	return 0;
}
