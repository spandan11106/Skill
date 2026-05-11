**Notations:** 
- $L$ is used to denote the total number of layers.
- $n^{[l]}$ to denote number of units in  layer $l$ 
- $a^{[l]}$ to denote activation in layer $l$ 
- $a^{[l]} = g^{[l]}(z^{[l]})$
- $w^{[l]}$ and $b^{[l]}$ are weights and bias for $z^{[l]}$ 
- $a^{[0]} = x$ and $a^{[L]} = \hat{y}$ 

#### Forward Propagation 
![[Pasted image 20260510182128.png]]
For a single training example $x$: 
- Layer 1 $$z^{[1]} = w^{[1]}x + b^{[1]} \ \ \ \ \ \ \ \ a^{[1]} = g^{[1]}(z^{[1]})$$
- Layer 2 $$z^{[2]} = w^{[2]}a^{[1]} + b^{[2]} \ \ \ \ \ \ \ a^{[2]} = g^{[2]}(z^{[2]})$$ 
- Layer 3 $$z^{[3]} = w^{[3]}a^{[2]} + b^{[3]} \ \ \ \ \ \ \ a^{[3]} = g^{[3]}(z^{[3]})$$ 
- Layer 4 $$z^{[4]} = w^{[4]}a^{[3]} + b^{[4]} \ \ \ \ \ \ \ a^{[4]} = g^{[4]}(z^{[4]})$$
In general for a layer $l$ we can say that: $$z^{[l]} = w^{[l]}a^{[l-1]} + b^{[l]} \ \ \ \ \ \ \ \ \ a^{[l]} = g^{[l]}(z^{[l]})$$ 
This for a single training example. For all training example we have the general for as, $$Z^{[l]} = w^{[l]}A^{[l-1]} + b^{[l]} \ \ \ \ \ \ \ \ \ \ A^{[l]} = g^{[l]}(Z^{[l]})$$ In order to calculate this we use a `for loop` in code. 

**Matrix Dimensions :** 
For layer 1: $$z^{[1]} = w^{[1]}x + b^{[1]}$$ Here $z^{[1]} \  \text{is a} \ (n^{[1]}, 1)$, $w^{[1]} \  \text{is a} \ (n^{[1]}, n^{[0]})$, $x \  \text{is a} \ (n^{[0]}, 1)$ matrix. The dimension of the weights $w$ in general for a layer $l$ can be written as: $$w^{[l]}: (n^{[l]}, n^{[l-1]})$$ The bias $b$ has the same dimension as $z$, which in general can be written as $(n^{[l]}, 1)$. 

Now for a vectorized implementation we have : $$Z^{[1]} = W^{[1]}X + B^{[1]}$$where $Z^{[1]} \ \text{is a} \ (n^{[1]}, m)$, $W^{[1]} \ \text{is a} \ (n^{[1]}, n^{[0]})$, $X \ \text{is a} \ (n^{[0]}, m)$ and $b^{[1]} \ \text{is a} \ (n^{[1]}, 1)$. While adding $b$
to the product of it get broadcasted.
In general we have $$Z^{[l]}, A^{[l]} : (n^{[l]}, m)$$ 
[[Forward and Backward propagation]]  [[Hyperparameters]]  