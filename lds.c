#include<stdio.h>
#define LEN 10
main()
{
  int data[]={15,2,10,16,18,8,6,9,2,14};
  // int data[]={1,2,3,4,5,6,7,8,9,10};
  int temp[LEN]={0};
  int point[LEN],sub[LEN];
  int i,j,max=-1,total=0;
  temp[0]=1;
  point[0]=-1;
  for(i=1;i<LEN;i++)
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
  /*for(i=0;i<LEN;i++)
    printf("%d ",temp[i]);
  printf("\n");
  for(i=0;i<LEN;i++)
    printf("%d ",point[i]);
    printf("\n");*/
  printf("length of the longest decreasing subsequence is %d \n",total);
  j=total;
  for(i=LEN;i>=0;)
    {
      if(temp[i]==total)
	{
	  sub[total]=data[i];
	  i=point[i];
	  total--;
	}
      else
	i--;
    }
  for(i=1;i<=j;i++)
    printf("%d ",sub[i]);
  printf("\nprinted the longest decreasing subsequence \n");
}
