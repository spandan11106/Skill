On iteration `t` we do the following :
- Compute the derivatives `dw` and `db` on the current mini-batch 
- Then we compute the following value : $$s_{dw} = \beta_2 s_{dw} + (1 - \beta_2)dw^2$$
 $$s_{db} = \beta_2 s_{db} + (1 - \beta_2)db^2$$ 
- Then we update the weight. $$w = w - \alpha \frac{dw}{\sqrt{s_{sw}}} \ \ \ \ \ \ \ \ \ \ b=  b - \alpha \frac{db}{\sqrt{s_{db}}}$$
So now we have two hyper-parameters $\alpha$ and $\beta_2$. 
By using this our updates in the vertical direction are small are large in the horizontal direction.  

Also when we divide the the root of the mean term, we add a very small value $\epsilon$ to it so that we in practice do not divide by zero. 

[[Adam optimization algorithm]] 