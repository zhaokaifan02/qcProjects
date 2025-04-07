# 如果两个算子可交换，则它们有一个互特征函数集

## Hermitian算子与完备正交基

我们先回忆以下线性代数的基本知识。

 在线性代数中，对于对称矩阵(复数域上为Hermitian矩阵)。这种对称性强的矩阵有以下性质。

    1. 特征值都为实数

    2. 特征向量两两垂直相互正交，或者是可以通过施密特正交化来实现两两正交。

同样的量子力学中的算子都是Hermitian算子。与Hermitian矩阵不同，算子的共轭转置无法以具体形势给出只能以二次积分的形式给出。用Dirca符号表示如下

$$
\lang n | \hat{A}|  m\rang ^* = \lang m | \hat{A} | n \rang
$$

满足这样的算子就是Hermitian算子。

算子对应的物理量能被观测到的情况就在就是**特征值方程eigenvalue equation**，对应的特征值

$$
\hat{A}\psi = a \psi
$$

什么叫做完备正交基呢。量子力学中的算子通常作用在**无限维希尔伯特空间**（如平方可积函数空间$L^2$）。此时需要更严格的数学处理。首先介绍**自伴算子**。

自伴算子：算子本身等于其共轭转置，也就是符合上面指出的Hermitian算子的性质。自伴算子就是Hermitian算子。

之后我们再介绍自伴算子的谱，**所谓谱就是前面提到的特征值的集合。** 自伴算子的谱分为

    1. 离散谱 对应平方可积的特征函数。 如哈密顿量

    2. 连续谱 对应一般的广义函数。 如动量

量子化学中研究的大多是离散谱。对于离散谱的算子来说，它具有**正交性**和**完备性**。

正交性指的是**不同特征值的特征函数自动正交；简并态可通过正交化处理。**

完备性指的是任何平方可积的波函数$ψ(x)$均可展开为特征函数的线性组合：

$$
\psi(x) = \sum_{n} c_n \phi_n(x), \quad c_n = \langle \phi_n | \psi \rangle,
$$

其中$\{\phi_n\}$是特征函数的集合。**展开系数 $|c|^2$ 表示测量对应可观测量的概率**。

 量子力学中：

- 能量算子（哈密顿量）**在束缚态下，特征函数构成**完备正交基，可展开任意波函数。

- **动量算子**和**位置算子**的广义特征函数通过傅里叶变换构成“连续基底”，形式上允许展开，但需积分处理(暂时记住)。

- **所有自伴算子的谱分解**（离散+连续）共同保证了量子态的完备描述。

这一框架是量子力学形式体系的基石，既包含有限维的直观类比（离散谱），又需要无限维的数学扩展（连续谱）。

而在我们量子化学的研究中，也就是在束缚态问题（如原子、分子系统）中，哈密顿量的谱通常是**纯离散的**，因此其特征函数构成完备正交基。这是量子化学计算（如Hartree-Fock方法）的基础。  
但对于非束缚系统（如自由粒子、散射态），哈密顿量的连续谱部分需额外处理。

一句话总结，**记住能量算子的特征函数可以作为基底就行**

## 同特征函数算子的可交换问题

对于两个算子，**如果这两算子是可交换的，那么其具有相同的特征函数集合**。

我们从个方向进行证明，先假设两个原子具有相同的特征函数组合，去证明两个算子是可交换的。

因为两个原子有相同的特征函数，因此有

$$
\hat{A}\psi_n = a_n\psi_n \\
\hat{B}\psi_n = b_n\psi_n
$$

由于算子是Hermitian算子，因此任何函数都可以表示为，这些正交的基函数的线性组合

$$
f(x) = \sum_n c_n\phi_n(x)
$$

因此我们有

$$
[\hat{A}, \hat{B}] f(x) = \sum_{n} c_n [\hat{A}, \hat{B}] \phi_n(x)\\
= \sum_{n} c_n (a_n b_n - b_n a_n) \phi_n(x) = 0
$$

下来我们再证明，如果两个算子是可交换的，则这两个原子具有相同的特征函数组合。

$$
\hat{A}\phi_a = a\phi_a \\
\hat{B}\phi_b = b\phi_b
$$

又因为两个算子可交换，我们有

$$
[\hat{A},\hat{B}]\phi_a = 0\\
\hat{A}\hat{B}\phi_a = \hat{B}\hat{A}\phi_a \\
$$

之后再带入得到

