# 胡克定律导出的简谐振动

考虑一个**质量mass**为m的物体通过弹簧连接在墙上。

![1740404693308](.\figure\1740404693308.png)

**胡克Hooke** 定律: 作用在物体上的力与弹簧相对于其未变形长度的位移成正比。

**即力与压下去的形变成正比**。

进一步假设没有万有引力作用在物体上，所以唯一的力来自弹簧。

我们定义弹簧平衡的长度为$l_0$。 由胡可定律，弹簧的**恢复力restore force**一定是弹簧从其平衡长度位移的某个函数 。$l$为弹簧被压缩后的长度，弹簧的形变量也就是其位移$x=l-l_0$ 。由平衡原理，弹簧的恢复力与施加的压力二力平衡。再由胡克定律，定义向左为正方向，施加的力为

$$
f = -k(l-l_0) = -kx
$$

 结果为负数力指向相反的的右侧，说明弹簧当前长度为($l>l_0$)说明被拉扯，则力为指向右侧。

反之为正数说明力指向左侧，表明$l<l_0$，我们是用力按着弹簧的。

一个小的k值意味着一个弱或松散的弹簧，一个大的k值意味着一个硬的弹簧 。**即k越大我们要使弹簧发生形变的力就越大**。

利用牛顿定律，我们有以下方程

$$
ma = F\\
m \frac{d^2 l}{dt^2} = -k(l - l_0)
$$

转化为$x$后可以得到

$$
m \frac{d^2 x}{dt^2} + kx = 0
$$

这个方程我们处理过太多次，利用**辅助角phase angle** 公式，得到的结果为

$$
x(t) = c_1 \sin(\omega t) + c_2 \cos(\omega t)\\\\
x(t) = A\sin(\omega t+\phi)\\
\omega = \frac{k}{m}^{1/2}
$$

之前的这种方程我们都有初值条件，这里也一样。我们假设一开始先让弹簧有了A的唯一，然后松开手，这种情况是初始速度为0。我们有了如下初值条件

$$
x(0) = A\\
x(0) = c_2 \\
v_{t=0} = 0\\
\frac{dx}{dt}_{t=0} = c_1\omega = 0
$$

带入其通解公式我们可以得到

$$
c_1 = 0 \quad c_2 = A \\
x(t) =A\cos(\omega t)
$$

因此我们可以画出时间与唯一的关系图像

![1740406188789](.\figure\1740406188789.png)

我们可以发现这个物体沿着A到-A**来回震荡oscillates back and forth**。 频率为$\omega$ 弧度每秒或者 $v = \omega/2\pi$圈每秒。

常数A被称为振动vibration 的**振幅amplitude** 

# 谐振子的能量是守恒的

现在目光回到谐振子的总能量。其收到的力为

$$
f = -k(l-l_0) = -kx
$$

回想一下物理学，力可以表示为**势能potential energy** 的导数 

$$
f(x) = -\frac{dV}{dx}
$$

因此我们两边求积分可以得到

$$
V(x) = -\int f(x) \, dx + \text{constant}
$$

再将力的式子带入得

$$
V(x) = -\frac{k}{2} x^2 + \text{constant}
$$

当弹簧没有形变时，我们设置其系统得势能为0，因此我们得到势能得表达式为

$$
V(x) = -\frac{k}{2} x^2
$$

同理动能得式子可以如下表示

$$
T = \frac{1}{2} m \left( \frac{dl}{dt} \right)^2 = \frac{1}{2} m \left( \frac{dx}{dt} \right)^2
$$

讲前面求出的位移与时间的方程带入得到动能和势能以及总能量的表达式

$$
T = \frac{1}{2} m \omega^2 A^2 \sin^2(\omega t) \\
V = \frac{1}{2} k A^2 \cos^2(\omega t) \\
E = T + V = \frac{1}{2} m \omega^2 A^2 \sin^2(\omega t) + \frac{1}{2} k A^2 \cos^2(\omega t) \\
$$

之后将前面求得得参数带入，与三角公式可以得到

$$
\omega = \frac{k}{m}^{1/2} \\
E = \frac{kA^2}{2} 
$$

这也就说明了系统的总能量是一个恒定的值不会随之而变化。可以画出能量与唯一之间的关系

![1740407472277](.\figure\1740407472277.png)

当位移最短时，势能为零，速度最快。 而当位移最大时速度为0

我们说总能量是守恒的系统是一个**守恒系统conservative system** 。

对于一个系统是能量守恒的，则力必须能够从一个势能函数推导出来。

这个势能函数只是描述系统的空间坐标的函数 ，也就是我们说的势能只与空间位置有关。例如电势能，重力势能。

在简谐振子得情况下，我们将空间推导到三维可以得到$V=V(x,y,z)$

$$
f_x(x, y, z) = -\frac{\partial V}{\partial x} \\
f_y(x, y, z) = -\frac{\partial V}{\partial y}\\
f_z(x, y, z) = -\frac{\partial V}{\partial z}
$$

或者使用拉普拉斯Laplace算子表现成向量形式

$$
\nabla = i \frac{\partial}{\partial x} + j \frac{\partial}{\partial y} + k \frac{\partial}{\partial z} \\
\text{f}(x, y, z) = -\nabla V(x, y, z)
$$

这个式子隐含了这个系统是能量守恒的，我们从一维度来证明他(因为是向量，一个维度证明其他维度都证明了)。

牛顿方程为

$$
m \frac{d^2 x}{dt^2} = -\frac{dV}{dx}
$$

之后对两边分别积分处理得到

$$
\int -\frac{dV}{dx} \, dx = -V(x) + \text{constant} \\
\int m \frac{d^2 x}{dt^2} \, dx = m \int \frac{d^2 x}{dt^2} \, dt \\
= \frac{m}{2} \int \frac{d}{dt} \left( \frac{dx}{dt} \right)^2 dt = \frac{m}{2} \left( \frac{dx}{dt} \right)^2 + \text{constant}
$$

