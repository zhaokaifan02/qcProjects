# 薛定谔方程

薛定谔方程是量子力学的基本方程。薛定谔方程的解称为**波函数wavefunctions** 。

前面我们见过的波动方程是有时间参数的。但是在量子化学领域中，我们往往不关心时间这一概念，也就是说解出的波函数不随时间变化，**被称为稳态波函数stationa1y -state wave functions** 。

# 薛定谔方程是粒子的波函数

我们**不能直接推导出薛定谔方程**，就像我们不能推导出牛顿定律一样，尤其是牛顿第二定律
$$
f = ma
$$
我们将把**薛定谔方程看作是量子力学的一个基本公设或公理，就像牛顿定律是经典力学的基本假设一样**。

现在我们来逐步证明这个方程是可信的，就像牛顿证明牛顿定律一样。

德布罗意说物质具有波的特点，这种波动性在**粒子越小的情况下波动越明显**。

既然是有波动性，我们就从一维的波动方程入手。
$$
\frac{\part^2u}{\part x^2} = \frac{1}{v^2}\frac{\part^2 u}{\part t^2}
$$
在第二章我们分析过，这个方程的某个**驻波normal modes**解的结构是如下所示的
$$
u_n(x,t) =  A_n\cos{(\omega_nt+\phi_n})\sin{\frac{n\pi }{l}x}
$$
它可以理解成一个关于时间$t$的余弦函数乘上一个与$x$有关的波函数，写成如下形式
$$
u(x,t)=\psi(x)\cos{\omega t}
$$
其中$\cos{\omega t}$ 是控制波的时间维度的。而$\psi(x)$ **被称为振幅的空间因子spatial factor of the amplitude**，官方称呼为空间**振幅spatial amplitude** 。这个是波动方程的解的，所以我们带入波动方程
$$
\frac{\part^2\psi}{\part x^2} \cos{\omega t} = \frac{1}{v^2}-\psi(x)\omega^2cos{\omega t}\\
\frac{\part^2\psi}{\part x^2}+\frac{\omega^2}{v^2}\psi(x) = 0
$$
我们已知角频率与频率之间的关系，以及频率和波长和速度的关系
$$
\omega = 2\pi\nu \\
\nu\lambda = v
$$
将其带入到前面的方程中得到
$$
\frac{\part^2\psi}{\part x^2}+\frac{4\pi^2}{\lambda^2}\psi(x) = 0
$$
回忆一下德布罗意的结论与能量守恒定律
$$
\lambda = \frac{h}{p}\\
E = \frac{p^2}{2m}+V(x)
$$
其中$p$是动量，$V(x)$是势能，由此我们可以解出动量的表达式
$$
p =\{2m(E-V(x)\}^{\frac{1}{2}}
$$
从而可以导出对应的德布罗意波长
$$
\lambda = \frac{h}{p} = \frac{h}{\{2m(E-V(x)\}^{\frac{1}{2}}}
$$
之后我们将其带入到前面推出的方程
$$
\frac{\part^2\psi}{\part x^2}+\frac{4\pi^22m[E-V(x)]}{h^2}\psi(x)
$$
我们一般使用**约化普朗克常数reduced Planck constant** 来化简方程
$$
\hbar = \frac{h}{2\pi}
$$
