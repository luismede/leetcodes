# Permutations of a Word with Repeated Characters

Given a string `s` containing a word (for example `"egg"`), return the total number of distinct permutations that can be formed using all characters of the word.

If the word contains repeated characters, duplicated permutations must be counted only once.

The number of distinct permutations is calculated using:

$$
P_n(a,b,c,\dots) = \frac{n!}{a! \times b! \times c! \times \dots}
$$

Where:

- `n` is the total number of characters in the word
- `a, b, c...` are the frequencies of repeated characters

---

## Example 1

### Input

```txt
s = "egg"
```

### Output

```txt
3
```

### Explanation

The word `"egg"` has 3 letters, where `'g'` appears 2 times.

$$
\frac{3!}{2!} = 3
$$

Distinct permutations:

```txt
egg
geg
gge
```

---

## Example 2

### Input

```txt
s = "programar"
```

### Output

```txt
30240
```

### Explanation

The word has 9 letters.

Repeated characters:

- `'r'` appears 3 times
- `'a'` appears 2 times

$$
\frac{9!}{3! \times 2!} = \frac{362880}{12} = 30240
$$

---

## Constraints

- `1 <= s.length <= 20`
- `s` contains only alphabetic characters
- The result fits into a 64-bit integer

---

## Follow-up

Can you solve it without generating all permutations?
