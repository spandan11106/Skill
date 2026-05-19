Given some intermediate value in a neural network. For a layer l we do: 
$$\mu = \frac{1}{m}\sum_iz^{(i)}$$ $$\sigma^2 = \frac{1}{m}\sum_i (z^{(i)} - \mu)^2$$ $$z^{(i)}_{norm} = \frac{z^{(i)} - \mu}{\sqrt{\sigma^2 + \epsilon}}$$Sometimes we do not want the means zero and standard unit variance. In such cases we do, $$\tilde{z^{(i)}} = \gamma z^{(i)}_{norm} + \beta$$where here $\gamma$ and $\beta$ are learnable parameters. So we update them along with $w$ and $b$. 

So now instead of $Z^{[l](i)}$ we use $\tilde{z^{[l](i)}}$ 

