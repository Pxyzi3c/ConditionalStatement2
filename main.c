/*2.Write a program that will input, process and output the following:

EMPLOYEE NUMBER:
EMPLOYEE MAME:
MARITAL STATUS CODE:
MARITAL STATUS:
BASIC PAY:
SSS:
PAG-IBIG:
WITHHOLDING TAX:
GROSS PAY:
TOTAL DEDUCTION:
NET PAY:*/
/*Programmer: HARVY JONES PONTILLAS DICT 1-2*/
#include <stdio.h>
#define p printf
#define s scanf

int main()
{   int empnum, maritalsc;
    float basicpay, allwnc, otpay, sss, pagibig, withhtax ,gpay ,totald ,npay;
    char empname[20];

    p("\n\n\tEMPLOYEE NUMBER: ");
    s("%d",&empnum);
    p("\tEMPLOYEE NAME: ");
    s("%s",&empname);
    p("\tMATITAL STATUS CODE: ");
    s("%d",&maritalsc);
    switch(maritalsc){
    case 1:p("\tMARITAL STATUS: SINGLE");
           break;
    case 2:p("\tMARITAL STATUS: MARRIED");
           break;
    case 3:p("\tMARITAL STATUS: WIDOW");
           break;
    default:p("\tINVALID INPUT");}
    p("\n\tBASIC PAY: ");
    s("%f",&basicpay);
    p("\tALLOWANCE: ");
    s("%f",&allwnc);
    p("\tOVERTIME PAY: ");
    s("%f",&otpay);

    sss=basicpay*.03;
    pagibig=basicpay*.02;
    withhtax=basicpay*.10;
    gpay=basicpay+otpay+allwnc;
    totald=sss+pagibig+withhtax;
    npay=gpay+totald;

    p("\tSSS: %.2f",sss);
    p("\n\tPAG-IBIG: %.2f",pagibig);
    p("\n\tWITHHOLDING TAX: %.2f",withhtax);
    p("\n\tGROSS PAY: %.2f",gpay);
    p("\n\tTOTAL DEDUCTION: %.2f",totald);
    p("\n\tNET PAY: %.2f",npay);

    getch();
}
