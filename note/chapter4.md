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

# 两个算符的交换子对理解测不准原理有很大帮助

当两个算子依此对函数进行作用时，是按照与函数的位置关系进行运算的

$$
\hat{A}\hat{B}f(x) = \hat{A}[\hat{B}(x)]
$$

就和矩阵运算一样，通常情况下是不能交换的

$$
AB \neq BA\\
\hat{A}\hat{B} \neq = \hat{B}\hat{A}
$$

但如果某些算子性质比较友好的话，可以进行交换我们称其是可**交换的commutative** 

$$
\hat{A}\hat{B}f(x) = \hat{B}\hat{A}f(x)
$$

当然不能交换的话称为**noncommutative** 

$$
\hat{A}\hat{B}f(x) \neq \hat{B}\hat{A}f(x)
$$

例如

$$
\hat{A} = \frac{d}{dx} \quad \hat{B} =x \\
\hat{A}\hat{B}f(x) = f(x) + x\frac{df(x)}{dx} \\
\hat{B}\hat{A}f(x) = x\frac{df(x)}{dx}
$$

这里的两个算子就是**非可交换的**。对于不可交换的算子如果有

$$
\hat{A}\hat{B}f(x) - \hat{B}\hat{A}f(x) = f(x) \\
(\hat{A}\hat{B}-\hat{B}\hat{A})f(x) = \hat{I}f(x)
$$

这里的$\hat{I}$被叫做**identity operator**只表示简单对f(x)乘上某个东西。

因为是对**任意的arbitrary**函数f(x),因此我们也可以将前面的算子写作

$$
[\hat{A},\hat{B}] = \hat{A}\hat{B}-\hat{B}\hat{A} = \hat{I}
$$

这个符号被叫做**交换子commutator** 。现在我们利用换向子的概念来重新定义可交换性。

如果对于所有的f(x)都有$[\hat{A},\hat{B}]f(x) = 0$，则称两个算子是可交换的。

例如

$$
\hat{A} \hat{B} f(x) = \frac{d}{dx} \left[ x^2 f(x) \right] = 2x f(x) + x^2 \frac{df}{dx} \\
\hat{B} \hat{A} f(x) = x^2 \frac{d}{dx} f(x) = x^2 \frac{df}{dx} \\
[\hat{A},\hat{B}]f(x) = 2xf(x) \\
\hat{I} = 2x \\
[\hat{A},\hat{B}]  = 2x\hat{I}
$$

同样的，对于动量算子和位移算子也有

$$
\hat{P}_x = -i\hbar\frac{d}{dx} \qquad \hat{X}= x \\
[\hat{P}, \hat{X}] f(x) = \hat{P} \hat{X} f(x) - \hat{X} \hat{P} f(x) \\
= -i\hbar \frac{d}{dx} [x f(x)] + x i \hbar \frac{d}{dx} f(x) \\
= -i\hbar f(x) + i\hbar \frac{df}{dx} \\
= -i\hbar f(x)
$$

所以求出

$$
[\hat{P}, \hat{X}] = -i\hbar\hat{I}
$$

这里的$\hat{I}$就是单纯的表达乘法的意思。

现在我们回忆一下测不准原理。

$$
\sigma^2_A = \int \psi^* \left( \hat{A} - \langle a \rangle \right)^2 \psi \, dx \\
\sigma^2_B = \int \psi^* \left( \hat{B} - \langle b \rangle \right)^2 \psi \, dx \\
\sigma^2_A\sigma^2_B \geq\int\psi^*[\hat{A},\hat{B}]\psi\,dx
$$

如果将A，B转化为表示唯一和动量的算子则有以下表达

$$
[\hat{A}, \hat{B}] = [\hat{P}_x, \hat{X}] = -i\hbar \hat{I} \\
\sigma^2_p \sigma^2_x \geq -\frac{1}{4} \left[ \int \psi^* (-i\hbar) \psi \, dx \right]^2 \\
\sigma^2_p \sigma^2_x \geq -\frac{1}{4} (-i\hbar)^2 = \frac{\hbar^2}{4} \\
\sigma_p \sigma_x \geq \frac{\hbar}{2}
$$

就把海森堡测不准原理推导出来了

# 量子力学算子必须是埃尔米特Hermitian 算子

## Hermitian 矩阵性质

