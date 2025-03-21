# 近似法求解薛定谔方程

在上一章结尾处，我们提到对于任何比氢原子更为复杂的原子或分子，薛定谔方程都无法精确求解。乍一看，这一说法似乎肯定会剥夺量子力学对于化学家而言的任何吸引力，但幸运的是，可以使用近似方法来求解薛定谔方程，使其达到几乎任何所需的精度。在这一章中，我们将介绍这两种最广泛使用的近似方法，即变分法和微扰法。我们将介绍变分法和微扰法的基本方程，然后将其应用于各种简单问题。 

# 变分法给出了系统地能级的上界

**变分法variational method** 考虑任意系统的基态，对于最低能量的基态$E_0$我们有

$$
\hat{H} \psi_0 = E_0 \psi_0
$$

这是两边同时乘上他的共轭$\psi_0$ 并进行积分得到

$$
E_0 = \frac{\int \psi_0^* \hat{H} \psi_0 \, d\tau}{\int \psi_0^* \psi_0 \, d\tau} = \frac{\langle \psi_0 | \hat{H} | \psi_0 \rangle}{\langle \psi_0 | \psi_0 \rangle}
$$

在这种情况下因为是做除法，所以这里的基态的状态函数$\psi_0$可以事先没有被归一化。

现在我们假设存在一个$E_{\phi}$，他对应的波函数是$\phi$。同样进行积分代换可以得到

$$
E_\phi = \frac{\int \phi^* \hat{H} \phi \, d\tau}{\int \phi^* \phi \, d\tau} = \frac{\langle \phi | \hat{H} | \phi \rangle}{\langle \phi | \phi \rangle}
$$

又因为$E_0$是基态能量，所以我们有以下

$$
E_\phi \geq E_0
$$

这个式子被叫做**变分准则variational principle** ，我们在实际操作中的逻辑也很简单。就是不断的自己造出函数，然后进行两段积分计算，拿得到的$E_\phi$ 和$E_0$进行比较，之间的差值越小越好。**当我们造出的函数算出的能量于基态能量相同时，这个造出的函数就是基态函数**。

从数学语言上理解，我们可以选择一个试验函数$\phi$其依赖于一些任意参数,称为变分参数variational parameters 。依赖于这些变分参数，能量可以被写为

$$
E_\phi(\alpha, \beta, \gamma, \ldots) \geq E_0
$$

现在我们可以对每一个变分参数最小化$E_\phi$，从而接近精确的基态能量$E_0$

## 氢原子的变分法求解

作为一个具体的例子，考虑氢原子的基态。虽然我们从第7章知道我们可以精确地解决这个问题，但让我们假设我们不能，并使用变分方法来确定一个近似解。

然后我们将变分结果与精确结果进行比较。在基态$l=0$时，s轨道于角度无关，所以哈密顿算子为

$$
\hat{H} = -\frac{\hbar^2}{2m_e r^2} \frac{d}{dr} \left( r^2 \frac{d}{dr} \right) - \frac{e^2}{4\pi \epsilon_0 r}
$$

即使我们不知道这个算子对应的薛定谔方程的解，我们也希望随着r的增加，波函数趋近于0，这是氢原子的自然性质于波动方程的概率性质所决定的。

因此，作为一个试验函数trial function，我们尝试将一个高斯函数带进去尝试。 其中$\alpha$作为参数

$$
\phi(r) = e^{-\alpha r^2}\\
4\pi \int_0^\infty \phi^*(r) \hat{H} \phi(r) r^2 \, dr = \frac{3\hbar^2 \pi^{3/2}}{4 \cdot 2m_e^{1/2} \alpha^{1/2}} - \frac{e^2}{4 \epsilon_0 \alpha} \\ 
4\pi \int_0^\infty \phi^*(r) \phi(r) r^2 \, dr = \left( \frac{\pi}{2\alpha} \right)^{3/2}
$$

因此将他们做除法，不难得出

