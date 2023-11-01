C - Recursion
What is recursion
How to implement recursion
In what situations you should implement recursion
In what situations you shouldn’t implement recursion


Imagine you're reading a book, and you come across a word you don't know. You decide to look it up in a dictionary. While searching for that word, you come across another word you don't understand. Instead of continuing with your original task, you decide to look up this new word first. If this happens multiple times, you'd be diving deeper and deeper into the dictionary, looking up words within words.

Recursion in programming is similar. It's like a function (a set of instructions) that, under certain conditions, decides to pause its current task and call itself to solve a smaller version of its problem. Once it solves this smaller problem, it returns to where it left off and continues. It keeps doing this until it doesn't need to call itself anymore.

Using our dictionary analogy:

Base Case: You find the word you're looking for in the dictionary, and you don't need to look up any more words. You can now go back to reading your book.

Recursive Case: You're still looking for the word, but along the way, you need to pause and look up another word.

In the real world, one practical example of recursion is the "Matryoshka" or Russian nesting dolls. You open one doll and find another smaller doll inside, and when you open that, there's yet another smaller doll, and so on. The act of opening each doll to see if there's another doll inside is like a function calling itself. The smallest doll, which doesn't open to reveal another, represents the base case – the point at which the process stops.

In essence, recursion is a "divide and conquer" approach. Instead of tackling a big problem head-on, you break it down into smaller, more manageable problems until you reach a point where the problem is straightforward to solve (the base case). Once you solve that small problem, you can use its solution to help solve the bigger problem you broke down, and so on, until the original problem is solved.