我们先回忆一下线性代数中的Hermitian 矩阵的性质

Hermitian 矩阵（厄米矩阵，Hermitian matrix）具有以下重要性质：

1. **自共轭转置等于自身**：
    对于 Hermitian 矩阵 AA，满足
   
   $A = A^H$
   
   其中 $A^H$ 是 A 的共轭转置，即 $(A^H)_{ij} = \overline{A_{ji}}$。

2. **特征值全为实数**：
    任何 Hermitian 矩阵的所有特征值都是实数。

3. **特征向量对应不同特征值时正交**：
    若 Hermitian 矩阵 AA 具有不同的特征值 $\lambda_i \neq \lambda_j$，对应的特征向量 $v_i$ 和 $v_j$ 互相正交，即
   
   $v_i^Hv_j=0$
   
   这意味着 Hermitian 矩阵可以正交（酉）对角化。

4. **可以酉对角化**（Spectral Theorem）：
   
   存在酉矩阵 U（即 $U^HU = I$），使得
   
   $A=UDU^H $
   
   其中 D 是对角矩阵，其对角元为 A 的特征值。

5. **行列式为实数**：
    由于特征值为实数，Hermitian 矩阵的行列式也是实数。

6. **迹（trace）为实数**：
   
   $tr(A) = \sum \lambda_i$
   
   其中 $\lambda_i $是 AA 的特征值，由于它们都是实数，所以迹也是实数。

7. **半正定性**（如果所有特征值非负）：
    若 AA 的所有特征值均为非负，则 A 为**正定**或**半正定**矩阵，满足
   
   $xHAx≥0,∀x≠0$

8. **Hermitian 矩阵的指数仍是 Hermitian 矩阵**：
    若 AA 是 Hermitian，则矩阵指数 $e^A$ 也是 Hermitian矩阵。

## 量子力学算子

所有的量子力学算子，都是线性的。并且在之前的假设中，我们可以观察到(方差为0)的对于算子$\hat{A}$来说就是他的**特征值eigenvalues** 

我们已经看到，波函数和一般的算符都是复数。但是，**如果要使特征值与实验测量的结果相对应，它们肯定必须是实数。**

例如对于以下方程我们有

$$
\hat{A}\psi = a\psi
$$

算子和波函数都是复数，而我们能观察到的结果a一定是实数。即，**这个算子的特征值必须都是实数**。

所以我们必须对算子做一些限制。

先利用前面讲的归一性与特征值方程进行结合

$$
\int \psi^* \hat{A} \psi \, dx = a \int \psi^* \psi \, dx = a
$$

之后我们对这个特征值方程进行取共轭，对于算子来说他的共轭也是把虚部取反而已，比如

$$
\hat{P} = -i\hbar\frac{d}{dx} \\
\hat{P}^* = i\hbar\frac{d}{dx}
$$

取**共轭conjugate** 后有

$$
\hat{A}^* \psi^{*} = a^* \psi^{*} = a \psi^*
$$

因为a是可被观测到的实数，所以实数的共轭还是他本身的。之后我们再进行积分处理有

$$
\int \psi \hat{A}^*\psi^* \, dx = a \int \psi\psi^* \, dx = a
$$

因此将两个式子联立可以得到

$$
\int \psi^* \hat{A} \psi \, dx = \int \psi \hat{A}^* \psi^* \, dx
$$

这样就是我们所定义的Hermitian算子。如果**一个算子对于任何满足波动方程的函数，都能有以上式子成立，那么我们就称这个算子是Hermitian operator** 。

所以Hermitian算子的最终定义可以如下

$$
\int_{-\infty}^{\infty} f^* \hat{A} f \, dx = \int_{-\infty}^{\infty} f \hat{A}^* f^* \, dx
$$

所以我们对有了一条更完备的假设

**在经典力学中，每一个可观察到的物理量都对应着一个线性的、量子力学中的、Hermitian算符**。

我们用几个例子来理解

## 例子来说明Hermitian算符

