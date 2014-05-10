Project Description: 

Part of my CS221 Data Structures Project #2 

Given seven 'mystery' data structures, students are to determine the data structure by constrasting each structure's asymptotic complexity. 
To determine the complexity of each structure, I created the following programs which execute Insert, Find, or Remove commands. The mystery structures are enabled to only respond to these commands. After each I, F, or R, command, a number (i.e. 1, 2, 3, etc) must be called. The number is the hypothetical value associated with the command. 

Example:  I 5 (insert a 5) 

Process: 

By developing programs which execute specific commands consectively I was able to exploit the worst-case performances of the structures. 

Example: I hypothesized that mystery file 5 was a Binary-Search-Tree, so I created a program (ConsecI) which inserted 1, then 2, then 3... which returned a set a numeric data. Once I graphed the data, it revealed a quadratic relationship, which is the worst-case behaviour of a BST when inserts are done consecutively (right or left heavy tree) 

The other programs in this repo are of a similar flavour, i.e. descendI executes commands in a descending order. 
 

Enjoy ze code!
