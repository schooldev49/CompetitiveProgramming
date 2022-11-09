
 <ins>1.  Which of the following code segments is equivalent to the code below?</ins>
 ```java
if (x >= 1) x = x * 3;  
if (x > 3) x = 0;  
```

A:
```java

x = 0; 
```

B: 
```java
if (x > 1) x = 0; 
```
C: 
```java
if (x > 3) x = 0
```
D: 
```java
if (x >=1) x = 0; 
```
<b>E: None of the above</b>
<hr>
<ins> 2. Consider the following class definitions. </ins>

```java
public class Student { 
  public String getFood() { 
     return "Pizza"; 
  } 
  public String getInfo()  {  
     return "Studying"; 
  } 
} 
public class GradStudent extends Student { 
  public String getFood() { 
     return "Taco"; 
  } 
  public String getInfo() { 
     super.getInfo(); 
     return "Eating"; 
  } 
} 
``` 
