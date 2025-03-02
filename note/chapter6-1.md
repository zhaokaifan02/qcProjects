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
这个$B = \hbar^2/2I$被称为**转动常数rotational constant**。同样我们可以看到对于第J能级，他的简并度为
$$
g_J = 2J+1
$$
这是由m的取值为-J到J得到的。