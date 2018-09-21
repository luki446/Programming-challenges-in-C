void length()
{
    char sys;
    float number;
    printf("Choose your system \n");
    printf("I - Imperial, M - Metric \n");
    sys = getchar();
    getchar();
    if(sys == 'I')
    {
        printf("How many foots? \n");
        scanf("%f", &number);
        printf("\nThis is: \n");
        printf("%f milimeters \n", sys * 3048);
        printf("%f centimeters \n", sys * 30.48);
        printf("%f meters \n", sys * 0.3048);
        printf("%f kilometers \n", sys * 0.003048);
        getchar();
    }
    else if(sys == 'M')
    {
        printf("How many centimeters? \n");
        scanf("%f", &number);
        printf("\nThis is: \n");
        printf("%f inches \n", sys * 0.3937);
        printf("%f foots \n", sys * 0.0328);
        printf("%f yards \n", sys * 0.010936);
        printf("%f miles \n", sys * 0.0000062137);
        getchar();
    }
    else 
    {
        printf("Invalid argument");
    }
}

void weight()
{
    char sys;
    float number;
    printf("Choose your system \n");
    printf("I - Imperial, M - Metric \n");
    sys = getchar();
    getchar();
    if(sys == 'I')
    {
        printf("How many pounds? \n");
        scanf("%f", &number);
        printf("\nThis is: \n");
        printf("%f micrograms \n", sys * 453592370);
        printf("%f grams \n", sys * 453.59237);
        printf("%f kilograms \n", sys * 0.45359);
        printf("%f tons \n", sys * 0.00045359237);
        getchar();
    }
    else if(sys == 'M')
    {
        printf("How many kilograms? \n");
        scanf("%f", &number);
        printf("\n This is: \n");
        printf("%f pounds \n", sys * 2.204622);
        printf("%f quarts \n", sys * 1.97);
        printf("%f english tons \n", sys * 0.0009842065276);
        printf("%f american tons \n", sys * 0.0011023113109);
        getchar();
    }
    else 
    {
        printf("Invalid argument");
    }
}
