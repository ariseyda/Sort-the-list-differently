#include<stdio.h>

//Given a list of integers nums, sort the list in the following way:

/*First number is the maximum
Second number is the minimum
Third number is the 2nd maximum
Fourth number is the 2nd minimum
And so on.

Constraints
n <= 100,000 where n is the length of nums.*/

int main(){
	
	int n,i;
	printf("How many numbers will you enter?:");
	scanf("%d",&n);
	
	int array[n];
	printf("Enter values of array:");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	int k,l;
	for(k=1;k<n;k++){
		for(l=0;l<n-1;l++){
			if(array[k]>array[l]){
				int temp=array[l];
				array[l]=array[k];
				array[k]=temp;
			}
		}
	}
	int array2[n];
	
    int j,a=0;
    for(j=0;j<n;j+=2){
    	array2[j]=array[a];
    	a++;
	}
	int b=n-1;
	for(j=1;j<n;j+=2){
		array2[j]=array[b];
		b--;
	}
	for(j=0;j<n;j++){
		printf("%d ",array2[j]);
	}
	
	return 0;
}
