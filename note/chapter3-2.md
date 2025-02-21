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
\frac{2}{a}\sin^2\frac{n\pi x}{a} dx& 0<=x <=a\\
0 & otherwise
\end{cases}
$$
这表示电子在x到dx出现的概率。

因为f(x)表示的实粒子的概率密度，因此我们可以求出x的**平均位置mean position**，也就是他的期望，或者叫**均值average** 
$$
\lang{x}\rang = \int_0^a x\frac{2}{a}\sin^2{\frac{n\pi x} a}dx\\
=\frac{2}{a}\frac{a^2}{4} = \frac{a}{2}
$$
所以粒子出现的平均位置就是中点。

同样的我们可以计算他的**方差variance** 和标准差
$$
\lang{x^2}\rang = \int_0^a x^2\frac{2}{a}\sin^2{\frac{n\pi x} a}dx\\
=\frac{a^2}{3} - \frac{a^2}{2n^2\pi^2}
$$
所以方差为
$$
\sigma_x^2 = \lang x^2\rang - \lang x\rang^2 = (\frac{a}{2\pi n})^2(\frac{\pi^2n^2}{3}-2)\\
\sigma_x =  (\frac{a}{2\pi n})(\frac{\pi^2n^2}{3}-2)^{\frac{1}{2}}
$$
现在有一个问题是我们要如何计算出能量或者动量的平均值呢。

很简单，我们回忆一下哈密顿算符
$$
\hat{H} = (-\frac{\hbar^2}{2m}\frac{d^2}{dx^2}+V(x))
$$
他表示求一个系统(波)的总能量，因为这个粒子是概率，只能表示出他的概率密度。因此我们可以对这个系统进行计算
$$
\lang\hat{E}\rang = \int \psi_{n}^{*}(x) \hat{H} \psi_{n}(x) \, dx = \int \psi_{n}^{*}(x) E_{n} \psi_{n}(x) \, dx = E_{n}
$$
这里计算的就是这个波函数的平均能量。所以在量子力学中我们往往用算符去定义那些，**在经典体系下是确定的值，而在量子视角下是概率的东西**。比如能量，动量等

对此我们由以下说明
$$
\lang{S}\rang =\int \psi_{n}^{*}(x) \hat{S} \psi_{n}(x) \,dx
$$
其中$\hat{S}$指的是物离量s在量子力学观点下的算符，得到的结果$\lang{S}\rang$是由波函数描述的s的平均值。因为这个研究对象已经是概率状态了。

通常也被记为
$$
\lang \psi| \hat{S} |\psi\rang = \lang{S}\rang =\int \psi_{n}^{*}(x) \hat{S} \psi_{n}(x) \, dx
$$

因此我们想计算动量的平均值就可以
$$
\langle p \rangle = \int_{0}^{a} \left[ \left( \frac{2}{a} \right)^{1/2} \sin \left( \frac{n \pi x}{a} \right) \right] \left( -i \hbar \frac{d}{dx} \right) \left[ \left( \frac{2}{a} \right)^{1/2} \sin \left( \frac{n \pi x}{a} \right) \right] \, dx \\
= -i \hbar \frac{2 \pi n}{a^2} \int_{0}^{a} \sin \left( \frac{n \pi x}{a} \right) \cos \left( \frac{n \pi x}{a} \right) \, dx \\
= 0
$$
因此在这个盒中粒子的运动模型中，粒子的平均动量为0。

**因此，盒子里的粒子向两个方向运动的可能性是相等的。**

# 不确定性原理

