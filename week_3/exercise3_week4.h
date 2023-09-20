//
// Created by Owner on 9/18/2023.
//

#ifndef CS2420_INCLASS_EXERCISE3_WEEK4_H
#define CS2420_INCLASS_EXERCISE3_WEEK4_H


class exercise3_week4 {

    int maximum(int a[],int n,int i)
    {
        static int max=0;;
        if(i<n)
        {
            if(a[max]<a[i])
            {
                max=i;
                maximum(a,n,++i);

            }
        }

        return max;

    }
    int main()
    {
        int a[1000],i,n,sum;

        printf("Enter size of the array : ");
        scanf("%d", &n);

        printf("Enter elements in array : ");
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }



        printf("minimum of array is : %d",a[(minimum(a,n,1))]);

        printf("\nmaximum of array is : %d",a[(maximum(a,n,1))]);



    }
};


#endif //CS2420_INCLASS_EXERCISE3_WEEK4_H
