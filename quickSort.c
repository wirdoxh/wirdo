#include<stdio.h>
#include<stdlib.h>
void quickSort(int a[],int left,int right)
{
	int temp,t,i,j;
	temp=a[left];
	i=left;
	j=right;
	if(left>right)
		return ;
	while(i!=j){
	while(a[j]>=temp&&i<j)
		j--;
	while(a[i]<=temp&&i<j)
		i++;
	if(i<j){
		t=a[j];
		a[j]=a[i];	
		a[i]=t;}
	}
	a[left]=a[i];
	a[i]=temp;
	quickSort(a,left,i-1);	
	quickSort(a,i+1,right);
}
void main(){
	int n,a[64];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quickSort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
