# Strings

## Common Patterns

### 1. Two Pointers
- **Use Case**: Palindrome checking, string reversal, character matching
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Example Problems**: Valid Palindrome, Reverse String, Is Subsequence

### 2. Sliding Window
- **Use Case**: Substring problems with constraints, anagram detection
- **Time Complexity**: O(n)
- **Space Complexity**: O(k) where k is character set size
- **Example Problems**: Minimum Window Substring, Longest Substring Without Repeating Characters

### 3. Hash Map/Set
- **Use Case**: Character frequency, anagram problems, duplicate detection
- **Time Complexity**: O(n)
- **Space Complexity**: O(k) where k is unique characters
- **Example Problems**: Valid Anagram, Group Anagrams, First Unique Character

### 4. String Building
- **Use Case**: String manipulation, concatenation, pattern generation
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)
- **Example Problems**: String Compression, Reverse Words in String

### 5. KMP Algorithm
- **Use Case**: Pattern matching, substring search
- **Time Complexity**: O(n + m)
- **Space Complexity**: O(m)
- **Example Problems**: Implement strStr(), Repeated Substring Pattern

## Quick Reference

| Pattern | Time | Space | Key Technique |
|---------|------|-------|---------------|
| Two Pointers | O(n) | O(1) | Compare from both ends |
| Sliding Window | O(n) | O(k) | Maintain character frequency map |
| Hash Map | O(n) | O(k) | Count character occurrences |
| String Building | O(n) | O(n) | Build result incrementally |
| KMP | O(n+m) | O(m) | Preprocessing for efficient matching |

## Example Solutions

Solutions in this folder demonstrate these patterns with clear comments and complexity analysis.
