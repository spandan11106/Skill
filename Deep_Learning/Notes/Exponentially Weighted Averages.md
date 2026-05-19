This is a technique used to analyse time series data by assigning weight to recent observation while weights for the older data points decline exponentially. Unlike simple moving averages that treat all historical data equally.  $$A_t = \beta A_{t-1} + (1 - \beta)v_t$$Here $\beta$ is the smoothing parameter. 

Here is $\beta = 0.9$, then we are considering the previous average of 10 days. In general we can write the following : $$A_t = \beta A_{t-1} + (1 - \beta)v_t \tag{1}$$ $$A_{t-1} = \beta A_{t-2} + (1 - \beta)v_{t-1} \tag{2}$$ and so on. So if we substitute 2 in 1 we can get : $$V_t = (1 - \beta)v_t + (1 - \beta)\beta v_{t-1} + (1- \beta)\beta^2 v_{t-2} \ + \ .......$$This is a exponentially decreasing function. 

### Bias Correction 
During practice we take the initial value of $A_t$ to be zero. This makes our code implementation easy but it creates a small issue. The initial calculated values of $A$ are smaller then expected. In order to correct this we do the following : $$\frac{A_t}{1 - \beta^t}$$ Here when $t$ is small it affects the the value of $V_t$ more and help elevating the initial values. When t becomes large the denominator does not make much difference. 

[[Gradient Descent with Momentum]] [[RMSprop]] 