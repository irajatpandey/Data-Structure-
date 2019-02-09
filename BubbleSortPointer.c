#define size 100
main()
{
    int a[size],*p;
    int i,j,n,temp;
    p=&a;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    printf("Enter the elements in an array\n\n");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
               *(p+j+1)=temp;
            }

        }
    }
    printf("Sorted Elemetns are : \n\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));



}
