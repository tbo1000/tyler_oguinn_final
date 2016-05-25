/*
 * Name        : Activator.cpp
 * Author      : Tyler O'Guinn
 * Description : Class function definitions for our Activator class
 */
#include "Activator.h"

unsigned int Activator::getPrime (unsigned int whichPrime)
{
   unsigned int prime=2;
    unsigned int counter=1;
    unsigned int i=2;
   
        for (i =3; i<100000000; i++)
        {
            if (counter==whichPrime)
            {
                return prime;
            }
            for (int divisor=prime; divisor>0; divisor--)
            {
                if(divisor==1)
                {
                    prime = i;
                    counter++;
                    
                }
                if(i%divisor==0)
                {
                    break;
                }
               
            }
            
        }
}        
unsigned int Activator::sumTheDigits (unsigned int value)
{
   
    if(value<10)
    {
        return value;
    }
    else
    {
        int sum=0;
        while(value>0)
        {
        sum=sum+value%10;
        value=value/10;
        }
        return sumTheDigits(sum);
    }
}