$$
E(\alpha) = \frac{3\hbar^2 \alpha}{2m_e} - \frac{e^2 \alpha^{1/2}}{2^{1/2} \epsilon_0 \pi^{3/2}}
$$

这是在$\alpha$参数下的能量表达式，现在我们要使这个表达式最小。所以进行求导操作

$$
\frac{dE(\alpha)}{d\alpha} = \frac{3\hbar^2}{2m_e} - \frac{e^2}{(2\pi)^{3/2} \epsilon_0 \alpha^{1/2}} = 0
$$

得到最小的值为

$$
\alpha = \frac{m_e^2 e^4}{18 \pi^3 \epsilon_0^2 \hbar^4} \\
E_{\text{min}} = -\frac{4}{3\pi} \left( \frac{m_e e^4}{16 \pi^2 \epsilon_0^2 l^2} \right) = -0.424 \left( \frac{m_e e^4}{16 \pi^2 \epsilon_0^2 l^2} \right)
$$

这与我们已知的基态能级相比较

$$
E_0 = -\frac{1}{2} \left( \frac{m_e e^4}{16 \pi^2 \epsilon_0^2 l^2} \right) = -0.500 \left( \frac{m_e e^4}{16 \pi^2 \epsilon_0^2 l^2} \right)
$$

可以发现确实是算出来的比基态能量大，于变分法的原理相符合。

在此基础上我们在做一些对比。高斯函数模型下的最小能量波函数为

$$
\phi(r)= (\frac{2\alpha}{\pi})^{3/4}e^{-\alpha  r^2} \\
\alpha = \frac{m_e^2 e^4}{18 \pi^3 \epsilon_0^2 \hbar^4} \\
$$

前面精确计算中得到的波函数为

$$
\psi_{1s}(r) = (\pi a_0^3)^{-1/2}e^{-r/a_0} \\
a_0 = \frac{4\pi \epsilon_0 \hbar^2}{m_e e^2} \\
$$

我们发现这里的$\alpha$和$a_0$有很多地方是相似的，所以用$a_0$表示可以得到

$$
\alpha = \frac{m_e^2 e^4}{18 \pi^3 \epsilon_0^2 \hbar^4} = 16 \cdot \frac{m_e^2 e^4}{16 \pi^3 \epsilon_0^2 l^4} = \frac{8}{9\pi} a_0^2 \\
\phi(r) = \frac{8}{3^{3/2} \pi} \left( \frac{1}{\pi a_0^3} \right)^{1/2} e^{- \left( \frac{8}{9\pi} \right) r^{-2} a_0^2}

$$

![1741677346099](D:\msys64\home\31932\qc\qcProjects\note\figure\1741677346099.png)

在这种情况下，计算的与真实的准确率接近80%。这一结果是通过使用仅含一个变分参数的试探函数得出的。 通过使用包含更多参数的更灵活的试函数，我们可以逐步获得更好的结果。

## 氦原子的基态能量求解

作为最后一个例子，我们将使用变分方法来估计氦原子的基态能量。我们在第七章最后看到氦原子的哈密顿算符是。

$$
\hat{H} = -\frac{\hbar^2}{2m_e} \left( \nabla_1^2 + \nabla_2^2 \right) - \frac{2e^2}{4\pi \epsilon_0} \left( \frac{1}{r_1} + \frac{1}{r_2} \right) + \frac{e^2}{4\pi \epsilon_0 r_{12}}
$$

这个算子不能由一般的分离变量法求解，因为存在$r_{12}$。所以我们可以将其整理为

$$
\hat{H} = \hat{H}_H(1) + \hat{H}_H(2) + \frac{e^2}{4\pi \epsilon_0 r_{12}} \\
\hat{H}_H(j) = -\frac{\hbar^2}{2m_e} \nabla_j^2 - \frac{2e^2}{4\pi \epsilon_0 r_j} \quad (j = 1 \text{ and } 2)
$$

第二个式子表示里氦原子核周围每个电子的哈密顿算符。因此每个电子都满足如下式子。

