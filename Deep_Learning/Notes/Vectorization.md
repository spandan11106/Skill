During gradient descent we have to calculate $z = w^Tx + b$, where $w^Tx$ is the dot product of two vectors. To do this by loops is time consuming that is why we use vectorization.  

In python we do this as follow using the `numpy` library. 
```python
z = np.dot(w, x) + b
```

Here is demonstration of why vectorization is faster
```python
import numpy as np
import time

a = np.random.rand(1000000)
b = np.random.rand(1000000)

tic = time.time()
c = np.dot(a, b)
toc = time.time()

print(c)
print("Vectorized version: " + str(1000*(toc-tic)) + "ms ")

c = 0
tic = time.time()
for i in range(1000000):
c += a[i]*b[i]
toc = time.time()

print(c)
print("For loop: " + str(1000*(toc-tic)) + "ms ")
```
We find that vectorization is 200 times faster. 
![[Pasted image 20260508032212.png]]

**Some other examples :**
```python
np.exp(v), np.log(v), np.abs(a) 
```

