# 刚性旋转器与转动光谱

双原子分子的**旋转rotation**可以用**刚性旋转器rigid rotator**来描述，它就像一个**旋转的哑铃rotating dumbbell** 。使用之前约化质量reduced mass 的思想，我们可以**将双原子分子的旋转想象为约化质量为$\mu$的物体绕着一个固定的中心旋转**。

这个问题很自然的适用于球坐标，这个系统对应的波函数是$\theta$和$\phi$的函数，也就是两个旋转的角。

波函数被称为**球谐函数spherical harmonics**，它出现在许多有固定中心的问题中。

之后我们会见到氢原子的轨道s p d等都是用球谐函数来指定的。

求解刚性旋转体的薛定谔方程是一个相当漫长的过程，因此我们将简单地介绍和讨论能量和相应的波函数。

我们将用允许的能量来描述双原子分子的微波光谱，并且来看看如何确定键长。

# 刚性旋转体的能量层级

之前我们讨论了双原子分子的振动模型，现在我们来讨论一下双原子分子的旋转模型。

![1740910141040](.\figure\1740910141040.png)

因为两个原子之间的距离是固定的，所以这个模型又被称为**刚性旋转模型rigid-rotator model**。即使双原子分子在旋转时振动，**与键长相比，振动幅度很小**，所以考虑键长固定是一个很好的近似。

让分子绕质心旋转，频率为每秒$\nu_{rot}$转。因此两个原子的旋转的线速度为$v_1 = 2\pi l_1 \nu_{rot}$和 $v_2=2\pi l_2\nu_{rot}$。由于**角速度radians per second** 的定义$\omega = 2\pi \nu_{rot}$。两个线速度可以写为$v_1=l_1\omega$ 和 $v_2 = l_2\omega$。

因此这个双原子系统的动能可以写作

$$
T = \frac{1}{2} m_1 v_1^2 + \frac{1}{2} m_2 v_2^2 = \frac{1}{2} (m_1 l_1^2 + m_2 l_2^2) \omega^2
$$

我们定义惯性矩moment of inertia 为

$$
I = m_1 l_1^2 + m_2 l_2^2
$$

因此动能式子可以写作为

$$
T = \frac{1}{2} I\omega^2
$$

由于质心的性质$m_1l_1 = m_2l_2$ 我们可以参照之前的约化质量进行带入

$$
l = l_1+l_2 \\
\mu = \frac{m_1m_2}{m_1+m_2} \\
I = \mu l^2
$$

在一开始我们讨论过质量为m的单个物体在绕着固定中心l进行旋转。在当时的情况下，惯性矩等于

$$
I = ml^2
$$

将这两个方程进行比较，这个这个双原子系统可以被认为是质量为$\mu$的物体绕着距离为$l$的固定位置进行旋转。

我们就把**一个二体问题转化为一个等效的一体问题**，就像我们在在研究双原子分子的振动中对谐振子所做的那样。

因此角动量$L$和动能$T$都可以写出来

$$
L = I\omega \\
T = \frac{L^2}{2I}
$$

没有势能项，因为在没有任何外力（例如，电或磁力）的情况下，分子的能量不依赖于它在空间中的方向。

因此刚性旋转的哈密顿算子就是动能算子。所以对于双原子系统的旋转系统的能量算子可以表示为

$$
\hat{H} = \hat{T} = -\frac{\hbar^2}{2\mu} \nabla^2 \quad (r \text{ constant})
$$

这里的拉普拉斯算子是三维的，因为实际情况下分子的旋转也是在空间中的。

这里系统是存在一个自然的对称中心，如果一个粒子(这里双原子近似了单粒子)绕着一个固定的中心旋转，我们使用球坐标更加方便。因此我们可以把拉普拉斯算子转化为球坐标的形式。

$$
\nabla^2 = -\frac{1}{r^2} \frac{\partial}{\partial r} \left( r^2 \frac{\partial}{\partial r} \right)_{r, \phi} + \frac{1}{r^2 \sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right)_{r, \phi} + \frac{1}{r^2 \sin^2 \theta} \frac{\partial^2}{\partial \phi^2} _{r, \phi}
$$

因为旋转器中r是等于l的常数，所以所以拉普拉斯算子就变化为

$$
\nabla^2 = \frac{1}{l^2 \sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right) + \frac{1}{l^2 \sin^2 \theta} \frac{\partial^2}{\partial \phi^2} \quad (r \text{ constant})
$$

因此动能算子也就是能量算子我们就可以得出来了

