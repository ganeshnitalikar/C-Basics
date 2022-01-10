//WAP TO READ PRODUCT NAME RATES QUANTITY AND CALCULATE THE BILL AMOUNT IF BILL AMOUNT MORE THAN 10K THEN 20% DISCOUNT. DISPLAY TOTAL BILL AMOUNT 

int main()
{
    char pname[20];
    int rate,qty,bill,fbill;
    float dis;

    printf("Enter Product Name : ");
    scanf("%s",&pname);

    printf("Enter Rate Of Product ");
    scanf("%d",&rate);

    printf("Enter The Quantity Of Product : ");
    scanf("%d",&qty);

    bill = rate*qty;

    if(bill>=10000)
    {
        dis = bill*.20;
        fbill= bill-dis;
        printf("Your Final Bill Is : %d ",fbill);
    }
    else
    {
        printf("Your Bill Is %d",bill);
    }
    return 0;
}