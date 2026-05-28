This is a way in which we train the model for a task and then use its learning for some other task. 

A example is we train a model on the task of image recognition. Then we can use this same model to for radiology diagnosis, by just randomly initialising the weights of the output layer and retraining the network. We can also do this by just training the last two layers also. If we retrain all the parameters of the neural network again then the process of training on image recognition is known as `pre-training`  and then on radiology diagnosis is known as fine tuning.

This technique makes sense when we have lots of data on the problem we are transferring from and less data on the problem we are transferring to. Also the following should be satisfied :
- Task `A` and `B` have the same input `x`
- Low level features from `A` could be helpful for learning `B`

#### Multi task Learning
We train a network to predict multiple values. I we have a similar task of classification we could do re-train this network to work on that. 
- Training on a set of tasks that could benefit from having shared lower-level features. 
- Usually the amount of data you have for each task is quite similar. 
- When we can train a big enough neural network to do well on all the tasks. 

