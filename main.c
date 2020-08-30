#include <stdio.h>
//include custom headers
#include "arrayfunc.h"

void main(){
        printf("Enter the size of array: ");
	float value=0.0f;
        int size,n=0,*outputarray,minmax=0;
        scanf("%d",&size);
        int arr[size];

        while(n<size){
                scanf("%d",&arr[n]);
                ++n;
        }

        while(n!=0){
                printf("----------Enter the choice below---------\n1.Sort the ARRAY\n2.Calculate Mean\n3.Calculate Mode\n4.Calculate Median\n5.Calculate Maximum Element\n6.Calculate minimum Element0.To Exit\nEnter choice: ");
                scanf("%d",&n);
                switch(n){
                        case 1:outputarray = Sorting(arr,size);
                                Display(outputarray,size);
                                break;
                        case 2:value = Mean(arr,size);
                                printf("The Calculated Mean of Array is %.4f\n",value);
                                break;
                        case 3:value = Mode(arr,size);
                                printf("The Calculated Mode of Array is %.4f\n",value);
                                break;
                        case 4:value = Median(arr,size);
                                printf("The Calculated Median of Array is %.4f\n",value);
                                break;
                        case 5:minmax = Maximum(arr,size);
                                printf("Maximum Element : %d \n",minmax);
                                break;
                        case 6:minmax = Minimum(arr,size);
                                printf("Minimum Element : %d \n",minmax);
                                break;
                        default:printf("Wrong Input\n");
                }
        }
        printf("Thank you for using the program\n");
}