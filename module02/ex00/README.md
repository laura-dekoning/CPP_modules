🧩 What is a Fixed-Point Number?

A fixed-point number is a way to represent real numbers (with decimals) using integers — by fixing how many bits are used for the fractional part.

In contrast:

Integers → no fractional part.

Floating-point (float, double) → variable position of the decimal point.

Fixed-point → fixed position of the decimal point.

Think of it as scaling all your real numbers by a constant power of two (or ten), storing them as integers, and scaling back when you need to interpret them as real values.

🎯 Why Use Fixed-Point?

You might use fixed-point arithmetic when:

You don’t have hardware floating-point support
(e.g., embedded systems, microcontrollers, GPUs, DSPs).
→ Fixed-point arithmetic is faster and cheaper there.

You need predictable performance and precision
Floating-point math can introduce rounding errors and variable latency.
Fixed-point gives deterministic, repeatable arithmetic.

You want to avoid floating-point rounding issues
Especially when working with money or currency (e.g., $10.05 + $0.10).
→ Store cents as integers instead of floats.

🧮 How It Works

Let’s say you want to store numbers with 2 decimal places (e.g., currency).

You could:

Multiply all numbers by 100 before storing them.

Perform all calculations as integers.

Divide by 100 when you need the real number.

Example
Real Value	Stored as Integer (×100)
3.14	314
1.23	123
10.00	1000

If you add 3.14 + 1.23:

int a = 314;  // 3.14 * 100
int b = 123;  // 1.23 * 100
int sum = a + b; // 437
std::cout << (sum / 100.0) << "\n"; // Output: 4.37

📈 Advantages

✅ Deterministic — no hidden rounding like floating point.
✅ Fast on simple hardware (no FPU required).
✅ Good for monetary values, graphics shaders, and embedded control.
✅ Bitwise control — you can choose exactly how much precision and range you need.

⚠️ Disadvantages

❌ Limited range — large numbers can overflow easily.
❌ Manual scaling — you must carefully handle division and multiplication.
❌ Harder to debug — you must always “remember the scale”.
❌ Not as precise for wide-range scientific calculations.