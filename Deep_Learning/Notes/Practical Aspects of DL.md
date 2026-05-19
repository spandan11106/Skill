In we have a small dataset then it is reasonable to do a `60-20-20` split of the data. We use the `60%` data for training and `20%` for dev testing. If your model after multiple iterations performs well on the dev set then we test it on the test of the `20%` data called the test set. 

If we have a very big data set then we can also test it on a small split of data. For data in the range of a million we use the `98-1-1` or `99-0.5-0.5` split. 

#### Bias/Variance

Bias - It is the  measure of how far the model's predictions are from the true relationship in the data. A high-bias model makes strong simplifying assumptions and fails to learn the underlying patterns properly. This is called **underfitting**.

Variance - It measures how much the model’s predictions change when trained on different datasets. A high-variance model learns the training data _too well_, including noise and random fluctuations. This is called **overfitting**.
$$\text{Total Error = } \text{Bias}^2 + \text{Variance + Irreducible Noise}$$
If a model has high bias or high variance depends on the base level error which is expected.  

**If it has high bias :**
- Train data performance is not good
- Train for more iterations
- Train of a larger network

**If it has high variance :**
- Test it to perform on dev set data
- Get more data
- Regularization 

[[Regularization]] [[Normalising Inputs]] [[Gradients]] 