1. 证明$\hat{A} = \frac{d}{dx}$不是Hermitian算符
   
   先列出判别式，再利用分布积分法可以得到
   
   $$
   \int_{-\infty}^{\infty} f^* \frac{d}{dx} f \, dx = \int_{-\infty}^{\infty} f^* \frac{df}{dx} \, dx = \left| f^* f \right|_{-\infty}^{\infty} -\int_{-\infty}^{\infty} f\frac{df^*}{dx} \,dx
   $$
   
   因为$f$是状态函数，所以他的归一性表明他在无穷端是0，因此前面一项为0，可以得到
   
   $$
   \int_{-\infty}^{\infty} f^* \frac{d}{dx} f \, dx = -\int_{-\infty}^{\infty} \frac{d}{dx} f^* f \, dx
   $$
   
   说明$\hat{A}$不是Hermitian算符

2. 证明动量算子$\hat{P}_x = -i\hbar\frac{d}{dx}$是Hermitian算子

$$
\int_{-\infty}^{\infty} f^* \left( -i \frac{d}{dx} \right) f \, dx = -i \int_{-\infty}^{\infty} f^* \frac{df}{dx} \, dx = i \int_{-\infty}^{\infty} f\frac{df^*}{dx} \, dx \\
\int_{-\infty}^{\infty} f\hat{P_x}^* f^* \, dx =\int_{-\infty}^{\infty} f \left( i \frac{d}{dx} \right) f^* \, dx = i \int_{-\infty}^{\infty} f \frac{df^*}{dx} \, dx
$$

​    所以我们得出动量是Hermitian算子

3. 证明动能算子$\hat{T}=-\frac{\hbar^2}{2m}\frac{d^2}{dx^2}$
   
   我们可以进行简单的两次分步积分

$$
-\frac{\hbar^2}{2m} \int_{-\infty}^{\infty} f^* \frac{d^2 f}{dx^2} \, dx = \frac{\hbar^2}{2m} \left| f^* \frac{df}{dx} \right|_{-\infty}^{\infty} + \frac{\hbar^2}{2m} \int_{-\infty}^{\infty} \frac{df^*}{dx} \frac{d f}{dx} \, dx \\
= \frac{\hbar^2}{2m} \left| \frac{df}{dx} f \right|_{-\infty}^{\infty} - \frac{\hbar^2}{2m} \int_{-\infty}^{\infty} \frac{d^2 f^*}{dx^2} f \, dx\\ 
=  - \frac{\hbar^2}{2m} \int_{-\infty}^{\infty} \frac{d^2 f^*}{dx^2} f \, dx\\ 
$$

同样对共轭后的直接处理

$$
\int_{-\infty}^{\infty} f \left( -\frac{\hbar^2}{2m} \frac{d^2}{dx^2} \right)^* f ^*\, dx = \int_{-\infty}^{\infty} f \left( -\frac{\hbar^2}{2m} \frac{d^2}{dx^2} \right) f^* \, dx \\ 
= -\frac{\hbar^2}{2m}  \int_{-\infty}^{\infty} f \frac{d^2f^*}{dx^2}\,dx
$$

就得到了二者相等，证明了动能算子也是Hermitian算子

Hermitian算子一个更加高级的定义是

$$
\int_{-\infty}^{\infty} dx \, f_m^*(x) \hat{A} f_n(x) = \int_{-\infty}^{\infty} dx \, f_n(x) \hat{A}^* f_m^*(x)
$$

对于任意的两个可以不同的满足状态函数特点

## 量子力学中的常用符号

现在我们来介绍以下最常用的符号

我们定义$\{f(x)_n\}$为所有满足状态函数的函数的集合。这些函数可以作为某些算子的特征函数。

我们用$| n \rang$来表示$f_n(x)$。这时有人可能会想那函数的共轭conjugate可以表示为$| n\rang^*$但我们使用$\lang n|$来表示。

因此$f_n^*(x)f_n(x)$的积分可以表示为$\lang n | n\rang$即

$$
\int_{-\infty}^{\infty}f_n^*(x)f_n(x)\,dx = \lang n | n\rang \\
$$

根据前面见过的**归一性Normalization** ，我们可以很容易的得到$\lang n| n\rang=1$更加普遍的可
以得到

$$
\int_{-\infty}^{\infty} dx \, f_m^*(x) f_n(x) = \langle m | n \rangle
$$

所以我们对这个积分取共轭后可以得到

$$
\langle m | n \rangle^*=\int_{-\infty}^{\infty} dx \, f_m(x) f_n^*(x) =  \langle n | m \rangle
$$

之后我们将算子操作引入可以得到