$$
\hat{A}(\hat{B}\phi_a) = a(\hat{B}\phi_a)
$$

这说明$\hat{B}\phi_a$ 也就是算子A的特征函数。即存在常数使得

$$
\hat{B}\phi_a = c\phi_a
$$

即说明在非简并情况下,B算子和A算子有相同的特征函数。

**我们只在没有简并的情况下证明了这一点，但即使对于简并系统也是如此。**

# 在测量中获得某一观测值的概率由傅里叶系数给出

## 完备性与傅里叶展开

我们在前面的正交基里说过任何平方可积的波函数都可以表示为自伴算子的特征函数的线性组合
$$
\psi(x) = \sum_{n} c_n \phi_n(x), \quad c_n = \langle \phi_n | \psi \rangle,
$$

反过来说，如果对一组正交的平方可积的$\{\psi_n\}$,如果他们的线性组合可以表示出**任意适当的函数a suitably arbitrary function**，即

$$
f(x) = \sum_{n=1}^{\infty} c_n \psi_n(x)
$$

我们称这一组函数是**完备的complete**

与线性代数的矩阵观念不同，我们通常很难证明其完备性。

**在实践中，人们通常假设与某个Hermitian算子相关的正交集是完备的。**

为了体会这种性质，我们可以采取平方可积的正交性质，进行如下操作

$$
\int_{-\infty}^{\infty} \psi_m^*(x) f(x) \, dx = \sum_{n=1}^{\infty} c_n \int_{-\infty}^{\infty} \psi_m^*(x) \psi_n(x) \, dx = \sum_{n=1}^{\infty} c_n \delta_{mn} = c_m
$$

求和中的所有项都等于0除了$m=n$这一项。

因此我们就求出了对于函数$f(x)$的展开式的第m项，采用Dirac记法可以表示为

$$
f(x) = \sum_{n=1}^{\infty} c_n \psi_n(x) \qquad c_n = \lang \psi_n |f\rang
$$

**在物理和化学的许多分支中，用标准正交集表示函数的展开式是一项重要而有用的技术**

举个例子，按照前面讲过的单粒子在固定零势能盒子中的运动为例子。

现在有一个**适当的函数**

$$
f(x) = \frac{30}{a^5}^{1/2}x(a-x)
$$

我们选取的一组正交基是单粒子盒子运动模型的哈密顿算子的对应的特征函数组

$$
\frac{2}{a}^{1/2}\sin{\frac{n\pi x}{a}}
$$

因此展开这个函数的过程为

$$
f(x) = \left( \frac{2}{a} \right)^{1/2} \sum_{n=1}^{\infty} c_n \sin \left( \frac{n \pi x}{a} \right), \quad 0 \leq x \leq a
$$

因为这个三角函数的共轭转置为他本身，所以我们可以采用前面介绍的求法来求出其组合的具体系数

$$
c_n = \left( \frac{2}{a} \right)^{1/2} \int_{0}^{a} f(x) \sin\left(\frac{n \pi x}{a}\right) \, dx
$$

简单计算得到

$$
c_n = \left( \frac{60}{a^6} \right)^{1/2} \int_{0}^{a} x(a - x) \sin\left(\frac{n \pi x}{a}\right) \, dx \\
= \left( \frac{60}{a^6} \right)^{1/2} \left[ 2 \left( \frac{a}{\pi} \right)^3 (1 - \cos n \pi) \right] \\
= \frac{4(15)^{1/2}}{\pi^3 n^3} [1 - (-1)^n]
$$

因此整个这个系数可以被写为

$$
c_n = 
\begin{cases} 
\frac{8(15)^{1/2}}{\pi^3 n^3} & \text{for odd values of } n \\ 
0 & \text{for even values of } n 
\end{cases}
$$

所以可以看到当n为**偶数even**时组合系数为0。我们把用标准正交基表示一个函数的展开式称为**傅里叶展开式Fourier expansion**或**傅里叶级数Fourier series** 。因为我们这里使用一组只有sin函数的正交基进行进行展开的，所以这种展开被叫做**Fourier sine series** 。展开中的系数c称为**傅里叶系数 Fourier coefficients** 。 

## 傅里叶展开观点下的特征值概率

前面我们提到过，对于一个算子我们**实际可观测到的(方差为0的)只能是其特征值**。具体计算要观测物理量的分布的特征数(均值，方差)可以通过归一化后的状态函数的Dirca算符来描述。
$$
\lang A \rang = \lang \psi| \hat{A|\psi}\rang = \int\psi^*\hat{A}\psi \, dx
$$

