<h2><a href="https://www.codingninjas.com/studio/problems/frog-jump_3621012?leftPanelTab=0">Frog Jump</a></h2><h3>Easy</h3>
<p><strong>Problem Statment :</strong></p>
<hr><div><p>There is a frog on the 
  '1st' step of an 'N' stairs long staircase. The frog wants to reach the 'Nth' stair. 'HEIGHT[i]' is the height of the '(i+1)th' stair.If Frog jumps from 'ith' 
  to 'jth' stair, the energy lost in the jump is given by absolute value of (HEIGHT[i-1] - HEIGHT[j-1]). If the Frog is on 'ith' staircase,
  he can jump either to '(i+1)th' stair or to '(i+2)th' stair. Your task is to find the minimum total energy used by the frog to reach from '1st' stair to 'Nth' stair.</p>

<p>&nbsp;</p>
<p><strong>Fro example :</strong></p>
<p><code> If the given 'HEIGHT' array is [10,20,30,10], the answer 20 as the frog can jump from 1st stair to <br>2nd stair (20-10|= 10 energy lost) and then a jump from 2nd 
stair to last stair (10-20 = 10 energy lost). So, the total energy lost is 20.  </code></p>
<!-- <img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/symtree1.jpg" style="width: 354px; height: 291px;"> -->
<pre><strong>Contraint </strong>
1 <= T <= 10
1 <= N <= 100000.
1 <= HEIGHTS [i] <= 1000.
  
Time limit: 1 sec
</pre>
<pre><strong>Sample  Input 1:</strong>
2
4
10 20 30 10
3
10 50 10
</pre>

<pre><strong>Sample  Output 1:</strong>
20
0
</pre>
