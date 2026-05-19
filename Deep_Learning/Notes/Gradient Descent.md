Parameters are: $w^{[1]}, b^{[1]}, w^{[2]}, b^{[2]}$ each having dimensions $(n^{[1]}, n^{[0]})$ , $(n^{[1]}, 1)$ , $(n^{[2]}, n^{[1]})$ , $(n^{[2]}, 1)$. 

We will also have a cost function. For now we are assuming we are doing binary classification. $$J($w^{[1]}, b^{[1]}, w^{[2]}, b^{[2]}) = \frac{1}{m}\sum_{i = 1}^m L(\hat{y} \ ,\  y)$$ In order to find the parameter we need to perform gradient descent. 
$$\text{Repeat } =  \  
\begin{cases} 
\text{Compute predictions} \ \ \hat{y}, \ i = 1, 2 \ ....m \\ 
\large dw^{[1]} = \frac{\partial J}{\partial w^{[1]}} \ , \ db^{[1]} = \frac{\partial J}{\partial b^{[1]}} \ \ ......\\
\large w^{[1]} = w^{[1]} - \alpha \partial w^{[1]} \\
\large b^{[1]} = b^{[1]} - \alpha \partial b^{[1]} \\
\large w^{[2]} = w^{[2]} - \alpha \partial w^{[2]} \\
\large b^{[2]} = b^{[2]} - \alpha \partial b^{[2]} 
\end{cases}$$ 
 We can divide this into forward and backward propagation as follows:

| Forward propagation                          | Backward propagation                                                 |
| -------------------------------------------- | -------------------------------------------------------------------- |
| $Z^{[1]} = W^{[1]}X + b^{[1]}$               | $dZ^{[2]} = A^{[2]} - Y$                                             |
| $A^{[1]} = g^{[1]}Z^{[1]}$                   | $dW^{[2]} = \frac{1}{m}dZ^{[2]}A^{[1]T}$                             |
| $Z^{[2]} = W^{[2]}A^{[1]} + b^{[2]}$         | $db^{[2]} = \frac{1}{m} np.sum(dZ^{[2]}, axis = 1, keepdims = True)$ |
| $A^{[2]} = g^{[2]}Z^{[2]} = \sigma(Z^{[2]})$ | $dZ^{[1]} = W^{[2]T}dZ^{[2]} * g'^{[1]}(Z^{[1]})$                    |
|                                              | $dW^{[1]} = \frac{1}{m}dZ^{[1]}X^T$                                  |
|                                              | $db^{[1]} = \frac{1}{m}np.sum( dZ^{[1]}, axis = 1, keepdims = True)$ |

$$\{x, W^{[1]}, b^{[1]}\} \longrightarrow \boxed{z^{[1]} = W^{[1]}x + b^{[1]}} \longrightarrow \boxed{a^{[1]} = \sigma(z^{[1]})} \longrightarrow \boxed{z^{[2]} = W^{[2]}a^{[1]} + b^{[2]}} \longrightarrow \boxed{a^{[2]} = \sigma(z^{[2]})} \longrightarrow \boxed{L(a^{[2]}, y)}$$ 
