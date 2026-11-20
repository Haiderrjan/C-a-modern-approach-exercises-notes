### Exercise 7.12
Suppose that `i` is a variable of type `int`, `f` 
is a variable of type `float`, and d is a 
variable of type double. Explain what 
conversions take place during the execution 
of the statement:

`d = i + f;`

### Answer:

So the first conversion happens on the right where the type
`int` of `i` becomes `float` due to `f` being a `float` type,
then the left is assigment in which `d` is a `double` meaning 
that the sum expression then converts to `double` due to the hierarchy.

