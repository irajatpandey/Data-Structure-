#define size 100
main()
{
    int a[size],*p,temp;
    int i,j,n,min;
    p=&a;
     printf("Enter the size of an array\n");
    scanf("%d",&n);
     printf("Enter the elements in an array\n\n");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n-1;i++)
    {
        min=i;
        j=i-1;
        for(j=i+1;j<n;j++)
        {
            if(*(p+j)<*(p+min))
                min=j;
        }
        temp=*(p+min);
        *(p+min)=*(p+i);
        *(p+i)=temp;
    }
    printf("Sorted Elemetns are : \n\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));


}


