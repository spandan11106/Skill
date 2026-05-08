If the weights are initialise to zero then the value calculated in each layer would be the same. In this case there is no point in having more then one unit if weights are zero. 

That is why we set our weights randomly.

$$w^{[1]} = np.random.randn(2, 2)*0.01$$
$$b^{[1]} = np.zero((2, 1))$$ 