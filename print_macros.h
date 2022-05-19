
/* ---------------------- Defines for debugging ---------------------------- */
/* print the name of the variable followed by it's value: */
/* usage: dsprintf(str) to print the string str*/
# define dsprintf(expr) printf("\n" #expr ":\n|%s|\n", expr)
/* usage: diprintf(i) to print the integer i */
# define diprintf(expr) printf("\n" #expr ":\n|%d|\n", expr)
/* write an expression. fd, quotes and length is taken care of */
# define dwrite(expr) write(2, "\n" #expr "\n", strlen(#expr) + 2)
