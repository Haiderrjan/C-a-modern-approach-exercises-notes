### Exercise 6.04
Which one of the following statements is not equivalent to the other 
two (assuming that the loop bodies are the same)?

```
(a) for (i = 0; i < 10; i++) ...
(b) for (i = 0; i < 10; ++i) ...
(c) for (i = 0; i++ < 10; ) ...
```
Output:
```
A:
0 1 2 3 4 5 6 7 8 9 
B:
0 1 2 3 4 5 6 7 8 9 
C:
1 2 3 4 5 6 7 8 9 10 
```

Answer:
The third one is not the same as the post increment is incrementing and testing the condition 
before hitting the body, so the output will start with `1` not `0`.

