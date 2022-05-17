#include <stdio.h>
	int main()
	{
	    int a;
	    scanf("%d", &a);
	    int arr[100];
	    for (int i = 0; i < a; i++)
	    {
	        scanf("%d", &arr[i]);
	    }
	    int dao = 0;
	    for (int i = 0; i < a - 1; i++)
	    {
	        dao = 0;
	        int min = arr[i], vt = i;
	        for (int j = i + 1; j < a; j++)
	        {
	            if (arr[j] < min)
	            {
	                min = arr[j];
	                vt = j;
	                dao++;
	            }
	        }
	        arr[vt] = arr[i];
	        arr[i] = min;
	        for (int k = 0; k < a; k++)
	            printf("%d ", arr[k]);
	        printf("\n");
	        
	    }
	}
