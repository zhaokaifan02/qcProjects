# 微扰理论将一个问题的解用先前已解决的另一个问题来表示。

一般情况下我们要解决的薛定谔方程可以写作

$$
\hat{H}\psi = E\psi
$$

对于一些典型的系统，比如谐振子，刚性旋转体，或者说之前提到的氢原子。可以对其数学处理得到解析解。但是对于稍微复杂一点的，有交叉项的薛定谔方程，比如氮原子这种薛定谔方程。

$$
\hat{H}=-\frac{\hbar^2}{2m_\mathrm{e}}(\nabla_1^2+\nabla_2^2)-\frac{2e^2}{4\pi\epsilon_0}\left(\frac{1}{r_1}+\frac{1}{r_2}\right)+\frac{e^2}{4\pi\epsilon_0}\frac{1}{r_{12}}
$$

写成更加常见的形式为

$$
\hat{H}=\hat{H}_{\mathrm{H}}(1)+\hat{H}_{\mathrm{H}}(2)+\frac{e^2}{4\pi\epsilon_0}\frac{1}{r_{12}}
$$

其中

$$
\hat{H}_\mathrm{H}(j)=-\frac{\hbar^2}{2m_\mathrm{e}}\nabla_j^2-\frac{2e^2}{4\pi\epsilon_0}\frac{1}{r_j}\quad
 j=1\quad\mathrm{and}\quad2
$$

这里的$\hat{H}_H(j)$表示的是单电子的哈密顿算子。每个单电子也有其对应的薛定谔方程，可以写作

$$
\hat{H}_\mathrm{H}(j)\psi_\mathrm{H}(r_j,\theta_j,\phi_j)=E_j\psi_\mathrm{H}(r_j,\theta_j,\phi_j)\quad j=1\mathrm{~and~}2
$$

其中$\psi_H$表示的是类氢原子中电子的状态方程。由上一章的解析解可以推断得到，当$Z=2$时的能量为

$$
E_j=-\frac{Z^2m_\mathrm{e}e^4}{8\epsilon_0h^2n_j^2}\quad j=1\mathrm{~and~}2
$$

注意，如果方程中没有电子间排斥项，氦原子的哈密顿算符将是可分离的，氦原子波函数将是类氢波函数乘积的产物。

另一个问题的例子，如果没有哈密顿算符中的附加项，就可以很容易地解决，那就是一个非谐振子。回想一下，谐振子势作为关于平衡核分离的一般势的泰勒展开中的第一项自然出现。考虑一个非谐振子，它的势能以下给出

$$
V(x)=\frac{1}{2}kx^2+\frac{1}{6}\gamma_3x^3+\frac{1}{24}\gamma_4x^4
$$

所以此时的哈密顿算子可以写为

$$
\hat{H}=-\frac{\hbar^2}{2\mu}\frac{d^2}{dx^2}+\frac{1}{2}kx^2+\frac{1}{6}\gamma_3x^3+\frac{1}{24}\gamma_4x^4
$$

同样的道理，如果没有后面的三次项和四次项。哈密顿算子也可以写为两个算子的和从而快速写出解析解。

这两个例子通过哈密顿算子为我们介绍了**微扰理论perturbation theory**背后的思想。

在这些例子中，哈密顿算子由两个部分组成，其中一部分可以被精确的求出解析解，另一部分则阻碍解析解的求出。

我们称第一项为**无扰动的哈密顿算子unperturbed Hamiltonian operator**，第二项被称为**扰动的perturbation**。

我们将非扰动的哈密顿算子定义为$\hat{H}^0$，被扰动的哈密顿算子为$\hat{H}^1$。所以薛定谔方程可以写为

$$
\hat{H} = \hat{H}^0 +\hat{H}^1
$$

对于第一个算子，他的薛定谔方程很容易求解，我们记为    

$$
\hat{H}^{(0)}\psi^{(0)}=E^{(0)}\psi^{(0)}
$$

其中上面的0表示是非扰动的部分，这里的$\psi$和$E$表示解析解的形式。对于氮原子，他的非扰动部分以及其对应的解可以写为

$$
\begin{aligned}
 & \hat{H}(0)=\hat{H}_{\mathrm{H}}(1)+\hat{H}_{\mathrm{H}}(2) \\
 & \psi^{(0)}=\psi_{\mathrm{H}}(r_{1},\theta_{1},\phi_{1})\psi_{\mathrm{H}}(r_{2},\theta_{2},\phi_{2}) \\
 & E^{(0)}=-\frac{4m_\mathrm{e}e^4}{8\epsilon_0^2\hbar^2n_1^2}-\frac{4m_\mathrm{e}e^4}{8\epsilon_0^2\hbar^2n_2^2} \\
