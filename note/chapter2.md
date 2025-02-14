# 弦的运动与一维波动方程

我们研究的弦永远是**均匀弦uniform string**。弦从水平位置的向上最大位移称为**振幅amplitude**

我们刻画一个弦以及他所受到的扰动可以用以下来定义。

$u(x,t)$ u为该点的振幅，因为弦收到的扰动是按照时间传播的。所以x定义了发生振幅的点，t定义了是扰动的传播。

$v$ 表示扰动的传播速度。由此我们可以写出以下方程。

$$
\frac{\partial^2{u}}{\partial{x^2}}  =\frac{1}{v^2} \frac{\partial^2{u}}{\partial{t^2}}
$$





这个方程是一个**偏微分方程partial differential equation**，被称为**经典波动方程classical wave equation**。这是一个**线性微分方程linear partial differential equation**，因为导函数的幂次都是1次，并且不含**交叉项cross terms**.

因为这是一个实际问题，弦的两端是固定的，所以必须符合以下条件

$$
u(0,t) = 0 \\

u(l,t) =0
$$

即弦的两端点永远是不震动的。这个叫做**边界条件boundary conditions**，**解微分方程时一定需要边界条件**。

# 微分方程回顾

例题1

基础的二阶线性微分方程

$$
\frac{d^2y}{dx^2}-3\frac{dy}{dx}+2y = 0
$$

这种方程可以轻易看出解长$e^{ax}$的样子，当我们带入后。

$$
a^2y - 3ay+2y =0 \\
(a-2)(a-1) = 0 \\
a = 1 \\
a = 2
$$



所以两个可能的解分别是$e^{x}$和$e^{2x}$，所以这个方程的**通解general solution**就是如下形式

$$
y = c_1e^x + c_2e^{2x}
$$

例题2：

$$
\frac{d^2x}{dt^2}+\omega^2x(t)=0
$$

有初始条件$x(0) =A$, 同时有$t =0$时$\frac{dx}{dt} =0$。因此我们可以做如下变换

令$X(x)=e^{ax}$,带入得

$$
a^2e^{ax}+\omega^2e^{ax} =0 \\
(a^2+\omega^2)e^{ax} =0 \\
$$

可以解得

$$
a = \pm i \omega
$$

由例题1，我们可以得到这个通解为

$$
x(t) = c_1e^{i\omega t} + c_2e^{-i\omega t}
$$

之后我们利用**欧拉公式Euler's formula**对虚数展开

$$
e^{ix} = \cos{\theta} + i\sin{\theta} 
$$

将这个展开应用于$x(t)$上可以得到

$$
x(t) = (c_1+c_2)\cos{\omega t} + (c_1i-c_2i)\sin{\omega t}
$$

为了方便，我们令$c_1+c_2 = c_3$ 和 $c_1i-c_2i=c_4$所以通解也可以写为

$$
x(t) = c_3\cos{\omega t} + c_4\sin{\omega t}
$$

之后我们考虑边界条件，带入得

$$
c_3 = A \\
\frac{dx}{dt} = \omega c_4  \cos{\omega t} =\omega c_4 =0 \\
$$

所以c_4就是0。

$$
x(t) = A\cos{\omega t}
$$

  这个方程解完就是一个余弦波

他的振幅A，频率为$\omega\div 2\pi$

# 求解基本波动方程

解这个方程，我们要使用最常见的**变数分离法separation of variables**。就是我们要把这个多变数的函数$u(x,t)$中独立的x和t分离看来。

$$
u(x,t) = X(x)T(t)
$$

在这种条件下我们的初值条件可以得到
$$
u(0,t) = X(0)T(t) = 0 \\
u(l,t) = X(l)T(t) = 0 \\
$$
因为时间函数$T(t)$是一个函数，不可能一直为0，所以只能是两个端点为0，就得到
$$
X(0) = 0\\
X(l) =0
$$
带入前面的波动方程得到
$$
T(t)\frac{d^2X}{dx^2}= \frac{1}{v^2}X(x)\frac{d^2T}{dt^2}
$$

将x和t分别移动到两边得到

$$
\frac{1}{X(x)}\frac{d^2X}{dx^2}= \frac{1}{v^2T(t)}\frac{d^2T}{dt^2}
$$

现在用一个小技巧，既然左右两边相同，那么我们就可以设为常数K。即如下的公式。

$$
\frac{d^2X}{dx^2}-KX(x)= 0\\
\frac{d^2T}{dt^2}-Kv^2T(x)= 0
$$

对第一个方程我们可以分类讨论转化为**例题2**的样子，对于K，他只有三种情况，分别是K等于0，K大于0，K小于0。

**K等于0的情况：**

方程组退化为
$$
\frac{d^2X}{dx^2} = 0 \\
\frac{d^2T}{dt^2} = 0
$$
二阶导等于0，说明方程是一个一次类型的两个解为
$$
X = a_1x+b_1\\
T = a_2t+b_2
$$
然后我们带入一开始的波动初值条件可以得到。
$$
a_1= b_1 = 0;
$$
因此整个函数就是一个0函数，他没有物理学的意义所以K不可能为0。这种解被叫做**平凡解trivial solution** 

**K大于0的情况：**

我们可以设置k为$\beta^2$，所以按照例题2思路,设X(x) 为$e^{ax}$
$$
(a^2-\beta^2)e^{ax} = 0\\
a =\pm\beta
$$
所以解得这个通解为
$$
X(x) = c_1e^{\beta x} +c_2e^{-\beta x}
$$
带入初值可以得到
$$
c_1+c_2 = 0 \\
c_1e^{\beta l}+c_2e^{-\beta l} = 0 \\
c_1 = c_2 = 0
$$
所以这个X(x)只能是平凡解。

K小于0的情况，

那么我们就可以设置k为$-\beta^2$,因此这个方程可以退化为
$$
(a^2+\beta^2)e^{ax} = 0\\
a = \pm\beta i \\
X(x) = c_1e^{\beta i x} +c_2e^{-\beta i x} \\
X(x) = c_3\cos{\beta x} + c_4\sin{\beta x} \\
X(0) = c_3 =0\\
X(l) = c_4\sin{\beta l} = 0\\
\beta l = n\pi
$$
其中$n = 1,2,3,4.....$所以可以把$\beta = \frac{n \pi x}{l}$，解得弦的震动方程为
$$
X(x) = c_4\sin{\frac{n\pi x}{l}}
$$
