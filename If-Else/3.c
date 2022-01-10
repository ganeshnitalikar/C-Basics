//  WAP TO READ MARKS OF PHYSICS, CHEMISTRY, MATH,AND PRINT TOTAL MARKS AND PERCENTAGE AND CHECK STUDENT PASS OR FAIL

int main()
{
    int phy, che, math ,tm;
    float per;

    printf("Enter The Marks Of Physics :");
    scanf("%d",&phy);

    printf("Enter The Marks Of Chemistry :");
    scanf("%d",&che);

    printf("Enter The Marks Of Math :");
    scanf("%d",&math);

    tm = phy + math +che;
    per = tm/3;

    if(phy>=35 && che >=35 && math >=35 && per >= 35)
    {
        printf("Pass!!");
        printf("Percentage Is %f",per);
    }
    else
    {
        printf("Fail");
    }
    return 0;
}