$$
\hat{H} = -\frac{\hbar^2}{2I} \left[ \frac{1}{\sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right) + \frac{1}{\sin^2 \theta} \frac{\partial^2}{\partial \phi^2} \right]
$$

因为能量和动量的关系，我们可以求出角动量算符为

$$
\hat{H} = \frac{\hat{L}^2}{2I} \\
\hat{L}^2 = -\hbar^2 \left[ \frac{1}{\sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right) + \frac{1}{\sin^2 \theta} \frac{\partial^2}{\partial \phi^2} \right]
$$

角动量的平方是量子力学中自然发生的算子，他是利用能量和动量的关系自然而然的推导出来的。

这里的$\theta$和$\phi$都是无单位的，因此这个对于算子和分子的角动量算符的自然单位是$\hbar$.

刚性旋转系统的方向完全取决于$\phi$和$\theta$，因此这个**刚性旋转系统的波函数的变量是$\theta$和$\phi$**。

我们习惯把这个系统的波函数定义为$Y(\theta,\phi)$。因此系统的薛定谔方程可以写为

$$
\hat{H}Y(\theta,\phi) = EY(\theta,\phi)
$$

我们可以将前面的算子带入得到

$$
-\frac{\hbar^2}{2I} \left[ \frac{1}{\sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial Y(\theta, \phi)}{\partial \theta} \right) + \frac{1}{\sin^2 \theta} \frac{\partial^2 Y(\theta, \phi)}{\partial \phi^2} \right] = E Y(\theta, \phi)
$$

然后我们可以两边同时乘上$\sin^2{\theta}$,再做一些变量代换可以得到

$$
\beta = \frac{2I E}{\hbar^2} \\
\sin \theta \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial Y}{\partial \theta} \right) + \frac{\partial^2 Y}{\partial \phi^2} + (\beta \sin^2 \theta) Y = 0
$$

为了解这个方程我们再次使用分离变量法

$$
Y(\theta, \phi) = \Theta(\theta) \Phi(\phi)
$$

整个方程可以代入得

$$
\sin \theta \frac{d}{d\theta} \left( \sin \theta \frac{d \Theta}{d\theta} \right) + \beta \sin^2 \theta + \frac{1}{\Phi(\phi)} \frac{d^2 \Phi}{d\phi^2} = 0

$$

因为两个变量是独立的所以我们可以仿照之前的思路设置一个$m^2$

$$
\sin \theta \frac{d}{d\theta} \left( \sin \theta \frac{d \Theta}{d\theta} \right) + \beta \sin^2 \theta = m^2 \\
\frac{1}{\Phi(\phi)} \frac{d^2 \Phi}{d\phi^2} = -m^2
$$

对于第二个方程我们见的太多了，就是我们第一节提出的最基本的薛定谔方程

$$
\frac{d^2 \Phi}{d\phi^2} + m^2\Phi(\phi) = 0
$$

因此这个方程的两个解我们可以很轻易的写出来为

$$
\Phi(\phi) = A_me^{im\phi}\\
\Phi(\phi) = A_{-m}e^{-im\phi}
$$

回忆一下上次我们处理这种方程还是再盒中粒子模型，我们解出m的方法是利用其边界性质得到的。
这里同样的$\phi$代表旋转，所以天然有

$$
\Phi(\phi+2\pi)  = \Phi(\phi)
$$

带入整理得

$$
A_m e^{im(\phi + 2\pi)} = A_m e^{im\phi} \\
A_me^{im\phi} e^{im2\pi} = A_me^{im\phi} \\
e^{im2\pi} = 1
$$

同样的带入第二个-m的式子可以得到

$$
A_m e^{im(\phi + 2\pi)} = A_m e^{im\phi}
$$

使用欧拉公式展开得到

$$
\cos(2\pi m) \pm i \sin(2\pi m) = 1
$$

解得

$$
m = 0, \pm 1, \pm 2, \ldots
$$

所以这个波动方程的解为

$$
\Phi_m(\phi) = A_m e^{im\phi} \quad m = 0, \pm 1, \pm 2, \ldots
$$

之后我们可以进行归一化求得归一化因子

$$
\int_0^{2\pi} \Phi_m^*(\phi) \Phi_m(\phi) d\phi = 1 \\
|A_m|^2 \int_0^{2\pi} d\phi = 1 \\
A_m = (2\pi)^{-1/2}
$$

所以波动方程的解为

$$
\Phi_m(\phi) = \frac{1}{(2\pi)^{1/2}} e^{im\phi} \quad m = 0, \pm 1, \pm 2, \ldots
$$