$$
\hat{H}_H(j) \psi_H(r_j; \theta_j, \phi_j) = E_j \psi_H(r_j; \theta_j, \phi_j) \quad (j = 1 \text{ or } 2)
$$

其中每个$\psi$都是$Z=2$的类氢波函数。所以按照前面分析的氢原子，每个电子的能量都可以写为

$$
E_j = -\frac{Z^2 m_e e^4}{32 \pi^2 \epsilon_0^2 \hbar^2 n_j^2} \quad (j = 1 \text{ or } 2)
$$

如果我们忽略电子间排斥项$\frac{e^2}{4\pi \epsilon_0 r_{12}}$，那么哈密顿算子是可分离的，则对应的整体状态方程可以被写作两个方程的解的乘积，并且参照

$$
\phi_0(r_1, r_2) = \psi_{1s}(r_1) \psi_{1s}(r_2) \\
\psi_{1s}(r_j) = \left( \frac{Z^3}{\pi a_0^3} \right)^{1/2} e^{-Z r_j/a_0} \quad (j = 1 \text{ or } 2) \\ 
a_0 = \frac{4\pi \epsilon_0 \hbar^2}{m_e e^2}
$$

我们在这里把Z作为变分参数去进行调节(这个思路好奇怪，因为Z表示的是质子的电荷量)。在此基础上总能量可以表示为

$$
E(Z) = \int \phi_0(r_1, r_2) \hat{H} \phi_0(r_1, r_2) \, dr_1 \, dr_2
$$

具体带入后解得

$$
E(Z) = \frac{m_e e^4}{16 \pi^2 \epsilon_0^2 \hbar^2} \left( Z^2 - \frac{27}{8} Z \right)
$$

前面可以看出来，基态能力能量也是以前面那一堆参数为基础的，所以研究其单调性最值可以直接使用

$$
E(Z) = Z^2 - \frac{27}{8} Z
$$

所以他的最值为

$$
E_{\text{min}} = -\left( \frac{27}{16} \right)^2 = -2.8477  \frac{m_e e^4}{16 \pi^2 \epsilon_0^2 \hbar^2}\\
E_0 = -2.9037 \frac{m_e e^4}{16 \pi^2 \epsilon_0^2 \hbar^2}
$$

可以看到他们的误差非常小。考虑到试验函数的简单性，我们得到了一个相当好的结果。

使E最小的Z值可以解释为有效核电荷。也就是在实际情况下起到势能作用的那些电荷。

Z小于2的事实反映了一个事实，每**个电子都部分地屏蔽了原子核**，所以净有效核电荷从2减少到27/16。 

# 一个与变分参数线性相关的试函数会导致一个特征多项式

作为变分方法的另一个例子，考虑一维盒子中的粒子。假设我们实现不知道确切的波函数。我们应该期望它对x = a/2是对称的并且在壁上趋于零，这是由真实的物理情况对应的。所以一个良好的实验函数是，并且我们以他的线性组合作为实验函数。

$$
x^n(a-x)^n \\
\phi = c_1 x (a - x) + c_2 x^2 (a - x)^2
$$

我们以他做为实验函数，带入算子进行计算。

$$
\frac{d^2\psi}{dx^2} +\frac{2mE}{\hbar^2}\psi(x) = 0
$$

并求导优化求出极值，这个过程我们就省略了。

$$
E_{\text{min}} = 0.125002 \frac{\hbar^2}{ma^2} \\
$$

与之前我们求出的解析解进行对比

$$
E_{\text{exact}} = \frac{\hbar^2}{8ma^2} = 0.125000 \frac{\hbar^2}{ma^2}
$$

可以发现误差特别小，几乎可以忽略。因此，我们看到，**使用具有多个参数的试用函数可以产生令人印象深刻的结果**。但是我们付出的代价是更加漫长的计算。幸运的是，有一种系统的方法来处理像$\phi = c_1 x (a - x) + c_2 x^2 (a - x)^2$这样的试函数。

