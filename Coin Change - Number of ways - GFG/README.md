# Coin Change - Number of ways
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You have an infinite supply of coins, each having some value. Find out the number of ways to use the coins to sum-up to a certain required value.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">value = 4
numberOfCoins = 3
coins[] = {1,2,3}
<strong>Output: </strong>4<strong>
Explanation: </strong>We need to make the change
for value = 4. The denominations are
{1,2,3} Change for 4 can be made:
1+1+1+1
1+1+2
1+3
2+2
So, as it is evident, we can do this in
4 ways.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">value = 10
numberOfCoins = 4
coins[] = {2,5,3,6}
<strong>Output: </strong>5</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">This is a function problem where you've to complete the funcion <strong>numberOfWays ()</strong>. You are given an amount denoted by <strong>value</strong>. You are also given an array of coins. The array<strong> </strong>contains the <strong>denominations </strong>of the given coins. You need to return the <strong>number of ways</strong> you can make the change for <strong>value </strong>using the coins of given denominations. Also, keep in mind that you have an&nbsp;<strong>infinite supply</strong> of coins.<br>
<strong>Note:&nbsp;</strong>&nbsp;Try not to editing the part of the code provided to you in the function. Just complete the function as it has been described.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Number of Coins * Value).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Value).</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 &lt;= value &lt;= 10<sup>3</sup><br>
1 &lt;= numberOfCoins &lt;= 10<sup>3</sup><br>
1 &lt;= coins<sub>i</sub> &lt;= 1000</span></p>
 <p></p>
            </div>