

def sort( lis):
    temp=0
    
    for i in range(0,len(lis)-1):
        is_sorted_check=1
        for j in range(0,len(lis)-1-i):
            if (lis[j]>lis[j+1]):
                temp = lis[j]
                lis[j] = lis[j + 1]
                lis[j + 1] = temp
                is_sorted_check = 0
                
        

        if(is_sorted_check):
            return





lis=[12,10,8,7,9,25,15,11,3]
print("\n\nBefore Sorting the list\n")
for items in lis:
    print(items," ",end="")


sort(lis)


print("\n\nAfter Sorting the list using bubble sort\n")
for items in lis:
    print(items," ",end="")
    
