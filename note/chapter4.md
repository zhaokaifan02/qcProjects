# 波函数包含了系统的所有性质(状态)

在经典物理学中，我们只使用当前的位置(坐标)position和施加在他身上的矢量速度或矢量动量就可以刻画出他的目前状态，即位置与速度，以及其收到的合力force，由此我们可以求出轨迹方程为。

$$
\frac{d^2x}{dt^2} m = F
$$

因为位移的一阶导数是速度，二阶导数是加速度，由牛顿定律就可以推导出他收到的力。

现在我们将其推广到三维平面中去，对于三维平面，x y z每个维度都有自己的坐标和速度，同时有各个方向的位移。由此这个物体收到的力就是三维的记为$F(x,y,z)$是一个向量函数。因此我们可以写出这个系统的状态

$$
\begin{align}
    m \frac{d^2 x}{dt^2} &= F_x(x, y, z) \\
    m \frac{d^2 y}{dt^2} &= F_y(x, y, z) \\
    m \frac{d^2 z}{dt^2} &= F_z(x, y, z)
\end{align}
$$

因为这个方程是一个二阶方程**second-order equation**，所以会进行两次积分从而产生两个常数，因为我们一般**选取起始的坐标和起始各个方向的速度**。由此就可以写出他的轨迹方程了。

$$
\begin{align}
    x(t) &= x(t; x_0, y_0, z_0, v_{x0}, v_{y0}, v_{z0}) \\
    y(t) &= y(t; x_0, y_0, z_0, v_{x0}, v_{y0}, v_{z0}) \\
    z(t) &= z(t; x_0, y_0, z_0, v_{x0}, v_{y0}, v_{z0})
\end{align}
$$

我们可以把它用向量化的方式写成

$$
r(t) = r(t;r_0,v_0)
$$

这个被叫做 **轨迹trajectory。**

因此对于一个N粒子的系统，其状态可以用3N个坐标和3N个速度来决定。同时为了求得轨迹方程我们由3N个微分方程，同样需要3N个初始坐标和3N个初始速度。

这个轨迹方程允许我们最精确的观察到粒子的位置，但**是这与之前的海森堡测不准原理相违背了**。

所以对于量子领域来说，我们不能再使用轨迹来刻画粒子的状态，转而使用波函数。

量子力学系统的状态完全由一个函数$\psi(r,t)$指定，该函数依赖于粒子的坐标和时间。这个函数称为**波函数wave function**或**状态函数state function**，它有一个重要的性质，即$\psi^*\psi\,dxdydz$是粒子位于时间1的体积元dxdydz内的概率。

同样的波函数的乘积的模也反应了波的强度。

对于两个粒子，也有如下的方程

$$
\Psi^*(r_1, r_2) \Psi(r_1, r_2, t) \, dx_1 \, dy_1 \, dz_1 \, dx_2 \, dy_2 \, dz_2
$$

由于波函数的乘积反映了其密度，所以作为密度函数理应满足归一性即

$$
\iiint\limits_{\text{all space}} dx \, dy \, dz \, \Psi^*(r, t) \Psi(r, t) = 1
$$

有时候也把x y z一起记为$\tau$，积分式子也可以写为

$$
\int_{-\infty}^{\infty} d\tau \, \Psi^*(r, t) \Psi(r, t) = 1

$$

比如在经典墙角模型中，我们的三个积分区域就是(0,a),(0,b),(0,c)。

因为我们的$\Psi$本质上是使用分离变量法来算的，所以通常情况下**三重积分可以转化为三次一重积分**。

由于波函数是从微分方程里解出来的，所以理所当然有常数需要进行归一化。

归一化的前提又是这个平方后的积分是**有限的finite**。我们把这种性质叫做**平方可积的square integrable**。

因此对于一个波函数，他如果作为系统的状态函数的话，必须是平方可积的，也就是**normalized可以归一化的**

因此我们对满足状态函数的波函数进行一个总结。

波函数和他的一阶导函数必须满足

1. 单值的 single-valued

2. 连续的 continuous,

3. 有界的 finite

# 量子力学算子代表经典物理学变量

To every observable in classical mechanics there corresponds a linear operator in 
quantum mechanics.  经典力学中每一个可观测的物理量都对应一个量子力学算子。

| Observable           | Symbol                  | Operator Symbol      | Operation                                                                                                                                                                                                |
| -------------------- | ----------------------- | -------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Position**         | $ x $                   | $ \hat{X} $          | Multiply by $ x $                                                                                                                                                                                        |
|                      | $ \mathbf{r} $          | $ \hat{\mathbf{R}} $ | Multiply by $ \mathbf{r} $                                                                                                                                                                               |
| **Momentum**         | $ p_x $                 | $ \hat{P}_x $        | $ -i\hbar \frac{\partial}{\partial x} $                                                                                                                                                                  |
|                      | $ \mathbf{p} $          | $ \hat{\mathbf{P}} $ | $ -i\hbar \left( \mathbf{i} \frac{\partial}{\partial x} + \mathbf{j} \frac{\partial}{\partial y} + \mathbf{k} \frac{\partial}{\partial z} \right) $                                                      |
| **Kinetic energy**   | $ T_x $                 | $ \hat{T}_x $        | $ -\frac{\hbar^2}{2m} \frac{\partial^2}{\partial x^2} $                                                                                                                                                  |
|                      | $ T $                   | $ \hat{T} $          | $ -\frac{\hbar^2}{2m} \left( \frac{\partial^2}{\partial x^2} + \frac{\partial^2}{\partial y^2} + \frac{\partial^2}{\partial z^2} \right) $ <br> $ = -\frac{\hbar^2}{2m} \nabla^2 $                       |
| **Potential energy** | $ V(x) $                | $ \hat{V}(x) $       | Multiply by $ V(x) $                                                                                                                                                                                     |
|                      | $ V(x,y,z) $            | $ \hat{V}(x,y,z) $   | Multiply by $ V(x,y,z) $                                                                                                                                                                                 |
| **Total energy**     | $ E $                   | $ \hat{H} $          | $ -\frac{\hbar^2}{2m} \left( \frac{\partial^2}{\partial x^2} + \frac{\partial^2}{\partial y^2} + \frac{\partial^2}{\partial z^2} \right) + V(x,y,z) $ <br> $ = -\frac{\hbar^2}{2m} \nabla^2 + V(x,y,z) $ |
| **Angular momentum** | $ l_x = y p_z - z p_y $ | $ \hat{L}_x $        | $ -i\hbar \left( y \frac{\partial}{\partial z} - z \frac{\partial}{\partial y} \right) $                                                                                                                 |
|                      | $ l_y = z p_x - x p_z $ | $ \hat{L}_y $        | $ -i\hbar \left( z \frac{\partial}{\partial x} - x \frac{\partial}{\partial z} \right) $                                                                                                                 |
|                      | $ l_z = x p_y - y p_x $ | $ \hat{L}_z $        | $ -i\hbar \left( x \frac{\partial}{\partial y} - y \frac{\partial}{\partial x} \right) $                                                                                                                 |