注意到这样的函数是一些函数的线性组合，他的通式可以被写为

$$
\phi = \sum_{n=1}^{N} c_n f_n
$$

其中$c_n$是变分参数，而$f_n$是各种已知的函数。比如这个式子就可以被写为

$$
\phi = c_1 f_1 + c_2 f_2
$$

现在我们将其带入计算

$$
\int \phi \hat{H} \phi \, d\tau = \int (c_1 f_1 + c_2 f_2) \hat{H} (c_1 f_1 + c_2 f_2) \, d\tau \\
= c_1^2 \int f_1 \hat{H} f_1 \, d\tau + c_1 c_2 \int f_1 \hat{H} f_2 \, d\tau + c_2 c_1 \int f_2 \hat{H} f_1 \, d\tau + c_2^2 \int f_2 \hat{H} f_2 \, d\tau\\
$$

这里就出现了高度对称的东西，我们可以定义一个中间变量

$$
H_{ij} = \int f_i \hat{H} f_j \, d\tau = \langle i | \hat{H} | j \rangle
$$

这样这个式子就可以写做

$$
\int \phi \hat{H} \phi \, d\tau = c_1^2 H_{11} + 2c_1 c_2 H_{12} + c_2^2 H_{22}
$$

又因为能量的哈密顿算子是Hermitian算子，所以有$H_{ij} = H_{ji}$.因此式子可以被写作

$$
\int \phi \hat{H} \phi \, d\tau = c_1^2 H_{11} + 2c_1 c_2 H_{12} + c_2^2 H_{22}
$$

同理作为分母的也可以被写为

$$
\int \phi^2 \, d\tau = c_1^2 S_{11} + 2c_1 c_2 S_{12} + c_2^2 S_{22}
$$

其中的$H_{ij}$和$S_{ij}$被称为 matrix elements 。所以整个变分推断的式子可以被写为

$$
E(c_1, c_2) = \frac{c_1^2 H_{11} + 2c_1 c_2 H_{12} + c_2^2 H_{22}}{c_1^2 S_{11} + 2c_1 c_2 S_{12} + c_2^2 S_{22}}
$$

为了更好求最小值，我们可以把分母乘过去

$$
E(c_1, c_2) (c_1^2 S_{11} + 2c_1 c_2 S_{12} + c_2^2 S_{22}) = c_1^2 H_{11} + 2c_1 c_2 H_{12} + c_2^2 H_{22}
$$

最小值的条件就是各个方向(未知数)的偏导数为0，所以对$c_1$求偏导可以得到

$$
(2c_2 S_{11} + 2c_1 S_{12}) E + \frac{\partial E}{\partial c_1} (c_1^2 S_{11} + 2c_1 c_2 S_{12} + c_2^2 S_{22}) = 2c_1 H_{11} + 2c_2 H_{12}
$$

现在我们假设这组$c_1$ 和$c_2$就是要求的结果，所以这时的偏导数$\frac{\part E}{\part c_1}$为0。
因此得到

$$
c_1 (H_{11} - ES_{11}) + c_2 (H_{12} - ES_{12}) = 0
$$

同理有

$$
c_1 (H_{12} - ES_{12}) + c_2 (H_{22} - ES_{22}) = 0
$$

者不难看出，后面的H和E都是已知的数，唯一未知的就是E。因此这时关于两个c的方程是一个二元一次线性方程，他有非零解nontrivial solution 的条件是，这个方程组对应的系数方程的**行列式determinant**为0。即
存在线性组合

$$
\begin{vmatrix}
H_{11} - ES_{11} & H_{12} - ES_{12} \\
H_{12} - ES_{12} & H_{22} - ES_{22}
\end{vmatrix} = 0
$$

这个行列式被称为**久期行列式secular determinant** ，这个行列式等于0得到的方程被称为**secular equation久期方程**。

因此我们就可以**避开繁琐的计算！！** 这是个2*2行列式，列出的方程，会有两个E的解，我们取最小那个作为基态能量的变分近似。

