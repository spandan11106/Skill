We drop neurons at random. There are several ways to implement this. 

**Inverted dropout :**
Let us illustrate this with layer $l$. 
$$d_l = \text{np.random.rand}(a_l.\text{shape[0]}, a_l.\text{shape[1]}) < keep\_prob$$ If $keep\_prop = 0.8$ then there is a $80\%$ chance that the $d_l$ has value 1 and $20\%$ that it is zero. We also modify $a_l$ as follows: $$a_l = \text{np.multiply}(a_l, d_l)$$ $$a_l = \frac{a_l}{leep\_prob} $$ 
We divide by `keep_prob` to keep the **expected value of  unchanged** during training. This is called inverted dropout. 
$$E\Bigg[  \frac{a.d}{keep\_prob}  \Bigg] = a$$

At test time we do not use dropout regularization.  

Let us look at dropout from the perspective of a single unit. This single unit has several inputs. What dropout does is eliminate several of the inputs. This makes sure the the unit does not rely on any one feature, so we spread out the weights. 

One downside of dropout is that the cost function does not have a definite definition. At every iteration we are randomly eliminating nodes. 