\end{aligned}
$$

这里我们严格按照了之前推导过的，如果哈密顿算子可以写为多个哈密顿算子之和，那么可以分别求解这多个哈密顿算子对应的薛定谔方程。**然后最终的状态函数是状态函数之积，能量是能量之和**。

其无法求出解析解的扰动部分为两电子相互作用的势能，

$$
\hat{H}(1)=\frac{e^2}{4\pi\epsilon_0r_{12}}
$$

同样对于谐振子，他的非扰动部分与扰动部分可以写作

$$
\begin{aligned}
 & \hat{H}(0)=-\frac{\hbar^{2}}{2\mu}\frac{d^{2}}{dx^{2}}+\frac{1}{2}kx^{2} \\
 & \psi_{v}^{(0)}=\frac{(\alpha/\pi)^{1/4}}{(2^{v}v!)^{1/2}}e^{-\alpha x^{2}/2}H_{v}(\alpha^{1/2}x) \\
 & E_{v}^{(0)}=\left(v+\frac{1}{2}\right)h\nu \\
 & \hat{H}^{(1)}=\frac{\gamma_{3}}{6}x^{3}+\frac{\gamma_{4}}{24}x^{4}
\end{aligned}
$$

你可能直觉地认为，如果扰动项在某种意义上不是很大，**那么完整的受扰问题的解应该接近于未受扰问题的解**。比如这里的三次项和四次项都很接近于0。

因此我们期望非扰动系统不被附加项剧烈的改变。

# 微扰理论包含一系列针对未受扰问题的逐次修正项

对于能量一阶修正的方程。扰动项和非扰动项的哈密顿算子以及非扰动项对应的可解薛定谔方程及其解析解如下

$$
\hat{H}\psi = E\psi \\
\hat{H} = \hat{H}^{(0)} + \hat{H}^{(1)}\\
\hat{H}^{(0)} \psi_n^{(0)} = E^{^(0)}\psi_n^{(0)}
$$

其中前面的非扰动项可以很轻松的求出解析解。

为了更好的追踪扰动项的阶数，我们可以在哈密顿算子中引入一个参数

$$
\hat{H} = \hat{H}^{0} +\lambda\hat{H}^1
$$

这个参数$\lambda$只是一个**记录工具bookkepping devie**,他将帮助我们确认所得到的扰动方程的有效阶数。

例如$\lambda$表示一阶修正，$\lambda^2$表示二阶修正，而在最后当我们最终确定保存几阶后，再令$\lambda=1$

并且由于哈密顿算子是Hermitian算子，因此前面增加系数并不会影响特征方程求解。

在我们这样设置后，这个算子对应薛定谔方程的解$\psi_n$和$E_n$利索当然的取决于n。因此再由Hermitian算子的性质，**这个算子对应的所有状态函数的线性组合也是这个算子的状态函数，其对应的能量则是所有能量的和**，具体情况如下所示

$$
\hat{H} = \hat{H}^{(0)}+\lambda\hat{H}^{(1)} \\
\psi_n=\psi_n^{(0)}+\lambda\psi_n^{(1)}+\lambda^2\psi_n^{(2)}+\cdots\\
E_n=E_n^{(0)}+\lambda E_n^{(1)}+\lambda^2E_n^{(2)}+\cdots
$$

这个方程中的$\psi_n^0$是非扰动的解，我们知道他的具体形式，而后面这些$\psi^1, \psi^2$等是不知道具体形式的扰动系统的解，目的是求出这些**修正项corrections**。这是一种大胆的假设。

如果这个方程有效的话，可以看到随着阶数增大，后面的方程越来越不起作用。所以我们可以利用很少的项数来得到近似。

我们将这些近似式子带入薛定谔方程可以得到

$$
\begin{aligned}
(\hat{H}^{(0)}+\lambda\hat{H}^{(1)})(\psi_{n}^{(0)}+\lambda\psi_{n}^{(1)}+\lambda^{2}\psi_{n}^{(2)}+\cdots) & =(E_{n}^{(0)}+\lambda E_{n}^{(1)}+\lambda^{2}E_{n}^{(2)}+\cdots) \\
 & \times(\psi_{n}^{(0)}+\lambda\psi_{n}^{(1)}+\lambda^{2}\psi_{n}^{(2)}+\cdots)
\end{aligned}
$$

我们可以将这个狮子展开，并将大于三次项的修正项记为$O(\lambda^3)$的得到

