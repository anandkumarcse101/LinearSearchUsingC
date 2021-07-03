#include<stdio.h>
#include<conio.h>
int linearSearch(int *p,int size,int target)
{
  int index=0;
  for(index;index<size;index++)
  {
    if(p[index]==target)
    {
        return index;
    }
  }
  return -1;
}
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(A)/sizeof(A[0]);
    int target=16;
    int result=linearSearch(A,size,target);
    if(result==-1)
    {
    printf("Sorry the target value is not present in the  given array");
    }
    else{
      printf("the target values present at index =%d",result);
    }
    return 0;
}