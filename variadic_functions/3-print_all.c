#include <stdarg.h>
#include <stdio.h>

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
    char *str, *sep = "";
    const char *formats = "cifs";

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (formats[j])
        {
            if (format[i] == formats[j])
            {
                printf("%s", sep);
                switch (format[i])
                {
                    case 'c':
                        printf("%c", va_arg(args, int));
                        break;
                    case 'i':
                        printf("%d", va_arg(args, int));
                        break;
                    case 'f':
                        printf("%f", va_arg(args, double));
                        break;
                    case 's':
                        str = va_arg(args, char *);
                        if (!str)
                            str = "(nil)";
                        printf("%s", str);
                        break;
                }
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
