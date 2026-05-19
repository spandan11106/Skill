On iteration `t` we do the following :
- Compute the derivatives `dw` and `db` on the current mini-batch 
- Then we compute the following value : $$v_{dw} = \beta v_{dw} + (1 - \beta)dw$$ $$v_{db} = \beta v_{db} + (1 - \beta)db$$ 
- Then we update the weight. $$w = w - \alpha v_{dw} \ \ \ \ \ \ \ \ \ \ b=  b - \alpha v_{db}$$ So now we have two hyper-parameters $\alpha$ and $\beta$. We usually use the value of $\beta$ ad `0.9`.  

[[Adam optimization algorithm]]  