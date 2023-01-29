#include<stdio.h>
#include<string.h>
// struct Drivers
// {
//     char Name[100];
//     char License[50];
//     int route;
//     int KMs;
// };
// struct Drivers Ajay, Vijay, Jagdish;
// void fun()
// {
//     printf("The Details of first driver is given below:\n Driver's name is %s and his license number is %s.He prefer route %d to travel to Punjab and he has traveled %d Kilometers in truck. \n",Ajay.Name,Ajay.License,Ajay.route,Ajay.KMs);
//     printf("The Details of second driver is given below: \n Driver's name is %s and his license number is %s.He prefer route %d to travel to Punjab and he has traveled %d Kilometers in truck.\n",Vijay.Name,Vijay.License,Vijay.route,Vijay.KMs);
//     printf("The Details of third driver is given below: \n Driver's name is %s and his license number is %s.He prefer route %d to travel to Punjab and he has traveled %d Kilometers in truck.\n",Jagdish.Name,Jagdish.License,Jagdish.route,Jagdish.KMs);
// }

// int main()
// {
//     int n;
//     printf("Enter your data in a given order.\n 1.Name \n 2.License Number \n 3.Route \n 4.Kilometers Traveled\n");
//     printf("Press 1 to log your details.\n");
//     scanf("%d", &n);
//     if (n==1)
//     {
//         scanf("%s",&Ajay.Name);
//         scanf("%s",&Ajay.License);
//         scanf("%d",&Ajay.route);
//         scanf("%d",&Ajay.KMs);
//         printf("You have successfuly loged your details.\n");
//     }
//     printf("Press 2 to log your details.\n");
//     scanf("%d", &n);
//     if (n==2)
//     {
//         scanf("%s",&Vijay.Name);
//         scanf("%s",&Vijay.License);
//         scanf("%d",&Vijay.route);
//         scanf("%d",&Vijay.KMs);
//     }
//     printf("Press 3 to log your details.\n");
//     scanf("%d", &n);
//     if (n==3)
//     {
//         scanf("%s", &Jagdish.Name);
//         scanf("%s", &Jagdish.License);
//         scanf("%d",&Jagdish.route);
//         scanf("%d",&Jagdish.KMs);
//     }
//     fun();
//----------------------CODE BY CHATGPT-----------------------

struct Drivers
{
    char Name[100];
    char License[50];
    int route;
    int KMs;
};

struct Drivers drivers[3];

void fun()
{
    for (int i = 0; i < 3; i++)
    {
        printf("The Details of driver %d is given below:\n Driver's name is %s and his license number is %s. He prefer route %d to travel to Punjab and he has traveled %d Kilometers in truck. \n", i+1, drivers[i].Name, drivers[i].License, drivers[i].route, drivers[i].KMs);
    }
}

int main()
{
    int n;
    printf("Enter your data in a given order.\n 1.Name \n 2.License Number \n 3.Route \n 4.Kilometers Traveled\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Press %d to log your details.\n", i+1);
        scanf("%d", &n);
        if (n==i+1)
        {
            scanf("%s",drivers[i].Name);
            scanf("%s",drivers[i].License);
            scanf("%d",&drivers[i].route);
            scanf("%d",&drivers[i].KMs);
            printf("You have successfuly logged your details.\n");
        }
    }
    fun();
    return 0;
}


    
