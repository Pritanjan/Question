
Given a string contains only "B"s and "G"s indicated a sequence of students, while "B" means a boy and "G" means a girl. Write a function called minSwaps(students, k) to calculate the minimum swaps need to make k girls sitting together. Note that you could only swap two students if they are adjacent.

Example 1:

Input: students = "BGGBBG", k = 3
Output: 2
Example 2:

Input: students = "BGGBGBGBBGGG", k = 4
Output: 2


<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
<strong>Output:</strong> [1,2,2,3,5,6]
<strong>Explanation:</strong> The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [<u>1</u>,<u>2</u>,2,<u>3</u>,5,6] with the underlined elements coming from nums1.
</pre>
