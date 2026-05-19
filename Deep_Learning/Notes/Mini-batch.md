Vectorization allows to efficiently compute on $m$ examples. But if $m$ is very large then this implementation also becomes slow. We divide over large training set into several parts called mini-batches. $$X = \bigg[ X^{[1]}, X^{[2]}, X^{[3]}, \ .... \ X^{[1001]} \ ...... \ X^{[3000]} \ ...... \ X^{[m]}\bigg]$$
If we have `m = 5000000`, then we can have `5000` mini-batches with `1000` training examples each. $$X = \bigg[ X^{\{1\}}, X^{\{2\}}, \ ...... \ X^{\{5000\}}\bigg]$$Here $X^{\{1\}}$ denotes the first mini-batch. It has a dimension of $(n_x, 1000)$. We do the same for $Y$. 

**Gradient descent :**
For $t = 1 \ \text{to} \ 5000$ 
- Forward prop on $X^{\{t\}}$ $$\begin{aligned} 
Z^{[1]} = W^{[1]}X^{\{t\}} + b^{[1]} \\ 
A^{[1]} = g^{(1)}(Z^{[1]}) \\
.......... \\
A^{[l]} = g^{[l]}(Z^{[l]}) 
\end{aligned}$$ Here we use vectorized approach but only for the example in the mini-batch

- Compute cost $$J^{\{t\}} = \frac{1}{1000}\sum_{i=1}^lL(\hat{y^{(i)}}, y^{(i)}) + \frac{\lambda}{2.1000} \sum_l \|w^{[l]}\|^2$$ 
- Back prop to find the gradients w.r.t. $J^{\{t\}}$ 
- Then we update the weights.

This is one epoch of training. 

- If mini-batch size is `m` then it is simply batch gradient descent. Its take too long to take a single step
- If mini-batch size is `1` then it is known as Stochastic gradient descent. Here a single bad example might lead to a step in the wrong direction.

**Choosing your mini-batch size :**
- If we have a small training set, we just run mini-batch gradient descent.
- Typical mini-batch sizes are - 64, 128, 256 or powers of 2. 
- Make sure that the mini-batch fit in the CPU/GPU memory

