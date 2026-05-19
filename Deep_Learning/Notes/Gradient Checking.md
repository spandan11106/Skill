We use the formal definition of derivative to find if our gradient is moving in the right or not. $$\lim_{x \to \infty} \frac{f(\theta + \epsilon) - f(\theta - \epsilon)}{2\epsilon} = f'(\theta)$$ 
To proceed with gradient checking we go through the following steps :
- Take $W^{[1]}, b^{[1]}, .... , W^{[L]}, b^{[L]}$ and reshape into a big vector $\theta$.  $$J\big( \ W^{[1]}, b^{[1]}, .... , W^{[L]}, b^{[L]} \ \big) = J(\theta)$$ 
- Similarly do this for the gradients as follows : $$\big( \ dW^{[1]}, db^{[1]}, .... , dW^{[L]}, db^{[L]} \ \big) = d\theta$$ 
If the function $J(\theta)$ has several parameters then for each $i$ we calculate: $$d\theta_{approx}^{[i]} = \frac{J(\theta_1, \theta_2, \ .... \, \theta_i + \epsilon, \  ....) - J(\theta_1, \theta_2, \ .... \, \theta_i - \epsilon, \  ....)}{2\epsilon}$$ In order to check if the gradients are proper or not we take the ratio $$\frac{\|d\theta_{approx} - d\theta \|_2}{\|d\theta_{approx}\|_2 + \|d\theta\|_2}$$ If we take then value of $\epsilon \approx 10^{-7}$ then this ratio should also be in the same range or so ($10^{-5}$) 

- Do not use this in training but only to debug
- If algorithm fails grad check, look at components to try to identify bug.
- Remember reqularization
- Does not work with dropout

