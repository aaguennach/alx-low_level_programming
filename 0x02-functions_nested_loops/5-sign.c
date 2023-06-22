  1 #include "main.h"
  2 
  3 /**
  4  * print_sign - prints the sign of a number
  5  * @n: the int to check
  6  * Return: 1 and prints + if n is greater than zero
  7  * 0 and prints 0 if n is zero
  8  * -1 and prints - if n is less than zero
  9  */
 10 int print_sign(int n)
 11 {
 12         if (n > 0)
 13         {
 14                 _putchar('+');
 15                 return (1);
 16         }
 17         else if (n == 0)
 18         {
 19                 _putchar(48);
 20                 return (0);
 21         }
 22         else
 23                  _putchar('-');
 24                 return (-1);
 25 }
 26 
~       