前面推到过，如果$\psi$这好是算符A的本征函数时，A的均值就是a，方差是0，表明可以被具体观察到。

反之a是以具体分布而存在的，反映到单次**观测(采样)**中，能看到的也是某个特征值。

现在有了新问题，如果一个系统的固有值集合为$\{a_n\}$，可以用一个函数$\Psi$来表示，那么我们如何求出一次测量中获得$a_n$的概率呢？

我们以表示能量的哈密顿算子为例，要求的哈密顿算子能量均值加上我们用一组正交基对其展开可以得到
$$
\langle E \rangle = \int_{-\infty}^{\infty} \Psi^*(x) \hat{H} \Psi(x) \, dx \\
= \int_{-\infty}^{\infty} \left[ \sum_{n} c_n^* \psi_n(x) \right] \hat{H} \left[ \sum_{m} c_m \psi_m(x) \right] \, dx \\
= \sum_{n} \sum_{m}c_n^*c_m  \int_{-\infty}^{\infty} \psi_n^*(x) \hat{H} \psi_m(x) \, dx
 \\
$$
在利用Hermitian算子的性质可以得到，正交性，特征向量
$$
\hat{H}\psi_n = a_n \psi_n \\
\lang E \rang  = \sum_{n} \sum_{m}c_n^*c_m  \int_{-\infty}^{\infty} \psi_n^*(x) \hat{H} \psi_m(x) \, dx \\
=\sum_{n} \sum_{m}c_n^*c_mE_m  \int_{-\infty}^{\infty} \psi_n^*(x)  \psi_m(x) \, dx 
=\sum_{n} \sum_{m}c_n^*c_mE_m\lang m| n\rang \\
= \sum_{n} \sum_{m}c_n^*c_mE_m \delta_{nm}
$$
在$\delta_{nm}$的性质，只有当n和m相同时才为1，因此可以化简到如下结果
$$
\lang E \rang = \sum_n c_n^*c_n E_n
$$
在利用 Hermitian算子的特征值肯定为实数的特点，结合概率的定义

$$
\lang E \rang = \sum_n p_nE_n \\
\lang E \rang = \sum_n |c_n|^2 E_n
$$

所以我们收回了刚才的伏笔，对于一个系统，如果使用一组正交基可以展开为

$$
f(x) = \sum_{n=1}^{\infty} c_n \psi_n(x) \qquad c_n = \lang \psi_n |f\rang 
$$

则$|c_n|^2$反映了 $\psi_n$对应的特征值$a_n$出现的概率。

现在假设系统处于本征态，即系统的函数正好是特征函数$\psi_1$,有$\hat{H}\psi_1=E_n \psi_1$ 。

这时对这个系统函数的展开则是除了$c_1=1$以外其他都是0。

## 算子及其对应函数总结

现在我们对本征态，系统，特征值，观测值可观测等做一个总结。

算子： 指的是对于通常物理量的量子力学化表述

系统： 我们要研究的整体

系统的状态： 用来定量研究系统状态的指标。比如经典物理中需要3个坐标加3个方向的速度即可描述。而量子力学中使用状态函数来描述这个系统的状态。

可以作为状态函数的函数： 指的是满足平方可积的函数。

状态函数：相对于前面的平方可积，这些函数更加优秀，经过算子运算过之后符合特征值方程，也被叫做**特征函数**

平方积分为1： 指的是波函数(特征函数)的平方反应出现的概率，积分后为1

算子的谱： 指的是算子对应的特征值。

简并性： 指的是多个不同的特征函数对应同一个特征值。

标准正交基： 指的是两两正交，Dirca计算后结果为0。自己的自己计算为1。

Hermitian算子： 量子力学算子都是这种算子，他的状态函数的集合经过处理(施密特正交化)后可以得到标准正交基。

完备性：指的是可以组成空间，可以通过线性组合来描述任何可以作为状态函数的函数。

傅里叶展开： 利用标准正交基来将函数表示正交基的线性组合。

傅里叶展开系数: $c_n = \lang \psi_n| f\rang$ ，平方表示这个$\psi_n$对应的特征值$a_n$被观测到的概率

观测值： 我们一次实验看到的值，他一定是算子的谱的元素之一