因此整理后得到

$$
\frac{m}{2} \left( \frac{dx}{dt} \right)^2 + V(x) = \text{constant}
$$

动能加势能为一个常数。

因此，我们看到，如果**力可以表示为一个势能的导数并且这个势能只是空间坐标的函数**，那么这个系统是能量守恒conservative的。

# 双原子分子得简谐振动模型方程式包含了分子的约归质量Reduced Mass

**简谐振子 simple harmonic oscillator** 模型式刻画**振动的双原子分子vibrating diatomic molecule** 的良好模型。

但是双原子分子不想之前的固定墙面，而像两个物体被弹簧连起来。

![1740409298101](.\figure\1740409298101.png)

同样定义向左为正方向，两个物体由牛顿定理可得

$$
m_1 \frac{d^2 x_1}{dt^2} = k(x_2 - x_1 - l_0)\\
m_2 \frac{d^2 x_2}{dt^2} = -k(x_2 - x_1 - l_0)
$$

这也符合牛顿第三定律，力的作用力与反作用力大小相等方向相反。

将这两个式子加起来可以得到

$$
\frac{d^2}{dt^2} (m_1 x_1 + m_2 x_2) = 0
$$

之后我们定义一个**质心坐标center-of-mass coordinate**，其中$M=m_1+m_2$

$$
X = \frac{m_1 x_1 + m_2 x_2}{M}
$$

 因此这个式子转化为

$$
M\frac{d^2X}{dt^2} =0
$$

表明质心收到的外力为0，以一个**恒定的动量constant momentum** 左右移动

这个两个物体系统的震动必须依赖于两个物体的**相对分离relative separation**，或者依赖于**相对坐标relative coordinate**。

$$
x = x_2-x_1-l_0
$$

 之后我们对一开始两个牛顿定理的式子分别除以$m_1$和$m_2$，之后再对他们做减法可以得到

$$
\frac{d^2 x_2}{dt^2}  -\frac{d^2 x_1}{dt^2} = -\frac{k}{m_2}(x_2 - x_1 - l_0) - \frac{k}{m_1}(x_2 - x_1 - l_0)
$$

整理得

$$
\frac{d^2}{dt^2}(x_2 - x_1) = -k \left( \frac{1}{m_1} + \frac{1}{m_2} \right)(x_2 - x_1 - l_0)
$$

我们定义一个变量

$$
\frac{1}{m_1} + \frac{1}{m_2} = \frac{m_1 + m_2}{m_1 m_2} = \frac{1}{\mu}
$$

再将$x=x_2-x_1-l_0$带入可以得到

$$
\mu \frac{d^2 x}{dt^2} + kx = 0
$$

这个$\mu$被称为**约化质量reduced mass**。我们将这个式子与之前的单震动固定模型比较

$$
m \frac{d^2 x}{dt^2} + kx = 0
$$

发现只是把质量换成了约化质量。因此，两体系统可以像一体系统一样处理。因此运动方程也如

$$
x(t) = A\sin(\omega t+\phi) \\
\omega = \frac{k}{\mu}^{1/2}
$$

一般来说，如果势能只取决于两个物体之间的相对距离 。然后，我们可以引入相对坐标，如$x_2 - x_1$，并将两体问题简化为一体问题 。

# 谐振子近似是通过对核间势能在其最小值处进行展开得到的

现在我们从数学得角度进行推理，讨论一下前面提到的谐振子震动模型对双原子分子得近似证明。

双原子分子得**核间势能internuclear potential** ，可以通过实验测得

![1740468387278](.\figure\1740468387278.png)

在最小值得左侧，随着间距减小，势能突然增大。这是因为很难把原子推得更近。

在最小值得右侧，势能均匀上升，最后区域稳定。势能在**很大得间距large separations**下主要表现为**键能bond energy**。自重这里的虚线表示的是胡克定律表现得出的弹性势能$\frac{1}{2}k(l-l_0)^2$ 。

尽管胡克定律得二次项近似看起来很糟糕，但是他在最小值$l_0$周围表现不错。**这个区域在室温下对许多分子来说是物理上重要的区域**。即使谐振子模型允许从负无穷到正无穷进行移动，但是实际上是不允许的。因此谐振子对小振幅得运动是很好的近似($l_0$附近很短的周边)

现在我们使用**泰勒展开Taylor expansion**来从数学上证明这个过程。 在平衡键长处equilibrium bond length , 也就是$l=l_0$时，进行泰勒展开可以得到。

$$
V(l) = V(l_0) + \left( \frac{dV}{dl}\right) _{l=l_0} (l - l_0) + \frac{1}{2!}\left ( \frac{d^2 V}{dl^2} \right) _{l=l_0} (l - l_0)^2) \\ 

+ \frac{1}{3!} \left( \frac{d^3 V}{dl^3} \right)_{l=l_0} (l - l_0)^3 + \cdots
$$

  第一项是一个常数，我们主动选择在这里为势能0点。第二项时一阶导，因为这里极小值点，所以一阶导的值也为0。

注意$\frac{dV}{dl}$ 对势能的导数表现其收到两个**原子核nuclei**之间的作用力，这一点斜率为0，也说明了这一点两个原子核间不受力。这就收为什么$l=l_0$这个长度被称为**平衡键长equilibrium bond length** 。

因为我们之研究很小的范围，所以平方项之后的三次方向就趋近零了，是一个更小的无穷小。

同样为了更加精确的近似描述，我们可以将后面的三次方项加进去。这些被加进去的项被称为**非调和项anharmonic terms**。即并不是直接从简谐震动中推导出来的。

# 量子力学下的简谐振子