现在我们计算动量的方差
$$
\langle p^2 \rangle = \int \psi_{n}^{*}(x) \hat{P}_x^2 \psi_{n}(x) \, dx
$$
带入前面解出的一维薛定谔方差的解可以得到
$$
\langle p^2 \rangle = \int_{0}^{a} \left( \frac{2}{a} \right)^{1/2} \sin \left( \frac{n \pi x}{a} \right) \left( -\hbar^2 \frac{d^2}{dx^2} \right) \left( \frac{2}{a} \right)^{1/2} \sin \left( \frac{n \pi x}{a} \right) \, dx \\
= \frac{2 n^2 \pi^2 \hbar^2}{a^3} \int_{0}^{a} \sin \left( \frac{n \pi x}{a} \right) \sin \left( \frac{n \pi x}{a} \right) \, dx\\
= \frac{2 n^2 \pi^2 \hbar^2}{a^3} \cdot \frac{a}{2}\\
= \frac{n^2 \pi^2 \hbar^2}{a^2}
$$
这里求出来的$\lang{p^2}\rang$被叫做root-mean-square momentum 。

因此我们可以求出能量
$$
\lang {E}\rang = \lang\frac{p^2}{2m}\rang = \frac{\lang p^2\rang}{2m} = \frac{n^2h^2}{8ma^2}
$$
这个**求出的能量和前面从波的角度推出来的一模一样**，也从侧面证明了我们推理的正确。

所以我们求出动量的方差为
$$
\sigma_p = \frac{n \pi \hbar}{a}
$$
方差和标准差都是反应在分布中心的离散程度，反映了其不确定度

不难发现p的不确定度与a**成反比inversely proportional** 。因此我们越想从更短的区域观察到粒子，那么粒子的动量的不确定性就越大。

但是，反应粒子位置的不确定性$\sigma_x$与a成正比，意味着粒子所在的区域越大，他位置的不确定性就越大。当a为无穷，即在整个x轴范围内的粒子被称为**自由粒子free particle.** 。

因此当a趋近正无穷时，自由粒子的动量是一个确定的值。

同时我们发现将位置和动量的不确定性相乘
$$
\sigma_x \sigma_p = \frac{\hbar}{2} \left( \frac{\pi^2 n^2}{3} - 2 \right)^{1/2}\\
\sigma_x \sigma_p > \frac{\hbar}{2}
$$
这就从另一个角度推出了著名的海森堡不确定性原理。

自由粒子有确定的动量，但它的位置是完全不确定的。当我们将一个粒子限定在一个长度为a的区域时，它不再具有确定的动量。如果我们让区域的长度a趋近于零，这样我们精确地定域了粒子，它的位置没有不确定性，那么动量有无限的不确定性。

两个不确定性的最小乘积与普朗克常数有关。

# 三维盒子中的情况

最简单的三维量子力学系统是盒子里粒子的三维版本。在这种情况下，粒子被限制在边长为a、b和c的矩形平行六面体内 。

![1739791127703](.\figure\1739791127703.png)

三维视角下的薛定谔方程为
$$
-\frac{\hbar^2}{2m} \left( \frac{\partial^2 \psi}{\partial x^2} + \frac{\partial^2 \psi}{\partial y^2} + \frac{\partial^2 \psi}{\partial z^2} \right) = E \psi(x, y, z)

\begin{cases}
0 \leq x \leq a \\
0 \leq y \leq b \\
0 \leq z \leq c
\end{cases}
$$
通常我们写作
$$
-\frac{\hbar^2}{2m} \nabla^2 \psi = E \psi
$$
其中$\nabla^2$被称为**拉普拉斯算子Laplacian operator** 
$$
\nabla^2 = \frac{\partial^2}{\partial x^2} + \frac{\partial^2}{\partial y^2} + \frac{\partial^2}{\partial z^2}
$$
同样的，粒子被限定在三维小盒子中运动，自然要服从如下条件
$$
\begin{aligned}
\psi(0, y, z) &= \psi(a, y, z) = 0 & \text{for all } y \text{ and } z \\
\psi(x, 0, z) &= \psi(x, b, z) = 0 & \text{for all } x \text{ and } z \\
\psi(x, y, 0) &= \psi(x, y, c) = 0 & \text{for all } x \text{ and } y
\end{aligned}
$$
同样的我们采取变量分离法
$$
\psi(x,y,z) = X(x)Y(y)Z(z)
$$
可以将边界约束条件进一步细化为
$$
\begin{aligned}
X(0) &= X(a) = 0 \\
Y(0) &= Y(b) = 0 \\
Z(0) &= Z(c) = 0
\end{aligned}
$$
将变量分离后的结果带入为
$$
-\frac{\hbar^2}{2m} \frac{1}{X(x)} \frac{d^2 X}{dx^2} - \frac{\hbar^2}{2m} \frac{1}{Y(y)} \frac{d^2 Y}{dy^2} - \frac{\hbar^2}{2m} \frac{1}{Z(z)} \frac{d^2 Z}{dz^2} = E
$$
再利用之前处理的经验将其转化为
$$
-\frac{\hbar^2}{2m} \frac{1}{X(x)} \frac{d^2 X}{dx^2} = E_x\\

