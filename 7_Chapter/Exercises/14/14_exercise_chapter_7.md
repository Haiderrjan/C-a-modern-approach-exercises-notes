### Exercise 7.14
Does the following statement always 
compute the fractional part of f correctly
(assuming that f and frac_part are float variables)?

`frac_part = f - (int) f;`

If not, what's the problem?


### Answer:

The following statement may fail due to `f` could be larger than
`int` which causes the program to fail.


