#ifndef ABS_H
#define ABS_H

/**
 * ABS - computes the absolute value of its argument x.
 * @x: The number to compute absolute value for.
 *
 * Description: This macro checks if x is less than 0. If so, it
 * multiplies it by -1 to make it positive; otherwise, it leaves it as is.
 * Parentheses around the argument and the entire expression ensure
 * the correct evaluation in the context of the code where it's used.
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif /* ABS_H */