-\frac{\hbar^2}{2m} \frac{1}{Y(y)} \frac{d^2 Y}{dy^2} = E_y\\

-\frac{\hbar^2}{2m} \frac{1}{Z(z)} \frac{d^2 Z}{dz^2} = E_z\\
E_x+E_y+E_z = E
$$
整理的
$$
 \frac{d^2 X}{dx^2} + \frac{\hbar^2E_x}{2m} X(x) = 0\\
  \frac{d^2 Y}{dy^2} + \frac{\hbar^2E_y}{2m} Y(y) = 0\\
   \frac{d^2 Z}{dz^2} + \frac{\hbar^2E_z}{2m} Y(z) = 0\\
$$
在临界条件下解得
$$

X(x) = A_x \sin\left(\frac{n_x \pi x}{a}\right), \quad n_x = 1, 2, 3, \ldots \\

Y(y) = A_y \sin\left(\frac{n_y \pi y}{b}\right), \quad n_y = 1, 2, 3, \ldots\\

Z(z) = A_z \sin\left(\frac{n_z \pi z}{c}\right), \quad n_z = 1, 2, 3, \ldots
$$
所以我们求出了三维的波动方程为
$$
\psi(x, y, z) = A_x A_y A_z \sin\left(\frac{n_x \pi x}{a}\right) \sin\left(\frac{n_y \pi y}{b}\right) \sin\left(\frac{n_z \pi z}{c}\right)
$$
由于实际的物理性质我们需要对其归一化
$$
\int_0^{a} dx \int_0^{b} dy \int_0^{c} dz \, \psi^*(x, y, z) \psi(x, y, z) = 1
$$
解得固定的参数为
$$
A_x A_y A_z = \left( \frac{8}{abc} \right)^{1/2}
$$
因此整个波动方差就都解出来了
$$
\psi_{n_x, n_y, n_z} = \left( \frac{8}{abc} \right)^{1/2} \sin\left( \frac{n_x \pi x}{a} \right) \sin\left( \frac{n_y \pi y}{b} \right) \sin\left( \frac{n_z \pi z}{c} \right) \quad \begin{cases}
n_x = 1, 2, 3, \ldots \\
n_y = 1, 2, 3, \ldots \\
n_z = 1, 2, 3, \ldots
\end{cases}
$$
之后能量怎么求呢，我们把这个波动方程带入会薛定谔方程就可以求的他的特征值能量E了。
$$
E_{n_x, n_y, n_z} = \frac{\hbar^2}{8m} \left( \frac{n_x^2}{a^2} + \frac{n_y^2}{b^2} + \frac{n_z^2}{c^2} \right) \quad 
\begin{cases}
n_x = 1, 2, 3, \ldots \\
n_y = 1, 2, 3, \ldots \\
n_z = 1, 2, 3, \ldots
\end{cases}
$$
根据对称性，我们应该期望粒子在三维盒子中的**平均位置是在盒子的中心**，但我们可以通过直接计算来证明这一点。

