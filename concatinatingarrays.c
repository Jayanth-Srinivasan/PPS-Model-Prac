#include<stdio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, conca[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        conca[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        conca[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after concatinating is:\n");
    for(i=0; i<k; i++)
        printf("%d ", conca[i]);
    return 0;
}