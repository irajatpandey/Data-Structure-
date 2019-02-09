#define size 100
main()
{
    int a[size],*p;
    int i,j,n,key;
    p=&a;
     printf("Enter the size of an array\n");
    scanf("%d",&n);
     printf("Enter the elements in an array\n\n");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=1;i<n;i++)
    {
        key=*(p+i);
        j=i-1;
        while(j>=0&&*(p+j)>key)
        {
            *(p+j+1)=*(p+j);
            j--;
        }
        *(p+j+1)=key;
    }
    printf("Sorted Elemetns are : \n\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));


}

