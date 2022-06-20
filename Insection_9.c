#include<stdio.h>
#include<stdlib.h>


void Display(int arr[],int size){
    for (int i = 0; i < size; i++)
        
    {
        printf("\n%d",arr[i]);

    }
    
}

int indInsertion(int arr[],int *size,int element,int capacity,int index){
    if (*size==capacity)

    {
        return -1;

    }
    for (int i = *size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];

    }
    arr[index] = element;
    ++*size;
    return 1;

}
int indexDeletion(int arr[],int *size, int index){
    if (*size==0)
    {
        return -1;

    }
    for (int i = index; i <*size-1; i++)
    {
        arr[i] = arr[i+1];

    }
    --*size;
    // *size=*size-1; also u can use it in place of above
    return 1;

}




int main(){
    int arr[100]={12,15,25,30,255};
    int size = 5;
    
    int capacity = 100;
    Display(arr, size);
    printf("\nsize is %d", size);
  indInsertion(arr, &size, 69,capacity,2);
    // size + 1;
    Display(arr, size);
    printf("\nsize is %d", size);

    indexDeletion(arr, &size, 2);

    Display(arr, size);
    printf("\nsize is %d", size);



}