量子力学观点下，可以用薛定谔方程来刻画这个系统，其中$\mu$是之前提到的约归质量Reduced Mass，调整了坐标系方便计算

$$
-\frac{\hbar^2}{2\mu} \frac{d^2 \psi}{dx^2} + V(x) \psi(x) = E \psi(x)
$$

因为是简谐振子模型，所以势能可以用胡克方程刻画$V(x) = \frac{1}{2}kx^2$，整理后得到

$$
\frac{d^2 \psi}{dx^2} + \frac{2\mu}{\hbar^2} \left( E - \frac{1}{2} k x^2 \right) \psi(x) = 0 \quad \quad (-\infty < k < \infty)
$$

这个方程中在$\psi(x)$前的不是常数，因此不能用前面讲的设置为$e^{kx}$的求解思路。事实上，当一个微分方程没有常系数时，没有简单、通用的方法来求解它。因此，每一种可能的情况都必须单独考虑。

解这个方程有一个通用的方法，前面在泰勒展开中介绍过，我们可以**用幂级数来表示任何一个函数** ，因此将$\psi(x)$设置为依此幂次项的线性组合，然后通过待定系数法以此求得组合的相关解出。但是运算的实践复杂度奇大无比，所以有一种更高级的方法。

**这种方法不涉及微分方程的知识，只涉及对某些算子的代数操作。**  推导过程我们不进行细究，我们只需要明白：只有当能量被限制在量子化值时，才能得到性能良好的有限解。所以解得的结果为

$$
E_v = h\nu \left( v + \frac{1}{2} \right) \quad v = 0, 1, 2, \ldots \\
\nu = \frac{1}{2\pi} \left( \frac{k}{\mu} \right)^{1/2}
$$

能量是被量子化的离散情况，这里表明能级和能级之间的差值是均匀的。我们将其图像画出

![1740483573792](.\figure\1740483573792.png)

注意看大，与我们假设的胡可方程势能$\frac{kx^2}{2}$不一样，他的最小值为$v=0$,最小能量为$\frac{1}{2}hv$。这个能量被称为**零点能量zero-point energy**。这个零点能量与海森堡测不准原理关系密切。我们可以将总能量先写出来

$$
E =  \frac{p^2}{2\mu}+\frac{kx^2}{2}
$$

 因此我们可以看到最低的能量需要动量和位移完全同时为0，或者更准确地说$\hat{X}$和$\hat{P}$这两个动量不能同时为0，这也反映了测不准原理。

# 简谐振子模型可以解释双原子分子的红外光谱

现在我们讨论谐振子的光谱预测。如果我们把双原子分子的势能函数建模为简谐振子，那么我们就可以写出双原子分子的振动能级公式

$$
E_v = h\nu \left( v + \frac{1}{2} \right) \quad v = 0, 1, 2, \ldots \\
\nu = \frac{1}{2\pi} \left( \frac{k}{\mu} \right)^{1/2}
$$

双原子分子可以通过吸收或发射频率满足玻尔频率条件的电磁辐射，从一种振动能态跃迁到另一种振动能态。

$$
\Delta E = h\nu_{obs}
$$

简谐振子模型仅允许相邻的能级进行迁移，所以变化的能级为$\Delta v = \pm 1$, 这个条件能称为**选择规则selection rule** 。

所以当分子吸收能量时，$\Delta v = +1$ 所以有

$$
\Delta E  = E_{v+1} - E_v = h\nu
$$

因此观测到的吸收频率为

$$
\nu_{obs} = \frac{1}{2\pi} \left( \frac{k}{\mu} \right)^{1/2}
$$

此外，由于谐振子的连续能量状态被相同的能量分开。 $\Delta E$对所有所有的能级跃迁都是一样的。因此，该模型预测频谱仅由一条线组成，每条线的频率由上面的$\nu_{obs}$组成。

这一预测与实验结果吻合较好，这条线称为**基本振动频率fundamental vibrational frequency**。对于双原子分子，这些线出现在$10^{14}$Hz附近，这些在**红外区域infrared region**。

讨论振动光谱时，习惯将一开始振动能级公式写为

$$
E_v = h\nu \left( v + \frac{1}{2}\right) \\
\nu =\frac{1}{2\pi} \left( \frac{k}{\mu} \right)^{1/2} \\
\frac{E_v}{hc} =\frac{1}{2\pi c} \left( \frac{k}{\mu} \right)^{1/2}\left(v+\frac{1}{2}\right) \\
G(v) = \frac{E_v}{hc}\\
\tilde{\omega} = \frac{1}{2\pi c} \left( \frac{k}{\mu} \right)^{1/2}\\
G(v) = \tilde{\omega}(v+\frac{1}{2})
$$

 其中$G(v)$被称为**振动项vibrational term** ，而$\tilde{\omega}$被叫做**波数wave numbers** 。上面的**波浪号tilde**着重强调了$\tilde{\omega}$是波数单位$cm^{-1}$ **表明了在1cm的长度内的完整的波的个数**

如果**基本频率vibrational frequency**已知，我们可以确定力常数。比如对于$H^{35}Cl$来说，我们可以通过仪器测量出他的波数$\tilde{\omega_{obs}} = 2.886\times10^{3}$ ,因此我们可以算出类似的**弹力常数force constant** 

$$
k = (2 \pi c \tilde{\omega})^2 \mu \\
= \left[ 2 \pi (2.998 \times 10^8 \, \text{m} \cdot \text{s}^{-1}) \cdot 2.886 \times 10^3 \, \text{cm}^{-1} \cdot (100 \, \text{cm} \cdot \text{m}^{-1}) \right]^2 \\
\times \frac{(35.0 \, \text{amu})(1.00 \, \text{amu})}{(35.0 + 1.00) \, \text{amu}} \cdot \left( 1.661 \times 10^{-27} \, \text{kg} \cdot \text{amu}^{-1} \right)\\
= 4.78 \times 10^2 \, \text{kg} \cdot \text{s}^{-1} = 4.78 \times 10^2 \, \text{N} \cdot \text{m}^{-1}
$$

