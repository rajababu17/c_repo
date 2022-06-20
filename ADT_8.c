#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_sized;
    int *ptr;
};
void creatArray(struct myArray *a, int tsize, int usedSize)
{
    a->total_size = tsize;
    a->used_sized = usedSize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void Show(struct myArray *a)
{
    for (int i = 0; i < a->used_sized; i++)
    {
        printf("\nThe value at %d element is %d", i, a->ptr[i]);
    }
}
void setValue(struct myArray *a)
{
    int v;
    for (int i = 0; i < (*a).used_sized; i++)
    {
        printf("Enter the value at %d elements", i);
        scanf("%d", &v);
        a->ptr[i] = v;
    }
}
void get(struct myArray *a)
{
    int i;
    printf("Enter the index number");
    scanf("%d", &i);
    if (a->used_sized < i)
        printf("\nInvalid index no.");

    else
        printf("\nValue at index %d is %d", i, a->ptr[i]);
}

int main()
{
    struct myArray marks;
    creatArray(&marks, 100, 5);

    setValue(&marks);
    Show(&marks);
    get(&marks);

    return 0;
}
