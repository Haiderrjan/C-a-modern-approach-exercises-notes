# Chapter 5 Selection Statements


C has relatively few statement, two we have seen are 
``return`` statement and the ***expression*** statments.
Most f C remaining statement fall into three catergories.
This chapter will cover selection statements and the compound statements.

- ***Selection statements*** - The ``if`` and ``switch`` statements allow a program to select a particular execution path from a set of alternatives


- ***Iteration statement*** - The ``while`` ``do`` and ``for`` statment support iterastion (looping)


- ***Jump statements*** - The ``break`` ``continue`` and ``goto`` statment cause an unconditional jump to some other place in the program.
  (the ``return`` statement belongs in this category as well).




## Logical Expressions 

Logical expressions must test the value of an expression to see it is "true" or "false".
Such as aan example is an ``if`` statement might need to test 
the expression ``i < j`` to either ``0`` (false) or ``1`` (true).


### Relational Operators 

Relational operators corresponds to the ``<``, ``>``, and ``≤``, ``≥`` operatoirs of mathematic in which
they produce ``0`` (false) or ``1`` (true).

- e.g. ``10 < 11`` is ``1``; The valuye of ``11 < 10`` is ``0``

![Relational Operators](images/image_1.png)


### Equality Operators

The ***equality operator*** have a unqiue appearance. The 
"equal to" operator is two adjacent ``=`` characters, not one
as a single ``=`` characters represents assignment operator.
The "not equal to" operator is also two characters: ``!`` and ``=``.

- The equality operators are left associative 


- they produce either ``0`` (false) or ``1`` (true)


- The equality operators have lower precedence than relational operator
  - e.g. ``i < j == j < k`` is equivalent to ``(i < j) == (j < k)``

![Equality Operator](images/image_2.png)


### Logical Operators

Logical expressions can be built from simples ones by using the logical operators:
- ***and***
- ***or***
- ***not***

The ``!`` operator is unary, while ``&&`` and ``||`` are binary.
The logical operators also produce either a ``0`` or ``1``and often the operand will have
values of ``0`` or ``1`` but its not a requirement. The logical operator treat any non zero 
operand as a true value and any zero operant as a false value.

- ***!expr*** has the value of ``1`` if ***expr*** has the value of ``0``


- ***expr1*** ``&&`` ***expr2*** has the value of ``1`` if the value of **expr1*** and ***expr2***
  are both non-zero.


- ***expr1*** ``||`` ***expr2*** has the value of ``1`` if the value of **expr1*** or ***expr2***
  has a non-zero value.

In other cases, these operators will produce the value ``0``.

- The ``!`` operators has the same precedence as the unary plus and minus operators


- The ``&&`` and ``||`` is lower than that of the relational and equality operators.
  - e.g. ``i < j && k == k`` means ``(i < j ) && (k == m)``


- The ``!`` operator is right associative; ``&&`` and ``||`` are left associative.


## The ``if`` Statement

The ``if`` will allow a program to choose between two alterative by testing the value
of an expression. The ``if`` statement has the form of:

![If statement](images/image_4.png)

- The parenthesis around the expressions are mandatory as they are apart of the ``if`` statement not the 
  expression


When a ``if`` statement is executed, the expressions in the parenthesis is evaluated. 
If the value of the expression is nonzero - which C interprets as true - the statement is executed

e.g.

``` 
if (line_ num == MAX_LINES)
  line_num = 0;
```

The statement ``line_num = 0;`` is executed if the condition ``line_num == MAX_LINES`` is true (a non-zero value)


## Compound Statement

A compound statement is if we want to control two or more statements.

![Compound Statement](images/image_5.png)

By putting braces around a group of statement we can force the compiler to treat it as a single statement.
Here is an example below:
- e.g. ``{ line_num = 0; page_num++; }``

For clarity ill show you in several line the one statement:
```
{
line_num - 0;
page_num++;
}
```

Each inner statement still ends with a semicolon, but the compound statement itself does not 
Here is what a compound statement will look like when used inside an ``if`` statement:

```
if (line_ num == MAX_LINES) {
  
  line_num - 0;
  page_num++;

}
```
Compound statement are also common in loops and other places where the syntax of C requires a single statement but when we want more than one.


### The ``else`` Clause

An ``if`` statement can have an ``else`` clause if the expressions in the parenthesis has the value of ``0``.

![else clause](images/image_6.png)

Here is an example of this below:

```
if ( i > j) {
  max = i;

else
  max = j;  
  
}
```

An ``if`` statement can be nested inside other ``if`` statements. Consider this example which finds the largest of the number
stored in ``i``, ``j`` and ``k`` and stores the value in ``max``:

![nested else](images/image_7.png)

Also the ``if`` statement can be nested to any depth.Aliginign each ``else`` with matching ``if``
cna make it easy to read for the user. Also dont hesitate to add braces shown below:

![braces else](images/image_8.png)

![braces else2](images/image_9.png)

### Cascaded ``if`` Statements

Sometimes we need to test a series of condition. A "Cascaded" ``if`` statement is often the best way
to write such a series of test. 

![cascaded if statement](images/image_10.png)

for example to test whether ``n`` is less than ``0``, equal to ``0``
or greater than ``0``:

![cascaded if code](images/image_11.png)

### Dangling ``else`` problem 