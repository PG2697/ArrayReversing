#include <stdio.h>

int main(void) {
	
	//taking array size and the elements as the input
	
	int len,i,a[10],b[10];
	printf("\n Enter number of elements to be in the array (less than 10) :");
	scanf("%d",&len);
	printf("\n Enter the elements:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
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
