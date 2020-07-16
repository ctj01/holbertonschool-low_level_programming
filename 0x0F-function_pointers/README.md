**A useful technique is the ability to have pointers to functions. Their declaration is easy: write the declaration as it would be for the function, say**

**int func(int a, float b);**
**and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer:**

Function Pointers
Remember pointers? We used them to point to an array of chars then make a string out of them. Then things got more interesting when we learned how to control these pointers. Now it is time to do something even more interesting with pointers, using them to point to and call functions.

Why point to a function?
The first question that may come to your mind is why would we use pointers to call a function when we can simply call a function by its name: function(); - that's a great question! Now imagine the sort function where you need to sort an array. Sometimes you want to order array elements in an ascending order or descending order. How would you choose? Function pointers!

Function Pointer Syntax
void (*pf)(int);
I agree with you. This definitely is very complicated, or so you may think. Let's re-read that code and try to understand it point by point. Read it inside-out. *pf is the pointer to a function. void is the return type of that function, and finally int is the argument type of that function.
