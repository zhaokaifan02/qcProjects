# 波动方程的归一化

我们前面讲过，波动方程的平方反应了微粒的概率密度。我们把之前解得的波动方程拿出来
$$
\psi(x) = Bsin\frac{n\pi x}{a}
$$
他的概率反应为
$$
\psi^*(x)\psi(x) = B^*Bsin^2\frac{n\pi x}{a}
$$
加上dx后表示粒子在 x到dx这段范围内出现的概率，因为我们这个波动方程的**就是在粒子处于0到a这个边界限制条件下解出来的**，因此粒子只能在0到a中运动，所以对于事件P： 粒子在0到a运动。 这个事件P发生的概率就是100%。因此我们得出
$$
\int_0^a\psi_n^*(x)\psi_n(x)dx = 1
$$
我们再将波动方程的一般式子带入得到
$$
|B|^2\int_0^asin^2\frac{n\pi x}{a} dx =1 \\
$$
我们在对其进行一些简单的变换令 $z = \frac{n \pi x}{a}$
$$
\int_0^asin^2\frac{n\pi x}{a} dx =\frac{a}{n\pi} \int_0^{n\pi}sin^2zdz = \frac{a}{n\pi}(\frac{n\pi}{2}) = \frac{a}{2}\\
$$
所以可以解出
$$
B^2 \frac{a}{2} = 1 \\
B = (\frac{2}{a})^{\frac{1}{2}}
$$
所以我们解出波函数为
$$
\psi_n(x) = \sqrt{\frac{2}{a}}sin\frac{n \pi x}{a}
$$
因为薛定谔方程是一个**微分方程**，解出来是**天然带有常数的**。我们利用电子的物理学天然规律得到出现概率之和为1，然后把这个天然常数解出来，这个过程叫做**归一化normalized** ，解出的这个常数被叫做**normalization. constant** 。

从另一个角度来看，哈密顿算子是一个线性算子，也就是说
$$
\hat{H}a\psi = a\hat{H}\psi = aE\psi
$$
对结果乘上a不改变解出的东西，因此归一化是很有必要的。

又因为$\psi^*\psi$反映了电子出现的概率密度，所以可以计算电子具体在某个范围内出现的概率
$$
P(x_1<x<x_2) = \int_{x_1}^{x_2}\psi^*\psi dx
$$
现在我们来计算以下电子在0到$\frac{a}{2}$上出现的概率
$$
P(0<x<\frac{a}{2}) = \int_{0}^{\frac{a}{2}}\frac{2}{a}sin^2\frac{n\pi x}{a}dx\\
z= \frac{n \pi x} {a} \\
=\frac{2}{n\pi}\int_{0}^{n\pi /2}sin^2zdz = \frac{2}{n\pi}|\frac{z}{2}-\frac{sin2z}{4}|_0^{n\pi /2} \\
= \frac{2}{n\pi}|\frac{n \pi}{4}-\frac{sinn\pi}{4}|_0^{n\pi /2} = \frac{1}{2}
$$
所以对于任意的n，电子出现在一半的概率都是1/2。我们简单取一些n来看一看看

![1739777250609](.\figure\1739777250609.png)

不难发现，确实是概率对称分布的。并且n=1时集中在中间，随着n增大，才在两侧开始分布。

![1739777408834](.\figure\1739777408834.png)

n=20时分布就比较均匀了**fairly uniformly distributed** 。

同时不难发现
$$
\text{Prob}(0 \leq x < \frac{\alpha}{4}) = \text{Prob}(\frac{\alpha}{4} \leq x \leq \alpha) =
\begin{cases}
\frac{1}{4}, & n \text{ even} \\
\frac{1}{4}-\frac{(-1)^{\frac{n-1}{2}}}{2\pi n}, & n \text{ odd}
\end{cases}
$$

$$
\text{Prob}(\frac{\alpha}{4} \leq x < \frac{\alpha}{2}) = \text{Prob}(\frac{3\alpha }{4} \leq x \leq \alpha) =
\begin{cases}
\frac{1}{4}, & n \text{ even} \\
\frac{1}{4}+\frac{(-1)^{\frac{n-1}{2}}}{2\pi n}, & n \text{ odd}
\end{cases}
$$

也就是说，随着n增大啊，**他的分布越来越均匀了**。

我们再回忆一下n的来源
$$
\omega a = n\pi\\
\omega^2 = \frac{2mE}{\hbar^2}\\
$$
因此不难发现n越大能量越大，也就是说，对于能级轨道越高的电子，他的分布就越均匀。	

粒子的行为受到其能量影响。

**结果说明了对应原理** correspondence principle **，根据对应原理，量子力学结果和经典力学结果在大量子数的极限下趋于一致** 。

# 盒中粒子的平均动量为0

我们可以利用粒子的概率密度，计算出各物理量的均值和标准差

但是注意区分，经典物理学中的实物粒子的特点在于**实**，也就是说他的动量，动能，能量等是一个确定的值。

而量子力学中，粒子以波的形式出现，具体只能捕获到他的**概率**，比如
$$
f(x)dx = 
\begin{cases} 

\end{cases}
$$
