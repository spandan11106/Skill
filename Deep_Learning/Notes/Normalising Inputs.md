- We zero out the mean of the training dataset. 
- Then we normalise the variance. 
$$\mu = \frac{1}{m}\sum_{i = 1}^{m} x^{(i)} \ \ \ \ \ \ \ \ \ \ \ \ x= x - \mu \tag{1}$$ 
$$\sigma^2 = \frac{1}{m}\sum_{i = 1}^{m} (x^{(i)})^2 \ \ \ \ \ \ \ \ \ \ \ \ x = x/\sigma \tag{2}$$We use the same $\mu$ and $\sigma$ to normalise the test data. 
![[Pasted image 20260515163743.png]]

To run gradient descent on unnormalised data we will have to use it small learning rate so that it does not oscillate.   

[[Batch Norm]] 