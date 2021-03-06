# Different types of format specifiers in C
| Format specifier | Description                                    | Supported data types                       |
|------------------|------------------------------------------------|--------------------------------------------|
| %c               | Character                                      | char unsigned char                         |
| %d               | Signed Integer                                 | short unsigned short int long              |
| %e or %E         | Scientific notation of float values            | float double                               |
| %f               | Floating point                                 | float                                      |
| %g or %G         | Similar as %e or %E                            | float double                               |
| %hi or %hd       | Signed Integer(Short)                          | short                                      |
| %hu              | Unsigned Integer(Short)                        | unsigned short                             |
| %i               | Signed Integer                                 | short unsigned short int long              |
| %l or %ld or %li | Signed Integer                                 | long                                       |
| %lf              | Floating point                                 | double                                     |
| %Lf              | Floating point                                 | long double                                |
| %lu              | Unsigned integer                               | unsigned int unsigned long                 |
| %lli, %lld       | Signed Integer                                 | long long                                  |
| %llu             | Unsigned Integer                               | unsigned long long                         |
| %o               | Octal representation of Integer.               | short unsigned short int unsigned int long |
| %p               | Address of pointer to void void *              | void *                                     |
| %s               | String                                         | char *                                     |
| %u               | Unsigned Integer                               | unsigned int unsigned long                 |
| %x or %X         | Hexadecimal representation of Unsigned Integer | short unsigned short int unsigned int long |
| %n               | Prints nothing                                 |                                            |
| %%               | Prints % character                             |                                            |