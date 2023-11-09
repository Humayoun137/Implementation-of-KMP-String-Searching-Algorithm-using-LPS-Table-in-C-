# Implementation-of-KMP-String-Searching-Algorithm-using-LPS-Table-in-C++


The Knuth-Morris-Pratt (KMP) algorithm is a string searching algorithm that efficiently searches for occurrences of a pattern within a text. It works by precomputing a Longest Prefix Suffix (LPS) table that helps skip characters in the text when a mismatch occurs. This reduces the number of character comparisons, making the algorithm more efficient than traditional brute-force methods.
Here's a short description of implementing the KMP algorithm using the LPS table in C/C++:
Preprocessing (Building the LPS Table):
First, compute the LPS table for the pattern you want to search.
Initialize two pointers, i and j, both set to 0. i represents the index of the pattern, and j represents the length of the longest prefix suffix at index i.
Iterate through the pattern from index 1 to the end:
If pattern[i] equals pattern[j], set LPS[i] to j+1 and increment both i and j.
If pattern[i] and pattern[j] do not match and j is not 0, update j to LPS[j-1].
If pattern[i] and pattern[j] do not match and j is 0, set LPS[i] to 0 and move to the next index i.
Searching (Using the LPS Table to Find Pattern Occurrences in the Text):
Initialize two pointers, i and j, both set to 0. i represents the index of the text, and j represents the index of the pattern.
Iterate through the text and pattern:
If text[i] and pattern[j] match, increment both i and j.
If j reaches the end of the pattern, a pattern occurrence is found. Handle it accordingly (e.g., print the starting index, count occurrences, etc.).
If text[i] and pattern[j] do not match and j is not 0, update j to LPS[j-1].
If text[i] and pattern[j] do not match and j is 0, increment i.
This implementation of the KMP algorithm using the LPS table significantly reduces the number of character comparisons, making it an efficient solution for string searching tasks.


