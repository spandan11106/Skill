We have several hyper-parameters while training a neural network. 
- $\alpha$ : Learning rate decay 
- $\beta$ : Momentum term 
- $\beta_1$ : Adam parameter for momentum term ($0.9$)
- $\beta_2$ : Adam parameter for RMSprop ($0.999$)
- $\epsilon$ : Parameter to avoid divide by zero error ($10^{-8}$)
- $L$ : Number of layers
- $n_l$ : Number of units in a hidden layer
- Learning rate decay
- Mini batch size

We plot in a graph the hyper-parameters we want to tune randomly and then try out their values. If we find 3-4 points close to each other working well, we try to zoom in and try more value from that region. 

**Using an Appropriate Scale to pick Hyper-parameters :** 
For the hyper-parameter $\alpha$ value usually lie in the range of $(0.00001, 1)$. If we want to choose certain value from this, it is better to use the `log` scale. If any hyper-parameter in general ranges from $(10^{a}, 10^{b})$ then we can choose the parameter as $10^{r}$ where $r \in [a, b]$.

For hyper-parameters in the range $(0.9, 0.99999)$ i.e. $(a, b)$ we choose then as $(1 - 10^{r})$ where $r \in [log(1 - b), log(1 - a)]$. 

