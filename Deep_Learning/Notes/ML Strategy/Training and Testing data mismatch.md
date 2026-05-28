If there is a mismatch in the distribution of the data in the training and the test sets, we might find that the model does not perform well on the test data. We must have a similar distribution for the model to perform well. 

If the training error is low or close to human level performance, but the dev set error is quite high, then the reason might be that the dev set has a different distribution from the training set. 

 One way to solve this issue is to create a `training-dev` set, where the distribution is same as the same training data. 
 - If the model performs well on the training data but not good on the `training-dev` data, then we have a high variance problem. 
 - If the model performs well on both the training and `training-dev` data, but not so good on the `dev` set, then this is a data mismatch problem. 

#### Addressing Data Mismatch
- Carry out manual error analysis to try to understand difference between training and `dev/test` sets
- Make training data more similar or collect more data similar to `dev/test` set
- Artificial data synthesis