在三维空间中，我们定义一个粒子的位置按如下形式定义
$$
r= xi +yj+zk
$$
因此我们求位置平均值的算子就可以定义为
$$
\hat{R} = \hat{X} i + \hat{Y} j + \hat{Z} k
$$
计算算子得
$$
\langle r \rangle = \int_0^{a} dx \int_0^{b} dy \int_0^{c} dz \, \psi^*(x, y, z) \hat{R} \psi(x, y, z) \\
= i\lang{x} \rang + j\lang{y}\rang + k\lang {z}\rang
$$
单独计算x可以得到
$$
\langle x \rangle = \left[ \frac{2}{a} \right] \int_0^{a} x \sin^2\left( \frac{n_x \pi x}{a} \right) dx \, \left[ \frac{2}{b} \right] \int_0^{b} \sin^2\left( \frac{n_y \pi y}{b} \right) dy \, \left[ \frac{2}{c} \right] \int_0^{c} \sin^2\left( \frac{n_z \pi z}{c} \right) dz
$$
后面两项都是归一化得结果计算来是1

只有前面一项和一维运算一致结果为$\frac{a}{2}$所以由对称性得到粒子得平均位置就是正中心。

同样的，三维下得动量算符为
$$
\hat{P} = -i\hbar \left( i \frac{\partial}{\partial x} + j \frac{\partial}{\partial y} + k \frac{\partial}{\partial z} \right)
$$
因此平均动量为
$$
\langle p \rangle = \int_0^{a} dx \int_0^{b} dy \int_0^{c} dz \, \psi^*(x, y, z) \hat{P} \psi(x, y, z)
$$
不难看出，**结果其实也是0**

当盒子得三边相等时即 $a=b=c$，可以将能量式子整理得
$$
E_{n_x, n_y, n_z} = \frac{h^2}{8m a^2} \left( n_x^2 + n_y^2 + n_z^2 \right)
$$
这就不得不提到**简并degenerate **现象了，当n取不同的值时，他们有相同的能量比如
$$
E_{211} =E_{121} = E_{112}
$$
因此我们可以画出立方体中粒子得能级分布

![1739796767087](.\figure\1739796767087.png)

请注意，简并性的发生是由于当一般矩形框变成立方体时引入的对称性，而当通过制造不同长度的边而破坏对称性时，简并性被“解除”。**量子力学的一般原理表明，简并是潜在对称性的结果，当对称性被打破时，简并就会被解除**。

由
$$
\psi_{n_x, n_y, n_z} = \left( \frac{8}{abc} \right)^{1/2} \sin\left( \frac{n_x \pi x}{a} \right) \sin\left( \frac{n_y \pi y}{b} \right) \sin\left( \frac{n_z \pi z}{c} \right) \quad \begin{cases}
n_x = 1, 2, 3, \ldots \\
n_y = 1, 2, 3, \ldots \\
n_z = 1, 2, 3, \ldots
\end{cases}
$$
可以看出三维粒子得运动被分解成三个一维粒子运动的乘积。

同样的能量特征值（本征能量）得大小也是与xyz三个方向有关。

**换句话说，一个三维盒子里的粒子问题可以简化为三个一维问题** 

这并非偶然。这是三维盒子中粒子的哈密顿算符是三个独立项的和这一事实的直接结果。
$$
\hat{H} = \hat{H}_x+\hat{H}_y+\hat{H}_z \\
\hat{H}_x  =-\frac{\hbar^2}{2m}\frac{\part^2}{dx^2}
$$
在这种情况下，我们说哈密顿算符是**可分离的separable** 

也就是说如果算符可以被写成若干独立变量函数的和
$$
\hat{H} = \hat{H}_1(s) + \hat{H}_2(w)
$$
因为s和w独立，所以波函数也可以被写为
$$
\psi_{nm}(s, w) = \phi_n(s) \phi_m(w)
$$
因此我们可以推出
$$


\hat{H}_1(s) \phi_n(s) = E_n \phi_n(s)\\
\hat{H}_2(w) \phi_m(w) = E_m \phi_m(w)
$$
从而求和得到最终的能量关系
$$
E_{nm} = E_n + E_m
$$
这个重要的结果提供了显著的简化，因为它将原始问题简化为几个更简单的问题。 