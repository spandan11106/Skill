$C$ - Number of classes. 
$n^{[L]} = C$, number of units in the output layer. 

To do this we use the softmax as the activation function in the last layer. $$\text{softmax} = \frac{e^l}{\sum_{j = 1}^C e^i}$$
This give probabilities of the output. Softmax regression generalises logistic regression to $C$ classes. 

The Loss function is given by: $$L(\hat{y}, y) = -\sum_{j = 1}^Cy_jlog(\hat{y_j})$$and cost by : $$J(w^{[1]}, b^{[1]}, ....) = \frac{1}{m}\sum_{i = 1}^m L(\hat{y}^{(i)}, y^{(i)})$$ 
