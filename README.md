*This project has been created as part of the 42 curriculum by luozguo.*

# push_swap

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum.  
The goal is to sort a list of integers in ascending order using two stacks (`A` and `B`) and a restricted set of allowed operations.

The program takes integers as command-line arguments and outputs a sequence of operations that sorts the stack. The challenge lies in understanding general concept of algorithms and designing an efficient solution under strict constraints.

This implementation focuses on robust input parsing, correct stack manipulation, and a radix-sort-based strategy for larger inputs.

---

## Instructions

### Compilation

```bash
make all
```

### Execution

```bash
./push_swap 3 1 2
```

```bash
./push_swap "3 1 2"
```

To verify correctness with the checker (Linux version):

```bash
ARGS="3 1 2"
./push_swap $ARGS | ./checker_linux $ARGS
```

Expected output:

```
OK
```

### Memory Check

```bash
valgrind --leak-check=full ./push_swap 3 1 2
```

---

## Resources

* 42 push_swap subject
  [https://42-cursus.gitbook.io/guide/2-rank-02/push_swap](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap)

* Radix Sort (LSB-first)
  [https://en.wikipedia.org/wiki/Radix_sort](https://en.wikipedia.org/wiki/Radix_sort)

* Stack data structure
  [https://en.wikipedia.org/wiki/Stack_(abstract_data_type)](https://en.wikipedia.org/wiki/Stack_%28abstract_data_type%29)

* Valgrind documentation
  [https://valgrind.org/docs/manual/manual.html](https://valgrind.org/docs/manual/manual.html)

### AI Usage

AI tools (ChatGPT) were used as a learning and debugging aid, mainly to:

* clarify algorithmic concepts (radix sort, normalization),
* reason about parsing edge cases and memory management,
* interpret compiler and Valgrind output.
* generate function prototypes.
* refine documentation.

All code was reasonalized and tested manually by the author.