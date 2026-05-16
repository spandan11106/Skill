In deep neural networks, gradients are repeatedly multiplied during backpropagation. If these products become very large, gradients explode. If they become very small, gradients vanish. This makes training unstable or prevents early layers from learning effectively.
$$\frac{\partial L}{\partial W} = \frac{\partial L}{\partial a_n}. \frac{\partial a_n}{\partial a_{n-1}} . \frac{\partial a_{n-1}}{\partial a_{n-2}}$$On way to avoid this is to have good weight initialisation. 

