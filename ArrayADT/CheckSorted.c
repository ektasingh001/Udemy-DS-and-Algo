//Checking if Array is Sorted
#include<stdio.h>
#include<stdlib.h>
struct Array
{
int A[10];
int size;
int length;
};
void Display(struct Array arr)
{
int i;
printf("\nElements are\n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
void insertsort(struct Array *arr, int x){
int i=arr->length-1;
if(arr->length==arr->size)
return;
while(i>=0 && arr->A[i]>x)
{arr->A[i+1]=arr->A[i];
i--;}
arr->A[i+1]=x;
arr->length++;}
int isSorted(struct Array arr)
{
int i;
for(i=0;i<arr.length-1;i++)
{
if(arr.A[i]>arr.A[i+1])
return 0;
}
return 1;
}
void rearrange(struct Array *arr){
//For Negative numbers
//All negatives on one side, positives on the other.
int i,j;
i=0;
j=arr->length-1;
while(i<j){
while(arr->A[i]<0){i++;}
while(arr->A[j]>=0){j--;}
if(i<j)
{swap(&arr->A[i],&arr->A[j]);}
}}
int main()
{
struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
struct Array arr2={{2,-3,19,16,-18,21,28,-32,-35},10,9};
printf("%d",isSorted(arr1));
Display(arr1);
insertsort(&arr1,12);
Display(arr1);
rearrange(&arr2);
Display(arr2);
return 0;
}