现在我们将视角回到第一个方程，因为我们已经确定了m的值，所以不难看出$\beta$满足

$$
\beta = J(J + 1) \quad J = 0, 1, 2, \ldots
$$

所以这个能量可以表示为

$$
E_J = \frac{\hbar^2}{2I} J(J + 1) = B J(J + 1) \quad J = 0, 1, 2, \ldots
$$

这个$B = \hbar^2/2I$被称为**转动常数rotational constant**。同样我们可以看到对于第J能级，他
的简并度为

$$
g_J = 2J+1
$$

这是由m的取值为-J到J得到的。具体处理第一个方程的思路既可以用前面的幂函数展开法，也可以用更优雅的方法求出来，我们后面再补充。

# 双原子分子的刚性旋转体模型

和震动模型一样，量子化的旋转模型的能级变化只能为$\Delta J = \pm1$,也就是他的选择规则要求只能在相邻能级变化。

现在我们来计算一下从J到J+1时需要吸收的能量为

$$
\Delta E = E_{J+1} - E_J = -\frac{\hbar^2}{2I} \left[ (J+1)(J+2) - J(J+1) \right]\\
= \frac{\hbar^2}{I} (J+1) = \frac{h^2}{4\pi^2 I} \qquad(J+1) J = 0, 1, 2, \ldots

$$

再套用波尔的频率与能量的公式可以得到

$$
\Delta E =h\nu_{obs} \\
\nu_{obs} = \frac{h}{4\pi^2 I} \qquad J = 0,1,2,\dots
$$

双原子分子的约归质量大约是$10^{-25}$到$10^{-26}$kg,一般的键长大约为$10^{-10}m$100pm，因此惯性矩moment of inertia的值大约是$10^{-45}kgm^2$到$10^{-46}kgm^2$。我们假设惯性矩$I=5\times 10^{-45}kgm^2$ ,可以计算得到的吸收频率为$2\times 10^{10}Hz$，这个吸收频率落在微波段。因此，双原子分子的旋转跃迁发生在微波区，对分子旋转跃迁的研究称为**微波光谱学microwave spectroscopy**。

我们偶尔将其变形得到

$$
\nu_{obs} = 2B(J+1)\\
B = \frac{h}{8\pi^2 I}
$$

频率在观测时的反应不明显，因此我们往往会用波数$\tilde{\omega}=v/c$来表示。

$$
\tilde{\omega_{obs}} = 2\tilde{B}(J+1)\\
\tilde{B} = \frac{h}{8\pi^2Ic}
$$

因此我们就可以一次来预测实际的双原子分子的旋转吸收光谱。

![](C:\msys64\home\fan%20zhaokai\qcProjects\note\figure\2025-03-03-19-52-08-image.png)

因此在假设刚性旋转模型下，只需要测出光谱的**间隔separated**，就可以算出惯性矩$I$.再有$I=\mu l $从而求出分子的键长。比如

H35Cl的吸收光谱我们假设是等间隔的，间隔为$6.26\times10^{11}Hz$

$$
\Delta\nu_{obs} = 2B = \frac{h}{4\pi^2 I} = 6.26\times 10^{11}
$$

解得

$$
I = \frac{6.626 \times 10^{-34} \, \text{J} \cdot \text{s}}{4\pi^2 (6.26 \times 10^{11} \, \text{s}^{-1})} = 2.68 \times 10^{-47} \, \text{kg} \cdot \text{m}^2
$$

之后我们计算约化质量为

$$
\mu = \frac{(1.00 \, \text{amu})(35.0 \, \text{amu})}{(36.0 \, \text{amu})} \left(1.661 \times 10^{-27} \, \text{kg} \cdot \text{amu}^{-1}\right) = 1.66 \times 10^{-27} \, \text{kg}

$$

最后计算键长为

$$
l = \left( \frac{2.68 \times 10^{-7} \, \text{kg} \cdot \text{m}^2}{1.661 \times 10^{-27} \, \text{kg}} \right)^{1/2} = 1.29 \times 10^{-10} \, \text{m} = 129 \, \text{pm}

$$

# 旋转运动与震动运动相结合

在前一章中，我们展示了双原子分子的振动运动可以很好地近似于谐振子，在这一章中，我们刚刚看到了双原子分子的旋转运动可以很好地用刚性旋转器来表示。因此我们把这两种思想相结合，分子即有旋转运动也有震动运动，所以一个双原子模型可以近似为**刚性旋转-谐振子模型 rigid rotator- harmonic oscillator model**。 在这种近似下，能量可以被写为