$$
\begin{aligned}
 & (\hat{H}^{(0)}\psi_{n}^{(0)}-E_{n}^{(0)}\psi_{n}^{(0)})+(\hat{H}^{(0)}\psi_{n}^{(1)}+\hat{H}^{(1)}\psi_{n}^{(0)}-E_{n}^{(0)}\psi_{n}^{(1)}-E_{n}^{(1)}\psi_{n}^{(0)})\lambda \\
 & +(\hat{H}^{(0)}\psi_{n}^{(2)}+\hat{H}^{(1)}\psi_{n}^{(1)}-E_{n}^{(0)}\psi_{n}^{(2)}-E_{n}^{(1)}\psi_{n}^{(1)}-E_{n}^{(2)}\psi_{n}^{(0)})\lambda^{2}+O(\lambda^{3})=0\quad(8.57)
\end{aligned}
$$

因为$\lambda$是任取的参数，所以为了使得这个方程成立，必须让着些项一次为0.

其中0此项对应的

$$
\hat{H}^{(0)}\psi_{n}^{(0)}-E_{n}^{(0)}\psi_{n}^{(0)}
$$

是非扰动项的哈密顿方程，所以当然为0。再对1此项进行处理

$$
\hat{H}^{(0)}\psi_n^{(1)}+\hat{H}^{(1)}\psi_n^{(0)}=E_n^{(0)}\psi_n^{(1)}+E_n^{(1)}\psi_n^{(0)}
$$

我们两百年同时乘上$\psi_n^{0*}$ 可以得到

$$
\int\psi_{n}^{(0)*}(\hat{H}^{(0)}-E_{n}^{(0)})\psi_{n}^{(1)}d\tau+\int\psi_{n}^{(0)*}\hat{H}^{(1)}\psi_{n}^{(0)}d\tau=E_{n}^{(1)}\int\psi_{n}^{(0)*}\psi_{n}^{(0)}d\tau
$$

用更加常见的Dirca符号可以记为

$$
\langle\psi_n^{(0)}|\hat{H}^{(0)}-E_n^{(0)}|\psi_n^{(1)}\rangle+\langle\psi_n^{(0)}|\hat{H}^{(1)}|\psi_n^{(0)}\rangle=E_n^{(1)}\langle\psi_n^{(0)}|\psi_n^{(0)}\rangle
$$

又因为$\hat{H}-E$是Hermitian算子，所以它具有以下性质

$$
\langle\psi_n^{(0)}|\hat{H}^{(0)}-E_n^{(0)}|\psi_n^{(1)}\rangle=\langle(\hat{H}^{(0)}-E_n^{(0)})\psi_n^{(0)}|\psi_n^{(1)}\rangle=0
$$

可以通过前面取共轭来进行证明。同时因为正交性，最后一项是1。所以整个式子可以被写为

$$
E_{n}^{(1)}=\langle\psi_{n}^{(0)}|\hat{H}^{(1)}|\psi_{n}^{(0)}\rangle=\int d\tau\psi_{n}^{(0)*}\hat{H}^{(1)}\psi_{n}^{(0)}
$$

所以这里求出来$E^1$,并将其作为**一阶修正项first-order correction**，所以整个能量表达式可以被写为

$$
E_n=E_n^{(0)}+E_n^{(1)}=E_n^{(0)}+\langle\psi_n^{(0)}|\hat{H}^{(1)}|\psi_n^{(0)}\rangle\quad\text{(first order)}
$$

## 一阶扰动下的势能井求解

势能井问题可以被写做以下式子

