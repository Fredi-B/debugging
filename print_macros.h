
/* ---------------------- Defines for debugging ---------------------------- */
/* print the name of the variable followed by it's value: */
/* print a string */
# define dsprintf(expr) printf("\n" #expr ":\n|%s|\n", expr)
/* print an integer */
# define diprintf(expr) printf("\n" #expr ":\n|%d|\n", expr)
/* write an expression. fd, quotes and length is taken care of */
# define dwrite(expr) write(2, "\n" #expr "\n", strlen(#expr) + 2)
