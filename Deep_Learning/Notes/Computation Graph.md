We will use a simple example to understand this $$J(a, b, c) = 3(a + bc)$$To compute $J$ we will go compute $u = bc$, $v = a+u$ and $J = 3v$. That is we go from left to right. This is know as the forward pass.   

We use the backward pass in order to calculate the derivatives. If we want to calculate the derivative of $J$ we go from right to left as follow. $$\frac{dJ}{dv} = 3$$ $$\frac{dJ}{da} = \frac{dJ}{dv} \frac{dv}{da}$$ $$\frac{dJ}{db} = \frac{dJ}{dv} \frac{dv}{du} \frac{du}{db}$$ Basically chain rule. 
 