For a layer $l$, the computation take place as follows: 
$$a^{[l-1]} \Longrightarrow \boxed{w^{[l]}, b^{[l]}} \Longrightarrow a^{[l]}$$This is the forward function which stores $z^{[l]}$ in the cache. Later in backward function the following happens: $$da^{[l-1]} \Longleftarrow \boxed{w^{[l]}, b^{[l]}, dz^{[l]}} \Longleftarrow da^{[l]}$$ This step gives us $dw^{[l]}$ and $db^{[l]}$ 

Therefore for a $L$ layer neural network it goes as: $$a^{[0]} \Longrightarrow \boxed{w^{[1]}, b^{[1]}} \Longrightarrow a^{[1]} \Longrightarrow \boxed{w^{[2]}, b^{[2]}} \Longrightarrow a^{[2]} \ ...... \ \boxed{w^{[L]}, b^{[L]}} \Longrightarrow a^{[L]} = \hat{y}$$ At each step $z, b, w$ values are cached. 
$$\boxed{w^{[1]}, b^{[1]}, dz^{[1]}} \Longleftarrow da^{[1]}\Longleftarrow \boxed{w^{[2]}, b^{[2]}, dz^{[2]}} \Longleftarrow da^{[2]}\Longleftarrow \ ....... \ da^{[L-1]} \Longleftarrow \boxed{w^{[L]}, b^{[L]}, dz^{[L]}} \Longleftarrow da^{[L]}$$
At each step value of $dw$ and $db$ are calculated. This is the procedure for one training step. After this the weights get updated. $$w^{[l]} = w^{[l]} - \alpha dw^{[l]}$$
$$b^{[l]} = b^{[l]} - \alpha db^{[l]}$$ 
#### Implementation of Forward propagation for layer $l$ 
Input - $A^{[l-1]}$
Output - $A^{[l]}$. 
Cache - $Z^{[l]}, W^{[l]}, b^{[l]}, A^{[l-1]}$ 
$$Z^{[l]} = W^{[l]}A^{[l-1]} + b^{[l]}$$ $$A^{[l]} = g^{[l]}(Z^{[l]})$$ 
#### Implementation of Backward propagation for layer $l$ 
Input - $dA^{[l]}$ 
Output - $dA^{[l-1]}, dW^{[l]}, db^{[l]}$ 
$$dZ^{[l]} = dA^{[l]}*g^{[l]'}(Z^{[l]})$$
 $$dW^{[l]} = \frac{1}{m}(dZ^{[l]}A^{[l-1]T})$$ $$db^{[l]} = \frac{1}{m}  \ \textbf{np.sum}(dZ^{[l]}, \text{axis = 1, keepdims = True})$$ $$dA^{[l-1]} = W^{[l]T}dZ^{[l]}$$ Note : * denotes element wise multiplication 
 