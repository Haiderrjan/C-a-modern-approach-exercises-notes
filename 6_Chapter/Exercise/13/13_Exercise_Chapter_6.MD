### Exercise 6.13
Rewrite the following loop so that its body is empty:

```
for (n = 0; m > 0; n++)
m /= 2;
```

Answer:

```
for(n = 0; m > 0; n++, m/=2);
```
