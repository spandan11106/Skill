When a model is trained as several iterations it might pass the human level performance. After that, the increase in accuracy is less and it becomes somewhat stagnant. The accuracy can not cross a certain theoretical limit known as the Bayer optimal error. 

For task where humans are good at, but the model is worse than human level performance, we can get labelled data from humans. 

If we want to review the  performance of our model, first we see the difference between the human level error and training error, this gives us the avoidable bias. This tells us how much more better we can do on the training set. We look at the training error and the dev set error in order to see how much variance we have. 

In order to reduce avoidable bias we can do the following :
- Train bigger model
- Train longer / better optimization algorithms
- Find a better neural network architecture.

In order to reduce the variance we can do the following :
- More data
- Regularisation
- A better neural network architecture. 