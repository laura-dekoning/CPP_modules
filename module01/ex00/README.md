
🧠 Stack allocation
When you declare an object "normally", like this:
	Zombie z("Zee");
	z.announce();
It's created on the stack.
-	The memory is automatically freed when the variable goes "out of cope" (e.g., when the function ends).
-	You don't need to call "delete".
-	Very fast, and safe (no memory leaks).
✅Good for: Objects that only need to exist temporarily, inside a function.

💾 Heap allocation
When you use "new", like this:
	Zombie* z = newZombie("Zee");
	z->announce();
	delete z;
It's created on the heap.
-	The memory "persists" until you explicitly call -delete-.
-	You control its lifetime.
-	Slower to allocate, and can cause memory leaks if you forget to delete it.
✅Good for: Objects that need to outlive the current scope, or be share across different parts of your program.

⚖️ When to use which
Situation							Type		Why

You only need the zombie briefly	Stack		Fast, automatic cleanup
You want the zombie to persist 		Heap		Manual control over lifetime
after the function ends				Heap		Needed for flexible memory management
You want to manage multiple 
zombies dynamically
(e.g. array or list)
You’re debugging and want to		Either		Destructor message helps you see when it dies
ensure destruction is visible

🧠 Key takeaway

-	Stack variables die automatically at the end of their scope.
-	Heap variables die when you explicitly delete them.
-	The scope determines who dies when — not the order you created them.