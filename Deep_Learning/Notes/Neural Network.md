Initial we will focus on a neural network with one hidden layer. 
![[Pasted image 20260508064122.png]]
The training examples are there in the input layer which go through hidden layers (in this case 1) to finally the output layer which provides us with the required output. The general notation we will follow are:
- $a ^{[0]}$ indicates elements of the input layer. (i.e. $X$)
- $a^{[1]}$ indicates the $1'st$ hidden layer. In this case the hidden layer has 4 elements so we can say $a^{[1]} = [a_1^{[1]}, a_2^{[1]}, a_3^{[1]}, a_4^{[1]}]^T$ 
- Here $a^{[3]}$ is the output layer.
- The hidden and output layer will have parameters associated with them. $w^{[1]}\ (4, 3),\  b^{[1]} \ (4, 1)$ are parameters of the first hidden layer. Similarly $w^{[2]} \ (1,4), b^{[2]} \ (1, 1)$ for the output layer.

This is a two layer neural network. We generally denote the input layer as the `0th` layer. 

![[Pasted image 20260508065318.png]]

Now let us focus on a single node. If we take the first node of the hidden layer we can say we calculate: $$z_1^{[1]} = w_1^{[1]T}x + b_1^{[1]}, \ a_1^{[1]} = \sigma(z_1^{[1]})$$ Similarly for other nodes we calculate,$$z_2^{[1]} = w_2^{[1]T}x + b_2^{[1]}, \ a_2^{[1]} = \sigma(z_2^{[1]})$$$$z_3^{[1]} = w_3^{[1]T}x + b_3^{[1]}, \ a_3^{[1]} = \sigma(z_3^{[1]})$$$$z_4^{[1]} = w_4^{[1]T}x + b_4^{[1]}, \ a_4^{[1]} = \sigma(z_4^{[1]})$$ 
 We can also write this 4 equations as follows; $$z^{[1]} = W^{[1]}x + b^{[1]} \ \ \ \ \ \ \ \ \ \ \  a^{[1]} = \sigma(z^{[1]})$$ $W^{[1]}: (4, 3)$,   $x: (3, 1)$,   $b^{[1]}: (4, 1)$
 Now for the output layer we get: $$z^{[2]} = W^{[2]}a^{[1]} + b^{[2]} \ \ \ \ \ \ \ \ \ \ \  a^{[2]} = \sigma(z^{[2]})$$ 
#### Vectorizing across multiple examples.
For training example one we denote its activation value of the first layer as $a^{[1](1)}$. The matrix of all activation value of layer one is denoted by $A^{[1]}$.  

In general without vectorization we would implement this as:
$$
\begin{aligned}
\textbf{for i = 1 to m: } \\ 
z^{[1](i)} = W^{[1]}x^{(i)} + b^{[1]} \\ 
a^{[1](i)} = \sigma(z^{[1](i)}) \\
z^{[2](i)} = W^{[2]}a^{(i)} + b^{[2]} \\
a^{[2](i)} = \sigma(z^{[2](i)})
\end{aligned}
$$

Now for all training example `m` we can write:
$$\begin{aligned} 
Z^{[1]} = W^{[1]}X + b^{[1]} \\ 
A^{[1]} = \sigma(Z^{[1]}) \\
Z^{[2]} = W^{[2]}A^{[1]} + b^{[2]} \\
A^{[2]} = \sigma(Z^{[2]})
\end{aligned}$$
Where $$Z^{[1]} = 
\begin{bmatrix}
| & | & ... & | \\
z^{[1](1)} & z^{[1](2)} & ... & z^{[1](m)} \\
| & | & ... & |
\end{bmatrix}
$$ $$A^{[1]} = 
\begin{bmatrix}
| & | & ... & | \\
a^{[1](1)} & a^{[1](2)} & ... & a^{[1](m)} \\
| & | & ... & |
\end{bmatrix}
$$ [[Activation functions]] [[Gradient Descent]] [[Random Initialisation]] [[Deep L-layer Neural Network]]  [[Practical Aspects of DL]]  [[Optimization Techniques]] 