# LeetCode-Algorithm-Problem-171-Excel-Sheet-Number
Given a column title as appear in an Excel sheet, return its corresponding column number.

For Example;

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...

The first step we need to take is every 27th number is causing the change digit(or adding new digit). Think about decimal system every 10th number is causing a change. So this question, nothing is different, our system is on base 26.

So basically we need to get the digits number by the size of string then rest is computation.

But in order to boost the speed of calculation, I am going to do ASCII code conversion. Because in ASCII code system A=65 and Z=90 and, the -64 of the value will give me the decimal value, then rest is similar like binary to decimal conversion.

Hope you have enjoyed it.

Thanks.