$$
E_{v,J} = (v+\frac{1}{2})h\nu + BJ(J+1)
$$

 因此我们可以将其转化为可观察的波数

$$
\frac{E_{v,J}}{h c}= \tilde{E_{v,J}} = (v+\frac{1}{2})\tilde{\omega} + \tilde{\omega}J(J+1)
$$

其中

$$
\tilde{\omega} = \frac{1}{2\pi c} \left( \frac{k}{\mu} \right)^{1/2} \quad \text{and} \quad \tilde{B} = \frac{h}{8\pi^2 c I}
$$

这里的变化看起来一头雾水，只能判断出来$\tilde{E}$的单位是$cm^{-1}$，之后我们在做减法时就可以看出其精妙之处。

这里的参数$\tilde{\omega}$和$\tilde{B}$的具体值分别是$10cm^{-1}$和$1cm^{-1}$。因此在v和J变化时，由v变化引起的震动能量变化是由J变化引起的旋转能量变化的100到1000倍。现在我们做差来证明他。

当这个系统吸收电磁波时，震动跃迁transition和旋转跃迁同时发生。但又因为是吸收能量，所以震动能级只能向上变化，而旋转则都可以，因此有

$$
\Delta v = +1 \\
\Delta J = \pm 1
$$

所以我们可以得到

$$
\Delta E = h\nu \\
\tilde{E_{v,J}} = \frac{E_{v,J}}{h c} \\
\frac{\Delta E_{v,J}}{h c} =  \frac{h\nu}{h c} = \tilde{\nu}  cm^{-1} \\
\nu_{\text{obs}}(\Delta J = +1) = \bar{E}_{J+1,\nu} - \bar{E}_{J,\nu} \\
= \left( \nu + \frac{3}{2} \right) \tilde{\omega} + \tilde{B}(J+1)(J+2) - \left( \nu - \frac{1}{2} \right) \tilde{\omega} - \tilde{B}(J+1) \\
= \tilde{\omega} + 2 \tilde{B}(J + 1), \quad J = 0, 1, 2, \ldots 

$$

同样的当想低能级旋转时有

$$
\nu_{\text{obs}}(\Delta J = -1) = \tilde{E}_{J-1,\nu} - \tilde{E}_{J,\nu} = \tilde{\omega} - 2 \tilde{B}J, \quad J = 1, 2, \ldots
$$

所以由之前的我们分析的这两个参数的情况对应在具体的能量变化是成立的。我们可以画出震动和旋转的能级图

![](.\figure\2025-03-04-16-06-44-image.png)

不难看出当震动v变化提升的能量需要数次旋转变化J的能量提升来体现。

对于我们计算的吸收光谱来说，我们也可以预测出吸收谱线。前面我们算出的公式可以分为两类，一种是高频率的当$\Delta J = +1$时发生，也称为R branh。另一种J = -1时发生的我们称其为 P branch。我们以HBr的吸收谱线为例子

![](C:\msys64\home\fan%20zhaokai\qcProjects\note\figure\2025-03-04-16-14-13-image.png)

可以看到这个测量出的吸收谱线由较长的实线(foundmental)和较短的细线组成。

细线出现的原因很好理解，因为我们这里的一切计算都是基于谐振子只有平方项计算得来的，真实的势能后面项都忽略了。

因为这里是将震动势能从0到1能级的吸收谱线，因为不可能不发生旋转，所以$\Delta J = 0$的情况下对应的吸收谱线为空。缺口的每一边是一系列间距约为10厘米的线。这表明每个吸收谱的插值$2\tilde{B} = 10cm^{-1}$ 

但这种预测的结果时P和R分支的主线之差是定值，实际情况却是随着频率的增加，**R分支的线间距更近，而P分支的线间距随着频率的降低而更远**。 



# 旋转-振动相互作用解释了旋转-振动频谱中P和R分支的线间距不相等

现在我们来解释上面的不等间距问题。 等间距情况下我们推导的过程是假设两个参数不变的，但实际上仔细观察

$$
\tilde{B} = \frac{h}{8\pi^2cI} = \frac{h}{8\pi^2c\mu l}
$$

这里的键长$l$是会随着能量震动的能量增大，振幅增加，从而导致键长变大的。 虽然我们不知道具体的对应关系。但是可以确定$\tilde{B}$确实受震动能级$v$影响，我们将其记作$\tilde{B}_v$。 