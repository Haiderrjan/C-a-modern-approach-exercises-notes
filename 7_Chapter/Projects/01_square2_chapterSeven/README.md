### Project 7.01
The `square2.c` program of Section 6.3 will fail (usually by printing strange
answers) if `i * i` exceeds the maximum `int` value. Run the program and
determine the smallest value of `n` that causes failure. Try changing the type
of `i` to `short` and running the program again. (Don't forget to update the
conversion specifications in the call of `printf`!) Then try `long`. From these
experiments, what can you conclude about the number of bits used to store
integer types on your machine?

### Solution
See `main.c`.

### Answer:

From the experiment I can conclude that the number of bits to store integer value
is important as I used the value `200` for `short` and `long` and for `short` it gave
me random numbers after `181` meaning it exceed its memory limit giving me random integers
compared to `long` being able to store memory having more number of bits.

