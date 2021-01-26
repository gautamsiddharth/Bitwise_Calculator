/*
Siddharth Gautam
Program that perform Bitwise Calculator
*/

#include <stdio.h>
#include <math.h>
#define BITS 8

void ConvertDecimalToBinary(char array[], int Num);
int main()
{
	
    printf("Bitwise Calculator\n");
	printf("Enter two base 10 values with a bitwise operator to see the decimal result and the binary result. The format is \n");
    printf("FirstNumber, BitwiseOperator SecondNumber\n");
	printf("For example, enter the expression\n");
	printf("2 & 3 \n");
	printf("This Calculator can used with &, |, ^, << and >>\n");
	printf("Please note that the spaces between numbers and operator is essential and the two entered values must be between 0 and 255\n");
	
	int FirstNum=0, SecondNum=0, i=0;
    char operator [2]={};
	char BinaryArray[BITS + 1]= {};
    printf("Enter an expression: ");
    scanf( "%d %s %d", &FirstNum, operator, &SecondNum);
	printf(" \n");
    while(( FirstNum <0) || (FirstNum>255) ||( SecondNum <0) || (SecondNum>255))
    {
       printf( " Enter valid number: ");
       scanf( "%d %s %d", &FirstNum, operator, &SecondNum);
      
    }

     int Result=0;
   if (operator[0] == '&')
   {
	    printf("In Base 10...\n\n %d %s %d", FirstNum, operator, SecondNum);
        printf(" = %d\n\n\n", Result=(FirstNum & SecondNum));
	    printf("In %d-bits base 2.. \n\n", BITS);
	 
		ConvertDecimalToBinary( BinaryArray, FirstNum);
		printf("  %s\n",  BinaryArray);
		printf("%s\n", operator);
		ConvertDecimalToBinary( BinaryArray, SecondNum);
		printf("  %s\n",  BinaryArray);
		printf("  ");
		for(i=0; i<BITS; i++)
		{ 
			printf("=");
		}
		printf(" \n");
		ConvertDecimalToBinary( BinaryArray, Result);
		printf("  %s\n",  BinaryArray);
 
   }
   else if(operator[0] == '|')
   {	printf("In Base 10...\n\n %d %s %d ", FirstNum, operator, SecondNum);
        printf(" = %d\n\n\n", Result=(FirstNum | SecondNum));
		printf("In %d-bits base 2.. \n\n", BITS);
	 
		ConvertDecimalToBinary( BinaryArray, FirstNum);
		printf("  %s\n",  BinaryArray);
		printf("%s\n", operator);
		ConvertDecimalToBinary( BinaryArray, SecondNum);
		printf("  %s\n",  BinaryArray);
		printf("  ");
		for(i=0; i<BITS; i++)
		{ 
			printf("=");
		}
		printf(" \n");
		ConvertDecimalToBinary( BinaryArray, Result);
		printf("  %s\n",  BinaryArray);
    
   }
    else if(operator[0] == '^')
    {	printf("In Base 10...\n\n %d %s %d ", FirstNum, operator, SecondNum);
        printf(" = %d\n\n\n", Result= (FirstNum ^ SecondNum));
		printf("In %d-bits base 2.. \n\n", BITS);
	 
		ConvertDecimalToBinary( BinaryArray, FirstNum);
		printf("  %s\n",  BinaryArray);
		printf("%s\n", operator);
		ConvertDecimalToBinary( BinaryArray, SecondNum);
		printf("  %s\n",  BinaryArray);
		printf("  ");
		for(i=0; i<BITS; i++)
		{ 
			printf("=");
		}
		printf(" \n");
		ConvertDecimalToBinary( BinaryArray, Result);
		printf("  %s\n",  BinaryArray);
  
    }
    else if(operator[0] == '>')
    {
		printf("In Base 10...\n\n %d %s %d ", FirstNum, operator, SecondNum);
		printf(" = %d\n\n\n", Result= (FirstNum >> SecondNum));
		printf("In %d-bits base 2.. \n\n", BITS);
		ConvertDecimalToBinary( BinaryArray, FirstNum);
		printf("  %s ",  BinaryArray);
		printf("  %s  ", operator);
		printf("  %d\n",  SecondNum);
		printf("  ");
		printf(" \n");
		ConvertDecimalToBinary( BinaryArray, Result);
		printf("  %s\n",  BinaryArray);
  
    }
    else if (operator[0] == '<')
	{
		printf("In Base 10...\n\n %d %s %d ", FirstNum, operator, SecondNum);
		printf(" = %d\n\n\n", Result= (FirstNum << SecondNum));
		printf("In %d-bits base 2.. \n\n", BITS);
		ConvertDecimalToBinary( BinaryArray, FirstNum);
		printf("  %s",  BinaryArray);
		printf("  %s", operator);
		printf("  %d\n",  SecondNum);
		printf("  ");
		printf(" \n");
		ConvertDecimalToBinary( BinaryArray, Result);
		printf("  %s\n",  BinaryArray);
	
	}
	else 
	{
		printf("Operator %s is not supported by this calculator\n", operator);
	}
     
   return 0;
}


void ConvertDecimalToBinary(char array[], int Num)
{
	int i, numArray[BITS]; int x= Num;
	numArray[BITS-1]=x;
	for(i=BITS-2;i>=0;i--)    
	{    
		x= x>>1;
		numArray[i]=x;
	}    
	for(i=0;i< BITS;i++)    
	{    
		array[i]=(numArray[i]& 1 == 1) ? '1': '0';
	}    
	return;
}
