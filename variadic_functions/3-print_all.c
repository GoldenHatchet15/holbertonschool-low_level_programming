#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @args: list of variadic arguments
 */
void print_char(va_list args) { printf("%c", va_arg(args, int)); }
/**
 * print_int - prints an int
 * @args: list of variadic arguments
 */
void print_int(va_list args) { printf("%d", va_arg(args, int)); }
/**
 * print_float - prints a float
 * @args: list of variadic arguments
 */
void print_float(va_list args) { printf("%f", va_arg(args, double)); }
/**
 * print_string - prints a string
 * @args: list of variadic arguments
 *
 * Description: If the string is NULL, prints (nil) instead.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Description: Prints each argument based on the format specifier.
 * 'c' for char, 'i' for int, 'f' for float, 's' for string (char*).
 * If a string is NULL, prints (nil) instead.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *sep = "";
const char *formats = "cifs";
void (*funcs[4])(va_list) = {print_char, print_int, print_float, print_string};

va_start(args, format);

while (format && format[i])
{
j = 0;
while (formats[j])
{
if (format[i] == formats[j])
{
printf("%s", sep);
funcs[j](args);
sep = ", ";
break;
}
j++;
}
i++;
}

va_end(args);
printf("\n");
}