## 一维势箱的具体线性变分近似

现在我们来举个例子，这里一维势能箱的计算我们取这两个函数为基底

$$
f_1 = x(1 - x) \quad \text{and} \quad f_2 = x^2(1 - x)^2
$$

然后我们简单计算以下这些矩阵元素

$$
H_{12} = \int_0^1 f_1 \hat{H} f_2 \, dx = \langle 1 | \hat{H} | 2 \rangle \\
= \int_0^1 x(1 - x) \left[ -\frac{\hbar^2}{2m} \frac{d^2}{dx^2} x^2(1 - x)^2 \right] dx\\ 
= -\frac{\hbar^2}{2m} \int_0^1 x(1 - x)(2 - 12x + 12x^2) \, dx \\
= -\frac{\hbar^2}{2m} \left( -\frac{1}{15} \right) = \frac{\hbar^2}{30} \\
$$

再验证其以下对称性

$$
H_{21} = \int_0^1 f_2 \hat{H} f_1 \, dx = \langle 2 | \hat{H} | 1 \rangle \\
= \int_0^1 x^2(1 - x)^2 \left[ -\frac{\hbar^2}{2m} \frac{d^2}{dx^2} x(1 - x) \right] dx \\
= -\frac{\hbar^2}{2m} \int_0^1 x^2(1 - x)^2(-2) \, dx \\
= -\frac{\hbar^2}{2m} \left( -\frac{1}{15} \right) = \frac{\hbar^2}{30}
$$

同样的思路我们可以计算到

$$
\begin{aligned}
H_{11} &= \frac{\hbar^2}{6m} & S_{11} &= \frac{1}{30} \\
H_{12} &= H_{21} = \frac{\hbar^2}{30m} & S_{12} &= S_{21} = \frac{1}{140} \\
H_{22} &= \frac{\hbar^2}{105m} & S_{22} &= \frac{1}{630}
\end{aligned}
$$

所以久期行列式可以写为

$$
\begin{vmatrix}
\frac{1}{6} - \frac{\epsilon}{30} & \frac{1}{30} - \frac{\epsilon}{140} \\
\frac{1}{30}-\frac{\epsilon}{140} & \frac{1}{105} -\frac{\epsilon}{630} 
\end{vmatrix} = 0 \\
\\ \epsilon = \frac{Em}{\hbar^2}
$$

久期方程为

$$
\epsilon^2 - 56\epsilon + 252 = 0
$$

简单解得结果为

$$
\epsilon = \frac{56 \pm \sqrt{2128}}{2} = 51.065 \quad \text{and} \quad 4.93487
$$

我们选择一个更小的结果，可以求得能量为

$$
E_{\text{min}} = 4.93487 \frac{\hbar^2}{m} = 0.125002 \frac{\hbar^2}{m}
$$

与前面的解析解做对比，可以得到

$$
E_{\text{exact}} = \frac{\hbar^2}{8m} = 0.125000 \frac{\hbar^2}{m}
$$

这里可以看出来我们的变分推出的值确实比真实值要大一点的，这是变分推断的大前提。

现在我们来利用这里的最优变分参数，去求一下近似函数。

要求变分参数，就是具体解这个方程，我们先从第一个方程讲起。

$$
\frac{c_2}{c_1} = \frac{H_{11} - ES_{11}}{H_{12} - ES_{12}} = \frac{\frac{\hbar^2}{6m} - \left( 4.93487 \frac{\hbar^2}{m} \right) \frac{1}{30}}{\frac{\hbar^2}{30m} - \left( 4.93487 \frac{\hbar^2}{m} \right) \frac{1}{140}} = 1.13342
$$

这里求出了$c_2 = 1.13342c_1$这个关系，所以要求的式子变成了

$$
\phi(x) = c_1 \left[ x(1 - x) \right] + 1.13342 x^2(1 - x)^2
$$

之后我们可以利用归一化的性质，求出$c_1$，如以下式子

