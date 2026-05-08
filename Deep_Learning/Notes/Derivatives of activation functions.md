**Sigmoid:** $$g(z) = \frac{1}{1 + e^{-z}}$$ $$g'(z) = \frac{1}{1+e^{-z}}\bigg(1 - \frac{1}{1+e^{-z}}\bigg) = g(z)(1 - g(z))$$ **Tanh:** $$g(z) = \frac{e^{z} - e^{-z}}{e^{z} + e^{-z}}$$ $$g'(z) = 1 - (tanh(z))^2$$ **ReLU:**  $$g(z) = max(0, z)$ $$ 
$$g'(z) = 
\begin{cases} 
0 & z < 0 \\
1 & z > 0 \\
\text{undefined} & z = 0
\end{cases}
$$ **Laeky ReLU:** $$g(z) = max(0.01z, z)$$ $$g'(z) = 
\begin{cases} 
0.01 & z < 0 \\
1 & z > 0 \\
\text{undefined} & z = 0
\end{cases}
$$

 