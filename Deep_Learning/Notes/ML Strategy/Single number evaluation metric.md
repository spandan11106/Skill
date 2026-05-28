In machine learning we try several new things in order to improve our model. In order to see if the implementation of a new thing has improved the model or not, it is better to have a single number evaluation metric. 

Suppose we want to pick a model to work with. We are given the precision and recall of each model. 
- Precision ($P$) - Of the example recognised as a value, what percentage of them are actually correct. e.g. Examples recognised as cats, what percent are actually cat.
- Recall ($R$) - If all values are correct, then how many of them are recognised. e.g. What percent of actual cat are recognised. 

Precision and recall have a trade-off. If a model has more precision, it might have low recall or if it has high recall then it might have low precision. Hence it becomes difficult to choose a model by comparing this two numbers. 

That is why we define the `F1` score which can be used as a single metric to evaluate the models. It is defined as - $$F1 = \Bigg( \frac{2}{\frac{1}{F} + \frac{1}{R}}\Bigg)$$ $$\text{F1 Score} = \text{Harmonic mean of P and R}$$We could also user the average if we have multiple values available during evaluation. 

Another way to do this is to keep one optimising metric and the others satisfying metrics. First we pick model which satisfy our satisfying metrics and then among them find the most optimal one. 