这也确实是单位上**对应了每米形变所带来的力量**。

这里的35表示氯Cl的原子质量数，质子数 17，中子数 18，原子质量数 35 。自然界中，氯的两种同位素**比例大约为** ：35Cl 约占 **75%**，37Cl 约占 **25%**。 

我们再来举个例子计算一下，$^{75}Br^{19}F$的的光谱线波数为$380cm^{-1}$,计算一下这个分子的弹力常数。

$$
\mu = \frac{(75.0 \, \text{amu})(19.0 \, \text{amu})}{(75.0 + 19.0) \, \text{amu}} \cdot \left(1.661 \times 10^{-27} \, \text{kg} \cdot \text{amu}^{-1}\right) = 2.52 \times 10^{-26} \, \text{kg}\\
k = (2 \pi c \tilde{\omega})^2 \mu =\left[ 2 \pi (2.998 \times 10^8 \, \text{m} \cdot \text{s}^{-1})(380 \, \text{cm}^{-1})(100 \, \text{cm} \cdot \text{m}^{-1}) \right]^2 \cdot (2.52 \times 10^{-26} \, \text{kg}) \\= 129 \, \text{kg} \cdot \text{s}^{-2} = 129 \, \text{N} \cdot \text{m}^{-1}
$$

双原子分子的弹力常数通常是$10^2  \sim 10^3 $ 。之后我们会更加明确，简谐振子模型不仅有要临近能级跃迁这一性质。还包括，如果分子要吸收红外辐射，**则分子的偶极矩必须随着分子振动而改变**。

偶极矩是用来描述分子**电荷分布不均匀**的一个物理量，表示分子内部的电偶极强度和方向。 在分子中，如果原子之间的共价键具有**极性**（即电子云在不同原子之间分布不均），就会形成**电偶极**。这个电偶极的大小由**偶极矩来表示**。因此HCL可以吸收红外线而N2不可以吸收。

这里给出了某些分子的振动光谱参数

![1740494175720](.\figure\1740494175720.png)

其中有些符号可能还不清楚，$\bar{l}$表示速度为0时的平均核间分离长度。

实际的测量确实存在与谐振子模型的偏差。但是这些误差不仅相当小，而且我们可以系统地引入修正和扩展来解释它们。

# 振动光谱中会观察到偏差Overtones

到目前为止，我们已经用谐振子模型处理了双原子分子的振动运动。核间势能不是一条简单的抛物线，而是像一个前紧后平的曲线。

![1740468387278](.\figure\1740468387278.png)

其中虚线表示的是使用胡克方程的预测，前面讲过势能可以在$l_0$点进行泰勒展开，并且势能一阶导数表示收到的力，他在$l_0$处为0。

$$
V(l) - V(l_0) = \frac{1}{2!} \left( \frac{d^2 V}{dl^2} \right)_{|l=l_0} (l - l_0)^2 + \frac{1}{3!} \left( \frac{d^3 V}{dl^3} \right)_{|l=l_0} (l - l_0)^3 + \cdots \\
= \frac{k}{2} x^2 + \frac{\gamma_3}{6} x^3 + \frac{\gamma_4}{24} x^4 + \cdots
$$

其中$x$是从平衡距离over/ones equilibrium separation $l_0$的 位移。使用简谐子的近似只包含其中的二次线，**并且他预测每个能级在光谱中的谱线是单独的一条直线**。

实验数据表明，确实存在一条**主导dominant** 线（fundamental），但也存在强度较弱的线，加在主线周围。这些线被叫做**overtones泛音** 。

主导线可以理解为临近的$\Delta v = \pm 1$时求出的跃迁吸收的能量，而这里的overtones可以理解为不仅仅邻近能级跃迁，而是可以跨能级跃迁时发生的吸收。因此，overtones的本质是**非谐性振动引起的多量子数跃迁** 。

回忆一下之前我们解出$G(v) = \frac{E_v}{hc} = \tilde{\omega}(v+\frac{1}{2})$，时是将势能的泰勒展开只保留一项，也就是按照**胡克定律Harmonic**的方式进行展开的。现在我们在其中多展开几项，这种展开理论上可以提高计算的精确度，这几项被叫做**anharmonic**项。将其带入可以得到

$$
\frac{d^2 \psi}{dx^2} + \frac{2\mu}{\hbar^2} \left( E - (\frac{k}{2} x^2 + \frac{\gamma_3}{6} x^3 + \frac{\gamma_4}{24} x^4 + \cdots) \right) \psi(x) = 0 \quad \quad (-\infty < k < \infty)
$$

然后解得

$$
G(v) = \tilde{\omega}_e(v+1/2) - \tilde{x}_e \tilde{\omega}_e(v+1/2)^{2}
$$

这个$\tilde{x}$ 被称为**非协性常数anhannonicity constant**，这个常数远小于1。因此后面的哪些anharmonic项相对于前面的harmonic影响较小。

再由于

$$
G(v) = \frac{E_v}{hc}\\
$$

我们就可以画出能级的具体图像。注意，能级的间隔并不像谐振子的那样相等，事实上，它们的间隔**随着v的增大而减小**。

![](.\figure\2025-02-27-16-54-34-image.png)

在这种情况下也可以画出势能的表达式

![](C:\msys64\home\fan%20zhaokai\qcProjects\note\figure\2025-02-27-16-59-52-image.png)

是将前面的能级的连续形式画了出来。虚线是前面的Harmonic项所求出的结果，虚线是完全泰勒展开得到的结果。

