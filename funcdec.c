#include "header.h"
#include<stdio.h>
int *Sort(int *array,int size){
        int i,j,s,temp;
        for(i=0;i<size-1;i++){
                s=i;
                for(j=i+1;j<size;j++){
                        if(array[j]<array[s])
                                s=j;
                }
        temp=array[s];
        array[s]=array[i];
        array[i]=temp;
        }
        return array;
}

float Mean(int *array,int size){
        int i;
        float mean=0.0f;
        for(i=0;i<size;i++)
                mean=mean+array[i];
        mean=mean/size;
        return mean;
}

int Mode(int *array,int size){
        int max_val=0,max_count=0,i,j;
		array = Sort(array,size);
        for(i=0;i<size;i++){
                int counter=0;
                for(j=0;j<size;j++){
                        if(array[j]==array[i])
                                counter++;
                }
                if(counter>max_count){
                        max_count=counter;
                        max_val=array[i];
                }
        }
        return max_val;
}

float Median(int *array,int size){
        float median=0.0f;
		array = Sort(array,size);
        if(size%2==0)
                median=(array[(size-1)/2]+array[size/2])/2.0;
        else
                median=array[size/2];
        return median;
}

int Maximum(int *array,int size){
        int max=array[0],i;
        for(i=1;i<size;i++){
                if(max<array[i])
                        max=array[i];
        }
        return max;
}

int Minimum(int *array,int size){
        int min = array[0],i;
        for(i=1;i<size;i++){
                if(min>array[i])
                        min=array[i];
        }
        return min;
}

//display function
void display(int *array,int size){
        int i=0;
        printf("Array:\n");
        for(i=0;i<size;i++)
                printf("%d ",array[i]);
		printf("\n");
}