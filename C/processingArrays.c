/*20180528*/

/*This program implement four functions that process arrays*/
#include <stdio.h>

/*
Returns the value of the largest integer in the integer array a of n elements 
Pre-condition: n>=1
*/

int array_max(const int a[],size_t n)
{

    size_t i;
    int max= a[0];


    for(i =0; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

/*
Returns the index of the largest integer in the integer array a of n elements;
if the largest integer occurs more than once in the array, returns the index of its
first occurrence.
Pre-condition: n>=1
*/

size_t array_index_of_first_max(const int a[], size_t n)
{

    size_t i;
    size_t maxIndex = 0;
    int max= a[0];
    

    for(i =1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;

        }
    }
        
    return maxIndex;
}


/*
Return the index of the largest integer in the integer array a of n elements;
if the largest integer occurs more than once in the array,returns the index
of its last occurrence.
Pre-condition: n>=1 
*/

size_t array_index_of_last_max(const int a[], size_t n)

{
    size_t i;
    int firstMax = -1;
    int lastMax = -1;
    int max = a[0];

    for (i =0; i<n; i++)
    {
        if(a[i]> max)
        {
            max = a[i];
        }
        if (max!= a[i])
        continue;
        if(firstMax ==-1)
            firstMax = i;
        lastMax =i;
    }
    if(firstMax != -1)
    {
        return lastMax;
    }
    
return 0;
}

/*
Returns 1 if all corresponding elements of the two arrays a & b,each containing 
n integers, are equal;otherwise, return 0.

*/

int array_equal(const int a[], const int b[], size_t n)
{
size_t i;
	for (i=0;i<n ;i++ )
		if (a[i]!= b[i]){
			return 0;
		}
	return 1;
}
int main(){

int a[6] = {4,9,3,0,9,1};
int b[6] = {4,9,3,0,9,1};
printf("The value of the largest integer in the array is : ");
printf("%d\n", array_max(a, 6));
printf("%lu\n", array_index_of_first_max(a, 6));
printf("%lu\n", array_index_of_last_max(a, 6));
printf("%d\n", array_equal(a,b, 6));

    return 0;
}