这里同样有两个值，其中$D_0$是在离散情况下的最小势能值，$D_e$是连续情况下**解离极限值dissociation limit**。由前面讲过的测不准吧原理，他们的差值应该为

$$
D_e - D_0 = \frac{1}{2}h\nu
$$

因此$D_0$也是我们实际通过实验观测到的最小值。

与前面的谐振子Harmonic的能级跃迁$\Delta v= \pm 1$不同，anharmonic情况下可以选择更多情况比如$\pm 1， \pm2$等等不作限制。因此如果我们假设常温下双原子分子处于**ground vibrational state基振态**的话，从0直接跃迁到$v$时吸收的波数$\tilde{\omega}$可以通过如下公式求得

$$
\tilde{\omega}_{obs} = G(v)-G(0) = \tilde{\omega}_ev-\tilde{x}_e\tilde{\omega}_ev(v+1)
$$

这里的$\tilde{\omega}_e$和$\tilde{x}_e$ 都是通过实验测出来的常数。我们用一个例子来体会一下

## NaF的overtone计算

对于23Na19F，我们经过实验测得非协性震动的系数为$\tilde{\omega}_e=536.10 cm^{-1}$和 $\tilde{x}_e \tilde{\omega}_e=3.4cm^{-1} $请计算一下第一和第二overtones的频率。

计算的公式为

$$
\tilde{\omega}_{\text{obs}} = \tilde{\omega}_e v - \tilde{x}_e \tilde{\omega}_e v (v + 1), \quad v = 1, 2, \ldots
$$

主导线Fundamental为

$$
\tilde{\omega}_{\text{obs}} = \tilde{\omega}_e  - \tilde{x}_e \tilde{\omega}_e2 \\
=529.3
$$

第一泛音为 

$$
\tilde{\omega}_{\text{obs}} = \tilde{\omega}_e2  - \tilde{x}_e \tilde{\omega}_e6 \\
=1051.8
$$

第二泛音为 

$$
\tilde{\omega}_{\text{obs}} = \tilde{\omega}_e3  - \tilde{x}_e \tilde{\omega}_e12\\
=1567.5
$$

现在将我们计算或实验得来的这些预测在H35Cl中进行验证可以得到

![](C:\msys64\home\fan%20zhaokai\qcProjects\note\figure\2025-02-27-17-34-52-image.png)

可以发现在加入了非协性之后，预测更加准确了。

# 谐振子状态方程蕴含着Hermite多项式

对于前面的简振子模型(胡克方程替代)，解得的不同的$E_v$对应的状态方程是非简并的

$$
\psi_n(x) \propto H_n(x) e^{-x^2/2}
$$

其中$H_{n}(x)$表示次数为$x$的Hermite多项式。在这里的简谐振子模型中，我们归一化解得为

$$
\psi_v(x) = |v\rang = N_vH_v(\alpha^{1/2}x)e^{-\alpha x^2/2}
$$

这个符号表示能级为$v$的波动方程，而$\lang v|$表示这个方程的共轭

其中 $\alpha$和归一化参数$N_v$如下

$$
\alpha = \frac{k\mu}{\hbar^2}^{1/2} \\
N_v = \frac{1}{(2^v v!)^{1/2}} \left( \frac{\alpha}{\pi} \right)^{1/4}
$$

其中$H_v(x)$被称为Hermite polynomials。 v表示次数

![](.\figure\2025-02-27-19-50-36-image.png)

将其带入后可以得到一些简单的状态函数

![](.\figure\2025-02-27-20-09-05-image.png)

我们可以画出这些函数的图像，以及他们的平方所代表的概率密度图像

![](.\figure\2025-02-27-20-10-26-image.png)

现在我们来验证一下这个这些结果确实是前面薛定谔方程的解

$$
\psi_0(x) = | 0 \rangle = \left( \frac{\alpha}{\pi} \right)^{1/4} e^{-\alpha x^2/2}
$$

将其得到的能量 $E_0 = h\nu \left( v + \frac{1}{2} \right)$，代入得

$$
\frac{d^2 \psi_0}{dx^2} + \frac{2\mu}{\hbar^2} \left( E_0 - \frac{1}{2} k x^2 \right) \psi_0(x) = 0\\

\nu = \frac{1}{2\pi} \left( \frac{k}{\mu} \right)^{1/2}
$$

得到

$$
\left( \frac{\alpha}{\pi} \right)^{1/4} \left( -\alpha x^2 e^{-\alpha x^2/2} - ae^{-\alpha x^2/2} \right) + \frac{2\mu}{\hbar^2} \left( \frac{\hbar \omega}{2} - \frac{k x^2}{2} \right) \left( \frac{\alpha}{\pi} \right)^{1/4} e^{-\alpha x^2/2} = 0
$$

整理得到

$$
\left( \alpha^2 x^2 - \alpha \right) + \left( \frac{\mu \omega}{\hbar} - \frac{\mu k}{\hbar^2} x^2 \right) = 0\\
\alpha = \frac{k\mu}{\hbar^2}^{1/2}\\
\omega = \frac{k}{\mu}^{1/2}
$$

整理得可以发现左边确实是0。

同样可以证明这个$\psi_v$是归一化并且正交的，即

