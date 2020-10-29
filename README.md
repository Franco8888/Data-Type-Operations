# Data-Type-Operations
This is a QT(C++) GUI application that implement addition and subtraction operations of different data types. 

Addition and subtraction is allowed on the following data types: Integers, Strings and String Lists. 

The following 
•	Integer operations: Addition operations corresponds to addition in mathematics and subtraction operations corresponds to subtraction in mathematics. 
•	String operations: Addition operations will concatenate the strings and the subtraction operations will the remove all occurrences of the latter string from the former string. E.g. “sdadf”-“df”=”sa”
•	String List Operations: Addition operations and subtraction operations corresponds to the union and difference operations in set theory respectively. E.g. List1 = {"A", "B", "C"} List2 = {"C", "D" and "E"}. List1+List2 = {"A", "B", "C", "D", "E"} and List1-List2={"A","B"}

The application uses a Factory Method Design Pattern to decide which types of operations to execute. Both factories are implemented as Singleton design patterns. 