$$
\int_0^1 \phi^2(x) \, dx = c_1^2 \int_0^1[x^2(1-x)^2+2.26684x^3(1-x)^3+1.28464x^4(1-x)^4]dx = 1
$$

在求解之前，我们利用一个经典的积分案例

$$
\int_0^1 x^m (1 - x)^n \, dx = \frac{m! n!}{(m + n + 1)!}
$$

所以式子被转化为

$$
\int_0^1 \phi^2(x) \, dx = c_1^2 \left( \frac{21.21}{51} + \frac{2.26684}{7} + \frac{3.131}{7} + \frac{1.28464}{9} + \frac{4.44}{9} \right) = 0.0515642 c_1^2 = 1
$$

因此我们求出$c_1$并得到最终的方程

$$
\phi(x) = 4.40378 x(1 - x) + 4.99133 x^2(1 - x)^2
$$

与我们求出的解析解可以得到

$$
\psi_1(x) = 2^{1/2}\sin{\pi x}
$$

画出图像可以看到，两者的区别没有，这也反映在我们最后求出的解上误差很小。

![1741700713770](.\figure\1741700713770.png)

还记得我们求解这个问题时得到两个解吗，现在来探寻一下另一个解的实际意义。

它是盒子中粒子第一激发态能量的上界。我们上面计算得到的值与真实值对比是

$$
E_{v1} = 1.2935\frac{h^2}{m}\\
E_{exact1} = 0.5 \frac{h^2}{m} 
$$

因此，我们看到，虽然第二个根是$E_2$的上界，但它是一个相当粗糙的上界。虽然有一些方法可以给出激发态能量更好的上界，但我们将只局限于确定基态能量 

如果我们用N个函数的线性组合，而不是像之前那样用两个函数的线性组合，我们得到N个线性方程并且有N个未知
数，这里可以得到。

$$
\begin{aligned}
c_1 (H_{11} - ES_{11}) + c_2 (H_{21} - ES_{21}) + & \cdots + c_N (H_{IN} - ES_{1N}) = 0 \\
c_1 (H_{12} - ES_{12}) + c_2 (H_{22} - ES_{22}) + & \cdots + c_N (H_{2N} - ES_{2N}) = 0 \\
& \vdots \\
c_1 (H_{IN} - ES_{IN}) + c_2 (H_{S2N} - ES_{2N}) + & \cdots + c_N (H_{NN} - ES_{NN}) = 0
\end{aligned}
$$

我们可以将$ES{11}$等移到右侧，从而用矩阵符号简洁地表示这些方程。

$$
\mathbf{H}c = E\mathbf{S}c
$$

其中$\mathbf{H}$是由$H_{ij}$组成的N乘N方程，S是由$S_{ij}$组成的，c是由要求的向量$c_i$组成的1乘
N。要得到齐次方程的非零解，我们要对这个系数矩阵的久期特征值转化为久期方程

$$
\begin{vmatrix}
H_{11} - ES_{11} & H_{12} - ES_{12} & \cdots & H_{1N} - ES_{1N} \\
H_{21} - ES_{21} & H_{22} - ES_{22} & \cdots & H_{2N} - ES_{2N} \\
\vdots & \vdots & \ddots & \vdots \\
H_{I1} - ES_{I1} & H_{I2} - ES_{I2} & \cdots & H_{NN} - ES_{NN}
\end{vmatrix} = 0
$$

或者用更简洁的写法可以写为

$$
|\mathbf{H} -E\mathbf{S}| = 0
$$

我们注意到$\hat{H}$是一个Hermitian算子，所以有$H_{ij}=H{ji}$。与这个久期行列式相关的久期方程是E中的一个n阶多项式。我们选择这个方程的最小根作为基态能量的近似值。所以这是一个n次方程求解的问题，只能使用各种数值计算的迭代方法来求解。

一旦解出基态能量后，再利用上面的会带方法，不断求出$c_2/c_1$,$c_3/c_1$ ,$c_N/c_1$的关系，再利用归一化求出$c_1$以此实现使用基组来表示出这个波动函数。

