Gale and Shapley Algorithm
----------------------------

Given the list of males and females along with their complete preference
list. One should output the list of couples matched such that
there is no blocking couple or pair.

Specification
-------------
```
main <input-file> <out-file>
```
There should be nothing printed on the terminal or contents of out-file
in the following order. 

 
### input specifiation
It must contains number of couples in the first line. Followed by two n x n 
matrices where the first matric represents the men's preference list,the
next is women preference list separated by extra line break. 

```
n

1 	2	 3	... n
.
.
.
.
1 	2	 3	... n


1 	2	 3	... n
.
.
.
.
1 	2	 3	... n
```

example
```
4
4 1 2 3
2 3 1 4
2 4 3 1
3 1 4 2

4 1 3 2
1 3 2 4	
1 2 3 4	
4 1 3 2	
```

### output specification or out-file
It has man and woman  pair is each n lines

eg
```
1 4
2 3
3 2
4 1
```
