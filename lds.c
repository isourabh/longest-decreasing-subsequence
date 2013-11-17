#include<stdio.h>
#define LEN 10
main()
{
  int data[]={15,2,10,16,18,8,6,9,2,14};
  //int data[]={1,2,3,4,5,6,7,8,9,10};
  int temp[10]={0};
  int point[10];
  int i,j,max=-1,total=0;
  temp[0]=1;
  for(i=1;i<10;i++)
    {
      max=0;
      temp[i]=0;
      point[i]=-1;
      for(j=0;j<i;j++)
	{
	  if(data[j]>data[i] && temp[j]>max)
	    {
	      max=temp[j];
	      point[i]=j;
	    }
	}
	temp[i]=max+1;
      if(temp[i]>total)
	{
	  total=temp[i];
	}
    }
  for(i=0;i<10;i++)
    printf("%d ",temp[i]);
  printf("\n");
  for(i=0;i<10;i++)
    printf("%d ",point[i]);
  printf("\n");
  printf("%d \n",total);
}
