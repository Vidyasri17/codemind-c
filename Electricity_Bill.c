#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    float cpu , bill , sc , tb;
    if(u <= 199)
    {
        cpu = 1.20;
        bill = u*cpu;
        printf("Cost per Unit: %.2f
",cpu);
        printf("Bill: %.2f
",bill); 
    }
    else if(u >= 200 && u < 400)
    {
        cpu = 1.40;
        bill = u*cpu;
        printf("Cost per Unit: %.2f
",cpu);
        printf("Bill: %.2f
",bill); 
    }
    else if(u >= 400 && u < 600)
    {
        cpu = 1.60;
        bill = u*cpu;
        printf("Cost per Unit: %.2f
",cpu);
        printf("Bill: %.2f
",bill); 
    }
    else if(u >= 600 && u < 800)
    {
        cpu = 1.80;
        bill = u*cpu;
        printf("Cost per Unit: %.2f
",cpu);
        printf("Bill: %.2f
",bill);  
    }
    else
    {
        cpu = 2.00;
        bill = u*cpu;
        printf("Cost per Unit: %.2f
",cpu);
        printf("Bill: %.2f
",bill); 
    }
    if(bill > 400)
    {
        sc = 0.15*bill;
        printf("Surcharge: %.2f
",sc);
    }
    else
    {
        sc = 0.00;
        printf("Surcharge: %.2f
",sc);
    }
    tb = bill + sc;
    printf("Total Amount: %.2f",tb);
}