$$
\int_{-\infty}^{\infty} dx \, \psi_v(x) \psi_{v'}(x) = \langle v | v' \rangle = 0 \quad \text{for } v \neq v'
$$

更加具体的将数值带入可以得到

$$
\int_{-\infty}^{\infty} dx \, H_v\left( \alpha^{1/2} x \right) H_{v'}\left( \alpha^{1/2} x \right) e^{-\alpha x^2} = \int_{-\infty}^{\infty} d\delta \, H_v(\delta) H_{v'}(\delta) e^{-\delta^2} = 0 \quad \text{for } v \neq v'
$$

我们可以再挖掘一下Hermite多项式的性质，他在weighting function$e^{-delta^2}$之下是正交的。
比如$\psi_0$和$\psi_1$

$$
\psi_0(x) = \left( \frac{\alpha}{\pi} \right)^{1/4} e^{-\alpha x^2/2}\quad \text{and} \quad\psi_1(x) = \left( \frac{4 \alpha^{3}}{\pi} \right)^{1/4} x e^{-\alpha x^2/2}
$$

具体计算后得到

$$
\int_{-\infty}^{\infty} \psi_1(x) \psi_0(x) \, dx = \langle 1 | 0 \rangle = \left( \frac{2\alpha^2}{\pi} \right)^{1/2} = \int_{-\infty}^{\infty} x e^{-\alpha x^2/2} \, dx = 0
$$

因为最后这个函数是一个奇函数，所以他的对称区间积分就是0。

# Hermite多项式要么是偶函数，要么是奇函数

现在我们继续挖掘一下Hermite多项式的性质。
先回忆一下什么叫奇函数什么叫偶函数。关于y轴对称的是偶函数，偶函数在对称区间的积分时可以两倍单边区间的积分。而奇函数关于原点对称，对称区间积分相互抵消为0。

![](.\figure\2025-02-27-21-24-42-image.png)

而Hermite多项式随着设置的最大次数不同，他的奇偶性要分开讨论。
对于$H_v(\delta)$ ,v是奇数就是奇数，v是偶数就是偶数。而奇函数的对称区间积分为0。
对于胡克函数模拟的波函数为

$$
\psi_v(x) = |v\rang = N_vH_v(\alpha^{1/2}x)e^{-\alpha x^2/2}
$$

后面的小尾巴$e^{-\alpha x^2/2}$ 是偶函数，所以这个函数的奇偶性就由$H_v$完全决定，也就是由$v$而完全决定。我们可以计算一下平均位移

$$
\langle x \rangle = \langle v | x | v \rangle = \int_{-\infty}^{\infty} \psi_v(x) \, x \, \psi_v(x) \, dx = 0
$$

可以看到无论v是奇函数还是偶函数，他的平方一定是偶函数，因此不难得到平均位移是0。
而对于动量来说，他的平均动量为

$$
\langle p \rangle = \langle v | \hat{P}_x | v \rangle = \int_{-\infty}^{\infty} \psi_v(x) \left( -i \hbar \frac{d}{dx} \right) \psi_v(x) \, dx
$$

奇函数导完是偶函数，偶函数导完是奇函数，

因此这个积分的结果一定是奇函数。所以我们可以使用奇函数的对称性，将其转化为0到无穷上的二倍积分。

# Hermite多项式还有很多有意思的性质

我们来算一下基态状态$H_0(\delta)=1$下的$\lang x^2\rang$的值

$$
\langle x^2 \rangle = \left( \frac{\alpha}{\pi} \right)^{1/2} \int_{-\infty}^{\infty} dx \, x^2 e^{-\alpha x^2}
$$

之后我们令$\delta = \alpha^{1/2}x$,并结合偶函数的可以得到

$$
\langle x^2 \rangle = \frac{2}{\alpha\pi^{1/2}}\int_0^{\infty}d\delta\,\delta^2e^{-\delta^2}
$$

其中后面的是伽马函数,按照伽马函数的性质

$$
\Gamma(z) = \int_0^\infty t^{z-1} e^{-t} \, dt \quad \text{对于 } z > 0
$$

具体性质包括


$$
\Gamma(n) = (n-1)! \quad \text{对于 } n \in \mathbb{N} \\
\Gamma(z+1) = z \Gamma(z) \\
\Gamma\left(\frac{1}{2}\right) = \sqrt{\pi} \\
$$

同样的我们可以做一些变换令$t = x^2$ 则有$dt = 2xdx$ ，代入得

$$
\Gamma(z) = 2\int_0^{\infty}x^{2z-1}e^{-x^2}dx 
$$

因此我们回到之前的$\lang x^2\rang$的计算中，后面那一块是$\Gamma(\frac{3}{2})$，利用性质得到$\Gamma(\frac{3}{2})= \frac{1}{2}\Gamma(\frac{1}{2}) = \frac{\sqrt{\pi}}{2}$
整体代入得

$$
\langle x^2 \rangle = \frac{2}{\alpha\pi^{1/2}}\int_0^{\infty}d\delta\,\delta^2e^{-\delta^2} = \frac{1}{2\alpha} = \frac{\hbar}{2(\mu k^{1/2})}
$$

这是在$H_0$下，现在我们将其推广到$H_v$上

$$
\langle x^2 \rangle = \lang v \, x^2 \, v\rang = \int_{-\infty}^{\infty} dx \, \psi_v^*(x) \, x^2 \, \psi_v(x) \\
= N_v^2 \int_{-\infty}^{\infty} dx \, e^{-\alpha x^2} \, H_n\left(\alpha^{1/2} x\right) \, x^2 \, H_n\left(\alpha^{1/2} x\right) \\
= \frac{N_v^2}{\alpha^{3/2}} \int_{-\infty}^{\infty} d\xi \, e^{-\xi^2} \, H_n(\xi) \, \xi^2 \, H_n(\xi)
$$

Hermite多项式还有很多奇怪的性质可以用于算积分，比如以下这个**递归公式recursion formula** 

$$
H_{v+1}(\xi) - 2\xi H_{v}(\xi) + 2v H_{v-1}(\xi) = 0
$$

现在我们举个例子来利用Hermite多项式来计算积分。对于任意能级对应的波动函数的平均位置，我们可以写为

$$
\langle \xi \rangle = \int_{-\infty}^{\infty} \psi_v(\xi) \, \xi \, \psi_v(\xi) \, d\xi
$$

之前的证明思路是利用Hermite多项式的奇偶性来证明他为0的。现在我们用递归的思路走一遍。先把
他展开

$$
\langle \xi \rangle = N_v^2 \int_{-\infty}^{\infty} d\xi \, H_v(\xi) \, \xi \, H_v(\xi) \, e^{-\xi^2}
$$

再对递归公式进行变形，将要求的放在最左边

$$
\xi H_v(\xi) = v H_{v-1}(\xi) + \frac{1}{2} H_{v+1}(\xi)
$$

带入并展开得到

$$
\langle \xi \rangle = v N_v^2 \int_{-\infty}^{\infty} d\xi \, H_{v}(\xi) H_{v-1}(\xi) \, e^{-\xi^2} + \frac{N_v^2}{2} \int_{-\infty}^{\infty} d\xi \, H_{v}(\xi) H_{v+1}(\xi) \, e^{-\xi^2}
$$

后面两块分别是

$$
\psi_v = H_v(\xi)e^{-\xi^2/2} \\
\psi_{v-1} = H_{v-1}(\xi) e^{-\xi^2/2}
$$

因此这些地方分别是正交的，所以整理后为0。**Hermite多项式很有用！**

所以，我们在算平方项时有了更好的思路。

$$
\langle \xi^2 \rangle = N_v^2 \int_{-\infty}^{\infty} d\xi \, H_v(\xi) \, \xi^2 \, H_v(\xi) \, e^{-\xi^2}
$$

我们先对前面的变形后的递归公式同时乘上$\xi$可以得到

$$
\xi^2 H_v(\xi) = v \xi H_{v-1}(\xi) + \frac{1}{2} \xi H_{v+1}(\xi)
$$

然后把他们二次展开

$$
\xi^2 H_v(\xi) = \nu \xi H_{v-1}(\xi) + \frac{1}{2} \xi H_{v+1}(\xi) \\
= v (v-1) H_{v-2}(\xi) + \left( v + \frac{1}{2} \right) H_{v}(\xi) + \frac{1}{4} H_{v+2}(\xi)
$$

再将其带入到后面

$$
= N_v^2 \int_{-\infty}^{\infty} d\xi \, H_v(\xi) \left[ v(v-1) H_{v-2}(\xi) + \left( v + \frac{1}{2} \right) H_{v}(\xi) + \frac{1}{4} H_{v+2}(\xi) \right]
$$

整理得到

$$
\langle \xi^2 \rangle = \langle v | \xi^2 | v \rangle \\
= N_v^2 \int_{-\infty}^{\infty} d\xi \, H_v(\xi) \left[ \nu(v-1) H_{v-2}(\xi) + \left( \nu + \frac{1}{2} \right) H_{v}(\xi) + \frac{1}{4} H_{v+2}(\xi) \right]
$$

再利用正交性质和归一化的性质可以得到

$$
\langle \xi^2 \rangle = \left( v + \frac{1}{2} \right) N_v^2 \int_{-\infty}^{\infty} d\xi \, H_{v}(\xi) H_{v}(\xi) \, e^{-\xi^2}\\
=v+\frac{1}{2}
$$
将$\xi= \alpha^{1/2}x$带入得

$$
\langle x^2 \rangle = \frac{1}{\alpha} \langle \xi^2 \rangle = \frac{1}{\alpha} \left( v + \frac{1}{2} \right) = \frac{\hbar}{(\mu k)^{1/2}} \left( v + \frac{1}{2} \right)
$$


在v等于0的情况下和之前我们得到的结果相同。



# 多原子分子的振动可以被简正坐标表示

多原子分子的振动谱在谐振子近似下是很容易理解的，关键是引入**简正坐标normal coordinates** 。

考虑一个含有N个**原子核nuclei**的分子。这个分子在空间上的完整描述需要3N坐标，每个原子核有三个笛卡尔坐标。我们说N原子分子总共有3N个**自由度degrees of freedom**。在这3N个坐标中，我们可以使用3个来指定他的**质心degrees of freedom**。

## 分子的质心与沿着质心平移

先介绍以下质心的概念，对于分子来说，分子中每个原子的质量和它们的三维坐标（x, y, z）我们都知道。因此质心的坐标$X_{cm},Y_{cm},Z_{cm}$可以这样求出。

$$
X_{cm} = \frac{\sum_{i=1}^nm_ix_i}{\sum_{i=1}^nm_i}\\
Y_{cm} = \frac{\sum_{i=1}^nm_iy_i}{\sum_{i=1}^nm_i}\\
Z_{cm} = \frac{\sum_{i=1}^nm_iz_i}{\sum_{i=1}^nm_i}
$$

  这里可以看出，质心并不一定落在原子上，因为他是一个理论上的点，表示整个分子质量均匀分布的中心。

这样的话我们可以平移坐标系的原点，**调整坐标系坐标轴的位置，使得某个原子正好是这个分子的质心**。

所谓沿着质心的运动，就是分子的平移运动。比如质心的x坐标增加了，这意味着分子向正方向x轴运动。

沿着这三个坐标的运动对应于分子质心的平动，所以我们称这三个坐标为平**动自由度translational degrees of freedom 。**

对于线性分子以及非线性分子，无论他们的原子数量是多少个，描述平移运动的自由度都是3。

## 旋转运动与振动

同样的具体推理细节我们不必理解。我们只需要知道，对于旋转这个运动，可以定义旋转**自由度degrees of rotational freedom。** 线型分子需要用2个坐标描述，也就是选中两个坐标作为旋转原点。非线性分子需要3个坐标。之后剩下的3N-5和3N-6个坐标被称为**振动自由度vibrational degrees of freedom**。这些被总结为

![1740823307610](.\figure\1740823307610.png)

用一些现实里的分子例子可以有

![1740823399903](.\figure\1740823399903.png)

**在没有外场的情况下，分子的能量不取决于其质心的位置或朝向**。因此多原子分子的势能仅仅由这些振动坐标决定，我们一般用$N_{vib}$来表示振动自由度。因此参照双原子分子的一维模型，多原子分子的三维模型所表示的势能可以写为

$$
\Delta V = V(x_1, x_2, \ldots, x_{N_{vib}}) - V(0, 0, \ldots, 0) = -\frac{1}{2} \sum_{i=1}^{N_{vib}} \sum_{j=1}^{N_{vib}} \left( \frac{\partial^2 V}{\partial x_i \partial x_j} \right)_{x_i, x_j = 0} x_i x_j + \ldots \\
= \frac{1}{2} \sum_{i=1}^{N_{vib}} \sum_{j=1}^{N_{vib}} f_{ij} x_i x_j + \cdots
$$

不需要理解，直接背会。 一般来说，按照泰勒展开的模式，后面还有更高次项的$x_i$，但这些非调和项就被忽略了。因为这里有交叉项，而交叉项的存在使得对应的薛定谔方程的解很难得到 。根据经典力学的定理，允许我们消去这些交叉项。细节过于专门化，在这里不讨论，但是使用矩阵代数的一个简单过程可以用来找到一组新的坐标 $\{Q_i\}$,因此可以整理为

$$
\Delta V = \frac{1}{2} \sum_{j=1}^{N_{vib}} F_j Q_j^2
$$

在势能确定之后，整体的薛定谔方程的哈密顿算子可以写作为

$$
\hat{H}_{vib} = - \sum_{j=1}^{N_{vib}} \frac{\hbar^2}{2\mu_j} \frac{d^2}{dQ_j^2} + \frac{1}{2} \sum_{j=1}^{N_{vib}} F_j Q_j^2
$$

按照前面我们讲的独立运动的各个原子所在的系统，哈密顿算子可以写成若干独立的之和。
$$
\hat{H}_{vib} = \sum_{j=1}^{N_{vib}} \hat{H}_{vib,j} = \sum_{j=1}^{N_{vib}} \left( -\frac{\hbar^2}{2\mu_j} \frac{d^2}{dQ_j^2} + \frac{1}{2} F_j Q_j^2 \right)
$$
同样的这个$N_{vib}$个薛定谔方程得到的$N_{vib}$个波动解，整体的波动方程的解可以得到
$$
\psi_{vib}(Q_1, Q_2, \ldots, Q_{vib}) = \psi_{vib,1}(Q_1) \psi_{vib,2}(Q_2) \cdots \psi_{vib,N_{vib}}(Q_{vib})
$$
同样其对应的能量可以写为
$$
E_{vib} = \sum_{j=1}^{N_{vib}} h\nu_j \left( v_j + \frac{1}{2} \right) \quad \text{each } v_j = 0, 1, 2, \ldots
$$
在谐振子近似下，多原子分子的振动运动表现为$N_{vib}$个独立谐波振荡的乘积。在没有简并的情况下，每一个波动方程都有自己独立的主频率$\nu_j$。以一个具体的例子可以看出，比如H2CO这个四原子分子，他有6个独立的状态。

![1740825160970](.\figure\1740825160970.png)

固定了能量之后，可以看到每个原子以相同的频率和相位围绕其平衡位置振荡，但不同的原子具有不同的振荡幅度。 

# 简谐振子的选择规则

谐振子状态之间的转换只能发生在相邻能级之间。非相邻能级的转化要经过非简谐振子的描述。

这种规则被称为**选择规则selection rule**。

如果一个谐振子受到沿z方向传播的电磁辐射照射，那么振子从状态v跃迁到状态v'的概率与积分的平方成正比。
$$
\langle v | \mu_z | v' \rangle = \int_{-\infty}^{\infty} dx \, \psi_v(x) \mu_z(x) \psi_{v'}(x)
$$
其中$\mu_z$是**偶极矩dipole moment**的z分量。这种积分在光谱学中经常出现，称为偶极子跃迁矩**dipole transition moment** 。 现在我们可以使用泰勒展开对$\mu_z$进行处理，物理上称为**平衡核分解equilibrium nuclear separation** 。
$$
\mu_z(x) = \mu_0 + \left( \frac{d\mu}{dx} \right)_0 x + \cdots
$$
$\mu_0$是平衡键长处的偶极矩，x是从平衡值出发的位移。因此当$x=0$ 时，$\mu_z = \mu_0$，之后我们把这个展开带入前面的状态跃迁概率方程。
$$
\langle v | \mu_z | v \rangle = \mu_0\int_{-\infty}^{\infty} dx \, \psi_v(x) x \psi_v(x) + \left( \frac{d\mu}{dx} \right)_0 \int_{-\infty}^{\infty} dx \, \psi_v(x) x \psi_v(x)
$$
如果$v\neq v'$，由于谐振子方程的正交性第一项为0。再由前面提到的Hermite多项式的性质
$$
\xi H_v(\xi) = v H_{v-1}(\xi) + \frac{1}{2} H_{v+1}(\xi)
$$
带入前面得双原子简谐振子得波动函数为
$$
\langle v | \mu_z | v \rangle = \frac{N_1 N_{v'}}{\alpha} \left( \frac{d\mu}{d\xi} \right)_{0} \int_{-\infty}^{\infty} H_{v'}(\xi) \left[ v H_{v-1}(\xi) + \frac{1}{2} H_{v+1}(\xi) \right] e^{-\xi^2} d\xi
$$
现在再利用Hermite多项式得正交性可以我们可以看到如果$v'\neq v\pm1$时，这个能级跃迁得概率就是0了。因此，谐振子近似下振动跃迁的选择规则就是$\Delta v = \pm 1$。 而在积分前面得因子$\frac{d\mu}{d\xi}$时刻提醒着我们能级跃迁得概率随着$\xi = \alpha^{1/2}x$的变化也在随时变化。

