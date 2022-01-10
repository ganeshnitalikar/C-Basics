//WAP TO READ FLOOR NUMBER AND CHECK PIZZA SHOP AVAILABLE OR NOT AND CONSIDER A PIZZA SHOP AVAILABE AT 4TH AND 7TH FLOOR

int main()
{
    int fno;

    printf("Enter Floor Number");
    scanf("%d",&fno);

    if(fno==4 || fno==7)
    {
        printf("Pizza Shop Available");
    }
    else
    {
        printf("No Pizza Shop");
    }
    return 0;
}