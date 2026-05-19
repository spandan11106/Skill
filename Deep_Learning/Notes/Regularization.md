Let us consider Logistic regression. We have to reduce the cost function and find the parameters $w \in \mathbb{R}^{n_x}$ and $b \in \mathbb{R}$ where it is minimum
$$J(w, b) = \frac{1}{m} \sum_{i = 1}^m L(\hat{y}^{(i)}, y^{(i)}) + \frac{\lambda}{2m}\|w\|_2^2$$ Where the extra term is known as $L_2$ regularization: $$\|w\|_2^2 = \sum_{j = 1}^{n_x} w_j^2 = w^Tw$$ We could also use $L_1$ regularization which is given by: $$\frac{\lambda}{2m} \sum_{j = 1}^{n_x} |w_j| = \frac{\lambda}{2m} \|w\|_1$$ $\lambda$ is the regularization parameter. 

In Neural Networks we define this as follows $$J(w^{[1]}, b^{[1]}, .... , w^{[l]}, b^{[l]}) = \frac{1}{m} \sum_{i = 1}^{m}L(\hat{y^{(i)}}, y^{(i)}) + \frac{\lambda}{2m} \sum_{l = 1}^L \|w^{[l]}\|^2_F$$ where: $$\|w^{[l]}\|^2 = \sum_{i=1}^{n^{[l]}} \sum_{j = 1}^{n^{[l-1]}} (w^{[l]}_{i, j})^2$$
is called the Frobenius norm. Sometimes regularization is also called as weight decay. We decrease the weight by $\frac{\alpha \lambda}{m}$.  

**Why does Regularization Reduce Overfitting -**
- It adds a penalty or constraint during training. 
- Large weights make neutral networks highly sensitive to tiny input changes. Regularization make the function smooth, reduce sensitivity. 

[[Dropout Regularization]] [[Other regularization methods]] 