可观测的值： 一定指的是方差为0的值，因为方差为0的值对应的状态函数一定是**本征函数**，所以能观察到的一定是特征值。

观测到的值的分布：虽然能观测到的一定是特征值，**但是目前系统的状态不一定是本征态**eigenstate ，所以非本征态的系统的可观测的值实际上是一个$\mu$和$\sigma$的分布，我们通过傅里叶展开系数可以具体求出某个特征值出现的概率。

## 非本征态函数的傅里叶展开

我们还是以单粒子在盒子中的运动模型为例，其系统的状态函数为

$$
f(x) = \left( \frac{30}{a^5} \right)^{1/2} x(a - x) \quad 0 \leq x \leq a
$$

我们想证明即使状态函数不是本征函数，其观测到能量为$E_n=n^2h^2/8ma^2$的概率为1

先介绍要用到的几个级数

$$
\sum_{j=0}^{\infty} \frac{1}{(2j + 1)^4} = \frac{\pi^4}{96} \quad \text{and} \quad \sum_{j=0}^{\infty} \frac{1}{(2j + 1)^6} = \frac{\pi^6}{960}
$$

粒子在盒中运动模型的本征函数为

$$
\psi_n = \frac{2}{a}^{1/2}\sin{\frac{n \pi x}{a}}
$$

使用这组本征函数可以对其傅里叶展开为
$$
f(x) = \left( \frac{2}{a} \right)^{1/2} \sum_{n=1}^{\infty} c_n \sin\left( \frac{n \pi x}{a} \right) \\
c_n  = \lang \psi_n| f(x)\rang
$$
经过神奇的计算可以得到
$$
c_n = 
\begin{cases} 
\frac{8(15)^{1/2}}{\pi^3 n^3} & \text{if } n \text{ is odd} \\ 
0 & \text{if } n \text{ is even} 
\end{cases}
$$
再根据前面推理过的$\psi_n$对应的能量$E_n$被观测到的概率为
$$
\text{probability of observing } E_n = c_n^2 = 
\begin{cases} 
\frac{960}{\pi c_n^6} & \text{if } n \text{ is odd} \\ 
0 & \text{if } n \text{ is even} 
\end{cases}
$$
我们验证这是否是一个完整的离散随机变量分布，其归一性的验证使用之前讲过的第二个级数得到
$$
\sum_{n=1}^{\infty} c_n^2 = \frac{960}{\pi^6} \sum_{n \text{ odd}} \frac{1}{n^6} = \frac{960}{\pi^6} \sum_{j=0}^{\infty} \frac{1}{(2j + 1)^6} =  \, 1
$$
之后我们来计算离散随机变量的均值有
$$
\langle E \rangle = \sum_{n=1}^{\infty} c_n^2 E_n = \sum_{n \text{ odd}} \left( \frac{960}{\pi^6 n^6} \right) \left( \frac{n^2 h^2}{8ma^2} \right) \\
= \frac{120 h^2}{m\pi^6 a^2} \sum_{n \text{ odd}} \frac{1}{n^4} = \frac{120 h^2}{m\pi^6 a^2} \sum_{j=0}^{\infty} \frac{1}{(2j + 1)^4} \\
 = \frac{5h^2}{4\pi^2ma^2}
$$
这样的计算思路和直接直接计算
$$
\lang E\rang = \lang f|\hat{E} f \rang e = \int_{0}^{a} \Psi^*(x) \hat{H} \Psi(x) \, dx = \int_{0}^{a} \Psi^*(x) \left( -\frac{h^2}{2m} \frac{d^2} {dx^2} \right) \Psi(x) \, dx \\
= -\frac{15h^2}{ma^5} \int_{0}^{a} x(a - x) \left( \frac{d^2}{dx^2} (x(a - x)) \right) \, dx \\
= \frac{30h^2}{ma^5} \int_{0}^{a} x(a - x) \, dx = \frac{5h^2}{ma^2} = \frac{5h^2}{4\pi^2 ma^2}
$$
得到的结果是一样的，这就给我们了一种很好的思路。当直接计算算子的观测值(平均值)不好计算时，可以按如下思路计算。

1. 先找这个算子的一组标准正交基$\{\psi_n\}$
2. 利用正交基来计算$c_n = \lang \psi_n | f\rang$
3. 再计算对应的$E_n$的发生概率$c_n^2$
4. 再利用离散随机变量的特性来计算出$\lang E\rang$

# 波函数的时间依赖性由时变薛定谔方程决定

