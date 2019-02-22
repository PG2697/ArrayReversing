#include <stdio.h>

int main(void) {
	
	//fixed array size and its elements
  int len=0,i,a[]={5,4,3,2,1};
	
	//storing the array in another array for further operations on the original array
	for(i=0;i<len;i++)
	{
		b[i]=a[i];
	}
	
	//reversing the array
	for(i=0;i<len;i++)
	{
		a[i]=b[len-1-i];
	}
	
	//displaying the original and reversed array
	printf("\n The original array is:");
	for(i=0;i<len;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n The reversed array is:");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
