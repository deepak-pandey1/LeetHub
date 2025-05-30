<h2><a href="#">Print Pattern</a></h2>
<h3>Easy</h3>
<hr>
<p>Print a sequence of numbers starting with <code>n</code>, without using a loop. Replace <code>n</code> with <code>n - 5</code>, then repeat <code>n−5</code> until <code>n ≤ 0</code>. After that, replace <code>n</code> with <code>n + 5</code> repeatedly until <code>n</code> regains its initial value.</p>

<p>Complete the function <code>pattern(n)</code> which takes <code>n</code> as input and returns a list containing the pattern.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 16
<strong>Output:</strong> [16, 11, 6, 1, -4, 1, 6, 11, 16]
<strong>Explanation:</strong> The value decreases until it becomes ≤ 0, then increases back to the original value.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 10
<strong>Output:</strong> [10, 5, 0, 5, 10]
<strong>Explanation:</strong> It follows the same logic as above.
</pre>

<p>&nbsp;</p>
<p><strong>Expected Time Complexity:</strong> O(n)</p>
<p><strong>Expected Auxiliary Space:</strong> O(n)</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
  <li><code>-10<sup>5</sup> ≤ n ≤ 10<sup>5</sup></code></li>
</ul>
