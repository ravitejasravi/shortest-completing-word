# shortest-completing-word

Given a string licensePlate and an array of strings words, find the shortest completing word in words.

A completing word is a word that contains all the letters in licensePlate. Ignore numbers and spaces in licensePlate, and treat letters as case insensitive. If a letter appears more than once in licensePlate, then it must appear in the word the same number of times or more.

For example, if licensePlate = "aBc 12c", then it contains letters 'a', 'b' (ignoring case), and 'c' twice. Possible completing words are "abccdef", "caaacab", and "cbca".

Return the shortest completing word in words. It is guaranteed an answer exists. If there are multiple shortest completing words, return the first one that occurs in words.


Example 1:

Input: licensePlate = "1s3 PSt", words = ["step","steps","stripe","stepple"]<br>
Output: "steps"<br>
Explanation: licensePlate contains letters 's', 'p', 's' (ignoring case), and 't'.<br>
"step" contains 't' and 'p', but only contains 1 's'.<br>
"steps" contains 't', 'p', and both 's' characters.<br>
"stripe" is missing an 's'.<br>
"stepple" is missing an 's'.<br>
Since "steps" is the only word containing all the letters, that is the answer.

Example 2:

Input: licensePlate = "1s3 456", words = ["looks","pest","stew","show"]<br>
Output: "pest"<br>
Explanation: licensePlate only contains the letter 's'. All the words contain 's', but among these "pest", "stew", and "show" are shortest. The answer is "pest" because it is the word that appears earliest of the 3.
