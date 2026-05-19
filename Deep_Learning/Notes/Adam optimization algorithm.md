We first initialise $v_{dw} = 0$, $s_{dw} = 0$, $v_{db} = 0$, and $s_{db} = 0$. 
On iteration `t` :
 - Compute $dw$ and $db$ using current mini-batch
 - Compute : $$\begin{aligned} 
V_{dw} = \beta_1V_{dw} + (1 - \beta_1)dw \ \ \ \ \ \ \ \ V_{db} = \beta_1V_{db} + (1 - \beta_1)db \\
S_{dw} = \beta_2S_{dw} + (1 - \beta_2)dw^2 \ \ \ \ \ \  S_{db} = \beta_2S_{db} + (1 - \beta_2)db^2
\end{aligned}$$ 
- We apply bias correction by dividing $v$ terms by $1/(1 - \beta_1^t)$ and $s$ terms by $1/(1 - \beta_2^t)$ 
- We update the gradients. $$w = w- \alpha \frac{V_{dw}^{updated}}{\sqrt{S_{dw}^{updated} + \epsilon}}$$ $$b = b - \alpha \frac{V_{db}^{updated}}{\sqrt{S_{db}^{updated} + \epsilon}}$$ 

The Hyper-parameters are as follows : 
- $\alpha$ : Needs to be tuned
- $\beta_1$ : Usually `0.9` 
- $\beta_2$ : Usually `0.999`
- $\epsilon$ : $10^{-8}$ 

`ADAM` = Adaptive momentum estimation.