$$
\int_{-\infty}^{\infty} dx \, f_m^*(x) \hat{A} f_n(x) = \langle m | \hat{A} | n \rangle \\
$$

偶尔也会把算符写在后面即

$$
\int_{-\infty}^{\infty} dx \, f_m^*(x) \hat{A} f_n(x) = \langle m | \hat{A} | n \rangle = \lang m| \hat{A}n\rang
$$

同样的我们对其按照共轭的方式组织

$$
\int_{-\infty}^{\infty} dx \, f_n(x) \hat{A}^* f_m^*(x) = \left[ \int_{-\infty}^{\infty} dx \, f_m^*(x) \hat{A} f_n(x) \right]^* = \langle n | \hat{A} | m \rangle^*
$$

因此如果A是Hermitian算子可以得到

$$
\langle n | \hat{A} | m \rangle^* = \langle m | \hat{A} | n \rangle
$$

这个符号是由英国物理学家**Paul Dirac 保罗狄拉克**提出的。

符号$| n \rang$被称为**kets** ，$\lang m|$被称为**bras**。这个命名法来源一bra c ket。 $\lang n|\hat{A}|m\rang$ 就像一个**框子括号bracket**一样对A进行积分。这种符号被叫做Dirac notation 或者 bracket notation 。

## Hermitian算子的特征函数是正交的

Hermitian算子不仅仅满足特征值是实数，对于特征函数，也就是系统的状态函数也有神奇的性质。以同一个算子的两个不同特征值的特征函数为例

$$
\hat{A}\psi_n = a_n\psi_n \\
\hat{A}\psi_m = a_m\psi_m
$$

我们将他们放在一起进行积分有

$$
\int_{-\infty}^{\infty} \psi_m^* \hat{A} \psi_n \, dx = a_n \int_{-\infty}^{\infty} \psi_m^* \psi_n \, dx \\
\int_{-\infty}^{\infty} \psi_n \hat{A}^* \psi_m^* \, dx = \left[ \int_{-\infty}^{\infty} \psi_n^* \hat{A} \psi_m \, dx \right]^*  = a_m^* \int_{-\infty}^{\infty} \psi_n \psi_m^* \, dx \\
= a_m^* \int_{-\infty}^{\infty} \psi_m^* \psi_n \, dx
$$

使用前面讲过的Dirca符号可以写成

$$
\lang m|\hat{A}|n\rang = a_n\lang m |n\rang \\
\lang n| \bar{A} |m \rang ^* = a_m^*\lang m|n\rang
$$

我们对这个两个式子做减法得到

$$
\int_{-\infty}^{\infty} \psi_m^* \hat{A} \psi_n \, dx - \int_{-\infty}^{\infty} \psi_n \hat{A} \psi_m^* \, dx = (a_n^* - a_m^*) \int_{-\infty}^{\infty} \psi_m^* \psi_n \, dx
$$

使用Dirca符号可以写成

$$
\langle m | \hat{A} | n \rangle - \langle n | \hat{A} | m \rangle^* = (a_n - a_m^*)\lang m | n\rang
$$

因为量子力学还价下的算子$\hat{A}$都是Hermitian的即有

$$
\langle m | \hat{A} | n \rangle - \langle n | \hat{A} | m \rangle^*  = 0
$$

将其带入得到

$$
(a_n - a_m^*) \int_{-\infty}^{\infty} \psi_m^* \psi_n \, dx = (a_n - a_m^*) \langle m | n \rangle = 0
$$

如果$m=n$可以整理的$\lang m | n \rang = 1$,可以得到

$$
a_n = a_n^*
$$

**这样证明了算子的特征值一定是实数**

现在我们考虑$m\neq n$

$$
\int_{-\infty}^{\infty} \psi_m^* \psi_n \, dx = \langle m | n \rangle = 0 \qquad m\neq n
$$

对于满足这样性质的两个波动函数(状态函数)，称其为**直交的orthogonal** 。

注意这里的直交的前提是**非简并的nondegenerate**。

回忆一下简并性，**哈密顿算子下，指的是同一个能量E可以由不同的波函数对应**

用单一例子在有界盒子的非势能运动下系统举例子

$$
\hat{H}\psi = E\psi \\
\frac{d^2\psi}{dx^2} +\frac{2mE}{\hbar^2}\psi(x) = 0 \\ \\
$$

解得为

