Activation can be different for different layers. Some of the activation functions are mentioned below. 

**Sigmoid** $$\sigma(z) = \frac{1}{1+e^{-z}}$$Use mostly for the output layer only. 
![[Pasted image 20260509001705.png]]
**Tanh** $$a = tanh(z) = \frac{e^{z}-e^{-z}}{e^{z}+e^{-z}}$$ 
![[Pasted image 20260509001822.png]]
**ReLU - Rectified Linear Unit** $$a = max(0, z)$$ ![[Pasted image 20260509003052.png]]

**Leaky ReLU** $$a = max(0.01z, z)$$
The constant can be `0.01` or learnable parameter of the model. 


![[Pasted image 20260509003519.png]]

#### Why do we need non-linear activation function
If we use a linear activation function then we will get the following: 
$$
\begin{aligned}
a^{[1]} = z^{[1]} = w^{[1]}x + b^{[1]} \\ 
a^{[2]} = z^{[2]} = w^{[2]}a^{[1]} + b^{[2]} \\
\\ 
a^{[2]} = w^{[2]}(w^{[1]}x + b^{[1]}) + b^{[2]} \\ 
a^{[2]} = (w^{[2]}w^{[1]})x + (w^{[2]}b^{[1]} + b^{[2]}) \\ 
a^{[2]} = w'x + b'
\end{aligned}$$
This is just standard logistic regression. Linear activation is used when we have a linear regression problem. 

[[Derivatives of activation functions]] 