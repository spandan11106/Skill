
**Data augmentation :** 
- Using the same training example using some modifications. 
![[Pasted image 20260515162614.png]]


**Early Stopping :**
For this we plot the training and dev set error for each iteration. In general the training loss goes down for every iteration whereas the dev set error plot is in the for of a quadratic i.e. it decreases and then increases. In early stopping we stop the training at the iteration where the dev set error is the least. 
- This method is not as effective as `L2` regularization. 