我们现在开始考虑与时间有关的薛定谔方程。和与时间无关的薛定谔方程一样，我们无法直接推导出与实验有关的薛定谔方程。现在直接给出 time-dependent Schrodinger equation 
$$
\hat{H}\Psi(x,t) = i\hbar\frac{\part\Psi}{\part t}
$$
同样的思路我们采取分离变量法
$$
\Psi(x,t)=\psi(x)f(t)
$$
带入后得到
$$
\frac{1}{\psi(x)} \hat{H} \psi(x) = i \hbar \frac{df}{dt}
$$
因为左右两边都是与对方无关的，所以可以设置一个常数E，整理后得到
$$
\hat{H} \psi(x) = E \psi(x) \\
\frac{df}{dt} = -\frac{i}{\hbar} E f(t)
$$
对于第二个式子我们可以通过直接积分法快速解得
$$
f(t) = e^{-iEt/\hbar}
$$
因此整体函数可以表示为
$$
\Psi(x, t) = \psi(x) e^{-iEt/\hbar}
$$
再利用能量公式
$$
E =h\nu = \hbar\omega
$$
可以将时间依赖的状态函数整理后

$$
\Psi(x, t) = \psi(x) e^{-i\omega t}
$$

这里说明时间方程随着时间**谐波振荡oscillates harmonically** ，具有波动的特征。这也说明了薛定谔方程有波动解

如果系统处于这里解出的本征态时。有如下情况
$$
\Psi_n^*(x,t)\Psi_n(x,t)dx = \psi_n^*(x) e^{i\omega t} \psi_n(x)e^{-i\omega t}dx \\
=\psi_n^*(x)\psi_n(x)dx\
$$
因此我们不难发现，本征态时概率密度和**算子对应的均值与时间无关**。

其中$\psi_n(x)$被称为**稳定态波动方程stationary-state wave functions**，所谓稳定态就是与时间无关的。

稳定态在化学中十分重要的。比如我们可以**使用一组固定的能量状态去描述一个原子或者分子**。并且**用从一个定态到另一个定态的跃迁来表示系统的光谱特性**。玻尔的氢原子模型是对这一思想的一个简单说明。

但是，很重要的是。一个系统通常不是处于$\Psi(x, t) = \psi(x) e^{-i\omega t}$形式的波函数所描述的状态 。也就是并不是本征态的时候。

因此，回忆我们第一章讲的微分方程的本质，一开始提出的与时间相关的薛定谔方程
$$
\hat{H}\Psi(x,t) = i\hbar\frac{\part\Psi}{\part t}
$$
他的通解是所有特解的线性组合
$$
\Psi(x, t) = \sum_{n} c_n \psi_n(x) e^{-iE_nt/\hbar}
$$

我们以两个解为例
$$
\Psi(x, t) = c_1 \psi_1(x)e^{-iE_1t/\hbar} + c_2 \psi_2(x)e^{-iE_2t/\hbar}
$$
这种情况的概率密度是
$$
\Psi^*(x, t) \Psi(x, t) = 
\left[c_1^* \psi_1^*(x) e^{iE_1t/\hbar} + c_2^* \psi_2^*(x) e^{iE_2t/\hbar}\right] 
\left[c_1 \psi_1(x) e^{-iE_1t/\hbar} + c_2 \psi_2(x) e^{-iE_2t/\hbar}\right] \\
= |c_1|^2 \psi_1^*(x) \psi_1(x) + |c_2|^2 \psi_2^*(x) \psi_2(x)  \\

+ c_1^* c_2 \psi_1^*(x) \psi_2(x) \, \exp\left[i(E_1 - E_2)t\right/\hbar] \\
+ c_2^* c_1 \psi_2^*(x) \psi_1(x) \, \exp\left[i(E_2 - E_1)t\right/\hbar]
  $$
  第三项和第四项包含时间，因此他不是定态的。

