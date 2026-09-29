#include <stdio.h>
int search(int *, int, int);
int search(int *arr, int n, int t)
{
    int high =n-1, low=0, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (t != arr[0] || t != arr[n - 1])
        {
            mid = low + (high - low) / 2;
            if (arr[mid] == t)
            {
                return 1;
                break;
            }
            else
            {
                if (arr[mid] > t)
                {

                    high = mid - 1;
                }
                else if (arr[mid] < t)
                {
                    low = mid + 1;
                    high = n - 1;
                }
            }
        }
    }
    return -1;
}

int main()
{
    printf("\n\nbinary sorting via user defined fn\n");
    int set[] = {1,2,4,7,9,77,78,79,80,88,188,200,201};
    int no_elements;
    no_elements = sizeof(set) / sizeof(int);
    printf("enter number to search\t");
    int x;
    scanf("%d", &x);
    int k = search(set, no_elements, x);
if(k==1){
    printf("\tgotcha !!-_-!!");
}
else{
    printf("\tnope -_-^!");
}
    return 0;
}
