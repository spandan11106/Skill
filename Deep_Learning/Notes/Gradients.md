In deep neural networks, gradients are repeatedly multiplied during backpropagation. If these products become very large, gradients explode. If they become very small, gradients vanish. This makes training unstable or prevents early layers from learning effectively.
$$\frac{\partial L}{\partial W} = \frac{\partial L}{\partial a_n}. \frac{\partial a_n}{\partial a_{n-1}} . \frac{\partial a_{n-1}}{\partial a_{n-2}}$$On way to avoid this is to have good weight initialisation. 

#### Weight Initialisation for Deep Networks
Let us take us consideration for a single unit. $$z = w_1x_1 + w_2x_2 \ + \ .... \ + \ w_nx_n + b$$ If we have a particular $x_i$ having a larger range then it would be optimal to select a smaller $w_i$ so that we do not get the issue of exploding gradients. Similarly, if we have $x_i$ in the smaller range then optimally we must take $w_i$ in the large range so that we do not get the issue of vanishing gradients. 

For this reason we take variance of $w_i$ as follows: $$var(w_i) = \frac{2}{n}$$ $$w^{[l]} = \text{np.random.randn(shape)}*\text{np.sqrt}\bigg(\frac{2}{n^{[l-1]}}\bigg)$$This is assuming that we assume a $\text{Relu}$ activation function. 

When we have the $\text{tanh}$ activation function we use the following formula:  $$w^{[l]} = \text{np.random.randn(shape)}*\text{np.sqrt}\bigg(\frac{1}{n^{[l-1]}}\bigg)$$This is called Xavier initialisation. 

In some cases this form of the formula is also used :  $$w^{[l]} = \text{np.random.randn(shape)}*\text{np.sqrt}\bigg(\frac{2}{n^{[l-1]} + n^{[l]}}\bigg)$$  
[[Gradient Checking]] 