Given some intermediate value in a neural network. For a layer l we do: 
$$\mu = \frac{1}{m}\sum_iz^{(i)}$$ $$\sigma^2 = \frac{1}{m}\sum_i (z^{(i)} - \mu)^2$$ $$z^{(i)}_{norm} = \frac{z^{(i)} - \mu}{\sqrt{\sigma^2 + \epsilon}}$$Sometimes we do not want the means zero and standard unit variance. In such cases we do, $$\tilde{z}^{(i)} = \gamma z^{(i)}_{norm} + \beta$$where here $\gamma$ and $\beta$ are learnable parameters. So we update them along with $w$ and $b$. 
We can also use `ADAM` and other optimisations while updating them. 

So now instead of $Z^{[l](i)}$ we use $\tilde{z^{[l](i)}}$ 

Usually batch norm is applied with mini-batches. For mini-batch 1 the process is as follows : $$X^{\{1\}} \overset{w^{[i]}, b^{[i]}}{\longrightarrow} z^{[1]} \overset{\gamma^{[i]}, \beta^{[i]}}{\longrightarrow} \tilde{z}^{[1]} \longrightarrow g^{[1]}(\tilde{z}^{[1]}) = a^{[1]} \longrightarrow z^{[2]} \longrightarrow  \ ......$$ This happens for all mini-batches. 

If we are using batch norm then there is no point in using the parameter $b$ for that layer.  Batch norm also has a slight regularisation effect. 

#### Bach Norm at Test time 
While training on all the mini-batches we get the means and variance of each layer. 
- $\mu^{\{1\}[l]}$ : Mean of mini-batch one, layer $l$ 
- $\sigma^{2\{1\}[l]}$ : Variance of mini-batch one, layer $l$ 
At test time we use the [[Exponentially Weighted Averages]] of $\mu$ and $\sigma^2$ across all the mini-batches.  

Then we do the following :
$$Z_{norm} = \frac{z - \mu}{\sqrt{\sigma^2 + \epsilon}} \ \ \ \ \ \ \ \ \ \ \tilde{z} = \gamma z_{norm} + \beta$$ We use $\gamma$ and $\beta$ learned during training. 