$$
\psi_n(x) = Bsin(\frac{n\pi x}{a}) \\
$$

归一化为

$$
\int_0^a \psi_n^*\psi_n dx = 1 \\
|B|^2\int_0^asin^2\frac{n\pi x}{a} dx =1 \\
\psi_n(x) = \sqrt{\frac{2}{a}}sin\frac{n \pi x}{a}
$$

回忆一下高中学过的三角函数公式

$$
\sin \alpha \sin \beta = \frac{1}{2} \cos(\alpha - \beta) - \frac{1}{2} \cos(\alpha + \beta) \\
\cos(\alpha + \beta) = \cos \alpha \cos \beta - \sin \alpha \sin \beta \\
\cos(\alpha - \beta) = \cos \alpha \cos \beta + \sin \alpha \sin \beta
$$

再将其带入到

$$
\int_{0}^{a}\psi_m^* \psi_n \, dx = \langle m | n \rangle =\qquad m\neq n \\
\frac{2}{a}\int_0^a\sin{\frac{n\pi x}{a}}\sin{\frac{m\pi x}{a}}\, dx = \frac{1}{a}\int_0^a\cos{\frac{(n-m)\pi x}{a}}-\cos{\frac{(n+m)\pi x}{a}}\,dx\\
= 0
$$

所以我们有如下发现

$$
\frac{2}{a} \int_{0}^{a} \sin\left(\frac{n \pi x}{a}\right){\sin\left(\frac{m \pi x}{a}\right)} \, dx = 0 \quad (m \neq n) \\
\frac{2}{a} \int_{0}^{a} \sin^2\left(\frac{n \pi x}{a}\right) \, dx = 1 \quad(m = n)
$$

将其推广到所有情况

$$
\int_{-\infty}^{\infty} \psi_m^* \psi_n \, dx = \langle m | n \rangle = \delta_{nm} \\
\delta_{nm} = 
\begin{cases} 
1 & \text{if } m = n \\ 
0 & \text{if } m \neq n 
\end{cases}
$$

这个符号$\delta_{nm}$被叫做**Kronecker delta**

所以做个总结，对于不简并的算子相同积分计算为1，不同积分计算为0，像极了特征向量里的正交性质。

现在我们考虑简并的情况，即不同的状态方程对应同一个能量E

$$
\hat{A}\psi_1 = a_1\psi_1\\
\hat{A}\psi_2 = a_1\psi_2
$$

我们考虑这两个状态方程的线性组合为$\phi$并对其进行算子计算得
$$
\hat{A} \phi = \hat{A}(c_1 \psi_1 + c_2 \psi_2) = c_1 \hat{A} \psi_1 + c_2 \hat{A} \psi_2\\
= a_1 c_1 \psi_1 + a_2 c_2 \psi_2 = a_1 (c_1 \psi_1 + c_2 \psi_2) = a_1 \phi
$$

所以我们可以得到结论，**简并的状态方程得线性组合依然是简并的**

同样我们也可以取得两种线性组合$\phi_1$和$\phi_2$满足

$$
\int_{-\infty}^{\infty} \phi_1^* \phi_2 \, dx = 0
$$

现在我们来证明他，取线性组合为
$$
\phi_1 = \psi_1 \quad \text{and} \quad \phi_2 = \psi_2 + c \psi_1
$$

然后进行Dirca算子计算

$$
\int_{-\infty}^{\infty} \phi_1^* \phi_2 \, dx = \lang\phi_1 | \phi_2\rang = \int_{-\infty}^{\infty} \psi_1^* (\psi_2 + c \psi_1) \, dx \\
= \int_{-\infty}^{\infty} \psi_1^* \psi_2 \, dx + c \int_{-\infty}^{\infty} \psi_1^* \psi_1 \, dx = \lang\psi_1 | \psi_2\rang + c = 0
$$

由此我们的常数c可以取得为

$$
c = -\int_{-\infty}^{\infty} \psi_1^* \psi_2 \, dx = -\lang\psi_1 | \psi_2\rang
$$

这个过程可以扩展到n状态方程的简并情况，依此累加迭代实现。这个过程被称为**施密特正交化Gram-Schmidt orthonormalization procedure** 

所以即使存在n个简并，我们可以使用施密特正交化来将其变成n个正交的函数，**从而组成一个标准正交的集合**。