现在我们用具体的两个特征函数来描述这个系统
$$
\Psi(x, t) = c_1 \left( \frac{2}{a} \right)^{1/2} e^{-iE_1t/\hbar} \sin\left( \frac{\pi x}{a} \right) + c_2 \left( \frac{2}{a} \right)^{1/2} e^{-iE_2t/\hbar} \sin\left( \frac{2\pi x}{a} \right)
$$
再验证概率密度是否满足归一性，我们简化计算直接就设置$c_1=c_2 = real$
$$
\int_0^a dx \, \Psi^*(x, t) \Psi(x, t) = \frac{2c_1^2}{a} \int_0^a dx \left( e^{iE_1t/\hbar} {\sin\left( \frac{\pi x}{a} \right)} + e^{iE_2t/\hbar} \sin\left( \frac{2\pi x}{a} \right) \right) \times \\
= \left( e^{-iE_1t/\hbar} {\sin\left( \frac{\pi x}{a} \right)} + e^{-iE_2t/\hbar} {\sin\left( \frac{2\pi x}{a} \right)} \right) \\
= \frac{2c_1^2}{a} \left[ \int_0^a dx \, \sin^2\left( \frac{\pi x}{a} \right) + \int_0^a dx \, \sin^2\left( \frac{2\pi x}{a} \right) \right] \\

+ 2 \cos\left( \frac{(E_2 - E_1)t}{\hbar} \right) \int_0^a dx \, \sin\left( \frac{\pi x}{a} \right) \sin\left( \frac{2\pi x}{a} \right) \\
  = \frac{2c_1^2}{a} \left( \frac{a}{2} + \frac{a}{2} + 0 \right) = 2c_1^2 = 1
  
  $$
  所以就可以在$c_1 = \sqrt{1/2}$时满足归一性，因此我们可以大胆假设：**与时间有关的薛定谔方程就是与时间无关的方程的解乘上时间波动。**在此情况下其解为
  $$
  
  \Psi(x, t) = \left( \frac{1}{a} \right)^{1/2} e^{-iE_1t/\hbar} \sin\left( \frac{\pi x}{a} \right) + \left( \frac{1}{a} \right)^{1/2} e^{-iE_2t/\hbar} \sin\left( \frac{2\pi x}{a} \right)
  
  $$
  现在我们来求一下他的期望位置
  $$
  
  \langle x \rangle = \int_0^a dx \, \Psi^*(x, t) x \Psi(x, t) = \frac{1}{a} \int_0^a dx \, x \sin^2\left( \frac{\pi x}{a} \right) + \frac{1}{a} \int_0^a dx \, x \sin^2\left( \frac{2\pi x}{a} \right)\\
+ \frac{2 \cos(\omega_1 t)}{a} \int_0^a dx \, x \sin\left( \frac{\pi x}{a} \right) \sin\left( \frac{2\pi x}{a} \right) \\
  = \frac{a}{2} - \frac{16a}{9\pi^2} \cos(\omega_{12} t)
  $$
  其中$\omega_{12} = (E_2 - E_1)/\hbar$ ，由此我们可以画出他的位置随时间变化的图像。

![1740397898640](.\figure\1740397898640.png)

同样概率密度也可以写为
$$
\text{probability density} = \Psi^*(x, t) \Psi(x, t) \\= \frac{1}{a} \sin^2\left( \frac{\pi x}{a} \right) + \frac{1}{a} \sin^2\left( \frac{2\pi x}{a} \right) + \frac{2}{a} \sin\left( \frac{\pi x}{a} \right) \sin\left( \frac{2\pi x}{a} \right) \cos(\omega_1 t)
$$
同样可以画出图像

![1740397997976](.\figure\1740397997976.png)

# 量子力学的假设总结

## 假设一

量子力学系统的状态完全由一个取决于坐标和时间的函数$\Phi(r,t)$指定，被称为波函数wave function或者状态函数state function。其中$\Phi^*(r,t)\Phi(r,t) dxdydz$ 表示粒子位于体积元$dxdydz$处 的概率，整体积分后结果为1.

## 假设二

经典力学中的每一个可观测值都对应着量子力学中的线性Hermitian算符。

## 假设三

对于一个物理量对应的量子力学算子$\hat{A}$, 能够被观测到(方差为0)的唯一值就是算子特征值集合$\{a_n\}$中的某一个。这个特征值对应某个特征函数
$$
\hat{A}\Psi_a = a\Psi_a
$$

## 假设四

如果一个系统处于一个由规范化(不一定是特征函数)波函数描述的状态，可以计算对于算子$\hat{A}$的平均观测值为
$$
\lang a\rang = \lang \Psi | \hat{A}|\Psi\rang = \int \Psi^*\hat{A}\Psi d\tau
$$

## 假设五

根据时变薛定谔方程，系统的波函数或状态函数随时间演化
$$
\hat{H} \Psi(x, t) = i\hbar \frac{\partial \Psi}{\partial t}
$$