## 势能存在的一维势箱的变分近似

现在我们模拟一种更常见的模型，在如下势能下的一维粒子运动

$$
V(x) = 
\begin{cases} 
\infty& x < 0\\ 
\frac{V_0 x}{a}   & 0 < x < a \\ 
\infty & x > a 
\end{cases}
$$

在选取基底时，我们采用之前的零势能情况下的的两个三角函数的线性组合

$$
\phi(x)=c_1\left(\frac{2}{a}\right)^{1/2}\sin\frac{\pi x}{a}+c_2\left(\frac{2}{a}\right)^{1/2}\sin\frac{2\pi x}{a}
$$



之后我们来计算一下需要的参数

$$
H_1  =\left\langle\psi_{1}^{(0)}\left|\hat{H}^{(0)}+\frac{V_{0}x}{a}\right|\psi_{1}^{(0)}\right\rangle \\ 
\\
=\frac{h^{2}}{8ma^{2}}+\frac{2V_{0}}{a^{2}}\int_{0}^{a}dxx\sin^{2}\frac{\pi x}{a}=\frac{h^{2}}{8ma^{2}}+\frac{V_{0}}{2} \\
H_{22}  =\frac{4h^{2}}{8ma^{2}}+\frac{2V_{0}}{a^{2}}\int_{0}^{a}dxx\sin^{2}\frac{2\pi x}{a}=\frac{4h^{2}}{8ma^{2}}+\frac{V_{0}}{2} \\
 H_{12}=H_{21}  =\frac{2V_0}{a^2}\int_0^adxx\sin\frac{\pi x}{a}\sin\frac{2\pi x}{a}=-\frac{16V_0}{9\pi^2} \\
S_{11}=S_{22}  =1\quad\mathrm{and}\quad S_{12}=0
$$



之后我们就可以列出久期行列式与久期方程

$$
\left.\left|
\begin{array}
{cc}\frac{h^2}{8ma^2}+\frac{V_0}{2}-E & -\frac{16V_0}{9\pi^2} \\
 \\
-\frac{16V_0}{9\pi^2} & \frac{4h^2}{8ma^2}+\frac{V_0}{2}-E
\end{array}\right.\right|=0
$$



令,

$$
\varepsilon = \frac{8ma^2E}{h^2} \\
v_0 = \frac{8ma^2V_0}{h^2} \\
$$

方程可以转化为

$$
\begin{vmatrix}
1+\frac{v_0}{2}-\varepsilon & -\frac{16v_0}{9\pi^2} \\
 \\
-\frac{16v_0}{9\pi^2} & 4+\frac{v_0}{2}-\varepsilon
\end{vmatrix}=0
$$

所以久期方程为

$$
\varepsilon^2-(5+v_0)\varepsilon+\left(1+\frac{v_0}{2}\right)\left(4+\frac{v_0}{2}\right)-\frac{256v_0^2}{81\pi^4}=0
$$

很容易利用球根公式得到结果为

$$
\varepsilon=\frac{5+v_0}{2}\pm\frac{1}{2}\left[9+\left(\frac{32v_0}{9\pi^2}\right)^2\right]^{1/2}
$$

取负号后得到最小的$\varepsilon$ 从而利用前面的公式求出最小能量，再利用久期行列式的某些项解出线性组合的系数。

# 变分函数里也可以含有未知数

之前我们提到的变分函数都是最基本的线性组合

$$
\phi=\sum_{j=1}^Nc_jf_j
$$



这里在我们选取基组时，同样在基组函数中也可以有变分参数

$$
\phi=\sum_{j=1}^Nc_je^{-\alpha_jr^2}
$$

注意在这种情况下，并不能转化为一个简单的久期行列式了。因为对于$\alpha$来说并不是现行的。因此我们要优化2N个参数，这就只能使用梯度下降法等数值计算的方法了。幸运的是有许多计算程序可以实现这些。比如MathCAD或者Mathematic，本质上就是for循环不断迭代。