### Exercise 7.10
Suppose that `i` is a variable of type `int`, `j` 
is a variable of type `long`, and `k` is a variable of 
type unsigned int. What is the type of the expression 
`i + (int) j * k`?




### Answer:

The expression turns into a `unsigned int`, as `j` is cast into a `int`
which then times with `k` which then promotes the whole expression into `unsigned int`


