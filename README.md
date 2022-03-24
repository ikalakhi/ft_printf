# ft_printf
 
Printf
a function that takes a variable number of parameters is called a variadic function ??

What's Macros;
you can think of macros as a special type of function that can modify yout source code

va_list ; we need a variable capable of storing a variable-length argument list this variable will be of type va_list Ex ; va_list a_list;

va_start va_start is a macro which accepts two arguments, a va_list and the name of the variable that directly precedes the ellipsis ("...") Ex; int a_function ( int x, ... ) {     va_list a_list; int num = 0;     va_start( a_list, x ); }

va_arg va_arg takes a va_list and a variable type, and returns the next argument in the list in the form of whatever variable type it is told. It then moves down the list to the next argument. Ex ; va_arg ( a_list, int )

                                            cspdiuxX%
%c =

%s =

%p =

%d Or i =

%u =

%x = The unsigned int argument is converted to unsigned hexadecimal format in the style dddd ; the letters abcdef are used. The precision specifies the minimum number of digits to appear; if the value being converted can be represented in fewer digits, it will be expanded with leading zeros. The default precision is 1. The result of converting 0 with an explicit precision of 0 is no wide-characters.

%X = Behaves the same as the x conversion wide-character except that letters ABCDEF are used instead of abcdef.

%% = Output a % wide-character; no argument is converted. The entire conversion specification must be %% .