同样的作为可观测的实际变量，他们当然是线性可加的。比如两个速度之和就是$v_1+v_2$

算子也具有线性的特点。即：**特征值相同的特征函数的线性组合也是特征函数**。

$$
\hat{A}\psi_1 = a\psi_1 \\
\hat{A}\psi_2 = a\psi_2 \\

$$

 将其线性组合得到

$$
\hat{A}(c_1\psi_1 + c_2\psi_2) = c_1\hat{A}\psi_1 + c_2\hat{A}\psi_2\\
=c_1a\psi_1+c_2a\psi_2 \\
=a(c_1\psi_1+c_2\psi_2)
$$

# 可以观测到的值必须是对应物理量的算符的特征值

我们先定义一下什么叫做**可观测observable**，经典物理学中一切都是可观测的，比如速度加速度，他是多少就是多少。而量子化学中，粒子的状态被描述为波，本身就是用概率来描述的。也就是说目前的速度，加速度等都无法具体算出。用准确的数学语言来说，可以借用统计学的推定思想即。

**使用期望代表这个值，同时使用方差来刻画他的不确定性程度**。

**所谓可观测的物理量就是他的方差为0。**

因此我们的第三条性质就是：**对于一个算子的可观察值，只能是他的特征值**。

一般来说，对于一个算子我们想观察到他的具体的值，只能是他的特征值。而对于算子也就是特征值方程来说，他会有很多特征值与特征函数。我们把所有特征值$\{a_1,a_2 ...\}$的集合叫做算子的**谱spectrum**。

为什么叫做谱呢，我们以计算总能量的Hamiltonian 算子为例

$$
\hat{H} = -\frac{\hbar^2}{2m} \nabla^2 +V(x)
$$

具体一点对于一个氢原子来说，他只有一个电荷，表示其能量的算子可以记为

$$
\hat{H} = -\frac{\hbar^2}{2m} \nabla^2 - \frac{Ze^2}{r}

$$

也就是说对于不同的研究对象来说，他们的算子都是不同的，所以**这个特定对象的特定算子的特征值，就能很好的反应这个对象的某些性质**。

比如我们对这个氢原子施加能量，只要超过了哈密顿算子算出的各能级$\Delta{E} = h\nu$，就可以算出其吸收光谱的频率$\lambda$，从而得到这个原子的光谱。

这也是为什么特征值的集合被叫做算子的谱的原因。

**因此，我们测量一个系统某个物理量，他的被观测到的值，一定是这个物理量对应算子的特征值。** 特征值固定了，那这个物理量的状态函数会是这个特征值的特征函数吗？

答案是否定的，虽然观察只能观测到特征值，但是实际的状态函数不一定是特征函数，**也可能是某个符合状态函数特点的(singlevalue，可归一化的)的函数**。 

现在我们来证明这个，并提出一个假设。

当确定波函数(状态函数)后，对于某个算子，算子对应物理量的平均值可以由如下求出

$$
\mu_a = \lang{a}\rang = \int_{-\infty}^{\infty}\Psi^*\hat{A}\Psi d\tau
$$

当这个波函数恰好是特征函数有

$$
\hat{A}\psi_n = a_n \psi_n
$$

带入得

$$
\lang{a}\rang  = \int_{-\infty}^{\infty} \psi_n^* \hat{A} \psi_n \, dt = \int_{-\infty}^{\infty} \psi_n^* a_n \psi_n \, dt \\
     = a_n \int_{-\infty}^{\infty} \psi_n^* \psi_n \, d\tau = a_n
$$

同理有

$$
\hat{A}^2\psi_n = a_n^2 \psi_n
$$

$$
\lang{a^2}\rang  = \int_{-\infty}^{\infty} \psi_n^* \hat{A^2} \psi_n \, dt = \int_{-\infty}^{\infty} \psi_n^* a_n^2 \psi_n \, dt \\
     = a_n^2 \int_{-\infty}^{\infty} \psi_n^* \psi_n \, d\tau = a_n^2
$$

因此描述可观测性的方差如下

$$
\sigma_a = \lang{a^2}\rang - \lang{a}\rang^2 = 0
$$

这样就证明了，只有**系统在特征函数的情况下要测量的值才是一个可以被观察到的实际的数**。

**而如果不是特征函数的情况下，则是一个方差不为0的分布。**


