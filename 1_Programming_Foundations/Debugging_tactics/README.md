# Introduction of debugging methods in C ++ programming

## Conditionalizing your debugging code

Now we can enable debugging simply by commenting / uncommenting #define ENABLE_DEBUG. This allows us to reuse previously 
added debug statements and then just disable them when we’re done with them, rather than having to actually remove them from the code.
If this were a multi-file program, the #define ENABLE_DEBUG would go in a header file that’s included into all code files so 
we can comment / uncomment the #define in a single location and have it propagate to all code files.