$$
\left.V(x)=\left\{
\begin{array}
{ccc}\infty & & x<0 \\
\frac{V_0x}{a} & & 0<x<a \\
\infty & & x>a
\end{array}\right.\right.
$$

其对应的哈密顿算子为

$$
\hat{H} = -\frac{\hbar^2}{2m}\frac{d^2}{dx^2} + V(x)
$$

对于非扰动项其薛定谔方程解的为

$$
\psi_{n}^{(0)}(x)=\left(\frac{2}{a}\right)^{1/2}\sin\frac{n\pi x}{a}\quad n=1,2,3,\ldots \\E_{n}^{(0)}=\frac{n^{2}h^{2}}{8ma^{2}}\quad n=1,2,3,\ldots
$$

此时剩下的扰动项为

$$
\hat{H}^{(1)}=\frac{V_0x}{a}\quad0<x<a
$$

根据前面推到出来的，我们可以计算出一阶修正项的能量

$$
\begin{aligned}
E_{n}^{(1)} & =\left\langle\psi_{n}^{(0)}\left|\frac{V_{0}x}{a}\right|\psi_{n}^{(0)}\right\rangle=\frac{2V_{0}}{a^{2}}\int_{0}^{a}dxx\sin^{2}\frac{n\pi x}{a} \\
 & =\frac{V_{0}}{2}\quad n=1,2,\ldots
\end{aligned}
$$

所以整体的能量为

$$
E_1=E_1^{(0)}+E_1^{(1)}=\frac{h^2}{8ma^2}+\frac{V_0}{2}
$$

更常见的形式我们会定义多个变量

$$
\varepsilon = \frac{8mEa^2}{h^2} \\
v_0 = \frac{8mV_0a^2}{h^2} \\
\varepsilon_1 = 1+ \frac{v_0}{2}
$$

这样我们就可以求出能量与初始值的关系，从而绘制能量氢谱了

## 氦原子的薛定谔方程求解

现在我们将目光回到氦原子，当我们考虑到双电子之间的作用$e^2/4\pi \epsilon_0r_{12}$ ，因此哈密顿算子和非扰动项的波动方程以及其能量可以解的

$$
\begin{aligned}
 & \hat{H}(0)=\hat{H}_{\mathrm{H}}(1)+\hat{H}_{\mathrm{H}}(2) \\
 & \psi^{(0)}=\psi_{1s}(r_{1},\theta_{1},\phi_{1})\psi_{1s}(r_{2},\theta_{2},\phi_{2}) \\
 & E^{(0)}=-\frac{Z^{2}m_{\mathrm{e}}e^{4}}{32\pi^{2}\epsilon_{0}^{2}\hbar^{2}n_{1}^{2}}-\frac{Z^{2}m_{\mathrm{e}}e^{4}}{32\pi^{2}\epsilon_{0}^{2}\hbar^{2}n_{2}^{2}}
\end{aligned}
$$

 同时扰动项为

$$
\hat{H}^{(1)} = \frac{e^2}{4\pi \epsilon_0r_{12}}
$$

因为氦原子的质子数为2，所以$Z=2$。按照前面分析的一阶修正项得到的能量为

$$
E^{(1)}=\iint d\mathbf{r}_{1}d\mathbf{r}_{2}\psi_{1s}(\mathbf{r}_{1})\psi_{1s}(\mathbf{r}_{2})\frac{e^{2}}{4\pi\epsilon_{0}r_{12}}\psi_{1s}(\mathbf{r}_{1})\psi_{1s}(\mathbf{r}_{2})
$$

其中类氢原子的波动函数为

$$
\psi_{1s}(\mathbf{r}_j)=\left(\frac{Z^3}{\pi a_0}\right)^{1/2}e^{-Zr_j/a_0}\quad j=1\mathrm{or}2
$$

这里可以逐步计算，不管是使用数值计算还是解析都可以解的能量为

$$
E^{(1)}=\frac{5Z}{8}\left(\frac{m_\mathrm{e}e^4}{16\pi^2\epsilon_0^2\hbar^2}\right)
$$

之后我们取n都为1，来求总能量为

$$
\begin{aligned}
\mathrm{E} & =E^{(0)}+E^{(1)}=-\frac{1}{2}Z^{2}-\frac{1}{2}Z^{2}+\frac{5}{8}Z \\
 & =-Z^2+\frac{5}{8}Z
\end{aligned}
$$

这里的单位都是$\frac{m_\mathrm{e}e^4}{16\pi^2\epsilon_0^2\hbar^2}$

令Z=2带入解的结果为-2.75，变分结果（-2.8477）以及实验结果（-2.9033）相比有所差异。由此可见，一阶近似理论给出的结果存在约 5%的误差。事实证明，二阶近似理论给出的结果为 -2.910，而更高阶的结果则为 -2.9037。因此，我们可以看到，只要计算足够精确，变分法和近似理论都能够得出非常不错的结果。

# 总结变分法与近似法

## 变分法

1. 变分法的缺点是只能求出最低的基态能量。

2. 变分法的原理是选取一些已知函数作为基底，然后用这些基底的组合(可能非线性)来表示出我们要估计的函数

3. 再利用变分原理列出两个式子，使得他们最小，并优化变分参数。

4. 在基底的线性组合的组合系数作为变分参数时，会转化为久期行列式与久期方程的问题。可以转化为矩阵计算。重点是计算$H_{ij}$与$S_{ij}$

5. 利用久期方程组依次求出组合的系数

## 扰动理论

扰动理论也是偏估计的，他设置的若干修正项，利用等式性质求出这些修正项的能量，从而求出能量。

注意扰动理论无法求出具体的波动方程，不过这对实验来说无所谓
