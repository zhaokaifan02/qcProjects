# 氢原子

这一章我们终于要进入量子化学的核心了。为此我们先回忆一下基本的氢原子的构造。氢原子只有一个核外电子。电子带负电，质子带正电。电子以电子云的样子概率密度出现。但是我们理解还是理解为这是一个电子围绕着原子核做圆周运动

# 氢原子的薛定谔方程可以得到很好的解析解

氢原子的电子和质子通过**电势能coulombic potential**相互作用。因为库仑力起的是吸引的作用，所以电势能的符号是负号
$$
V(r) = -\frac{e^2}{4\pi \epsilon_0 r}
$$
$e$是质子和电子的电荷量，$\epsilon_0$是介电常数permittivity，$r$是两者间的距离。我们以质子为中心建立坐标系。电子是围绕着质子做球形的运动，所以我们后期可以换元为圆周坐标。

因此氢原子系统的哈密顿算子就可以写为
$$
H = T+V \\
\hat{H} = -\frac{\hbar^2}{2m_e} \nabla^2 - \frac{e^2}{4\pi \epsilon_0 r}
$$
虽说是氢原子系统，但是实际研究对象只有一个电子。因此$m_e$所表示的就是电子的质量。

所以这个系统的薛定谔方程为
$$
-\frac{\hbar^2 }{2m_e} \nabla^2 \psi(r, \theta, \phi) + V(r) \psi(r, \theta, \phi) = E \psi(r, \theta, \phi)
$$
其中拉普拉斯算子是球形坐标形式的
$$
\nabla^2 = \frac{1}{r^2} \frac{d}{dr} \left( r^2 \frac{d}{dr} \right) + \frac{1}{r^2 \sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right) + \frac{1}{r^2 \sin^2 \theta} \frac{\partial^2}{\partial \phi^2}
$$
将其带入可以得到
$$
-\frac{\hbar^2}{2m_e} \left[ \frac{1}{r^2} \frac{d}{dr} \left( r^2 \frac{d\psi}{dr} \right) + \frac{1}{r^2 \sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial \psi}{\partial \theta} \right) + \frac{1}{r^2 \sin^2 \theta} \frac{\partial^2 \psi}{\partial \phi^2} \right] + V(r) \psi(r, \theta, \phi) = E \psi(r, \theta, \phi)
$$
回忆一下上一章我们在处理双原子分子的技巧，也是将其通过约化质量将其转化为一个绕着原点运动的球形模型。其中最核心的理念就是将控制旋转的两个坐标与控制长度的坐标分开

因此我们将$2m_e$乘向两侧进行一步处理
$$
-\frac{\hbar^2 }{2m_e} \frac{d^2 \psi}{dr^2} - \hbar^2  \left[ \frac{1}{\sin \theta}\left( \frac{\partial \psi}{\partial \theta}\sin{\theta}\right) + \frac{1}{\sin^2 \theta} \frac{\partial^2 \psi}{\partial \phi^2} \right]+2m_er^2[V(r)-E]\psi(r,\theta,\phi) = 0
$$
这里的第二项只包含两个角度，上一章的模型中我们提到过
$$
\hat{L}^2 = -\hbar^2 \left[ \frac{1}{\sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right) + \frac{1}{\sin^2 \theta} \frac{\partial^2}{\partial \phi^2} \right]
$$
所以这个方程可以写作
$$
\hbar^2\frac{\part}{\part r} \left( r^2 \frac{\part\psi}{\part r} \right) +\hat {L}^2 \psi + 2m_e r^2 [V(r) - E] \psi(r, \theta, \phi) = 0
$$
现在我们可以把这个算子整理后重新写为
$$
\hat{H} =\hbar^2\frac{\part}{\part r} \left( r^2 \frac{\part}{\part r} \right) + \hat{L}^2 + 2m_er^2[V(r) - E] 
$$
可以看到这个算子第1、3项只与r有关，而第2项只与$\theta$和$\phi$有关。根据这种思路，我们同样采取变数分离的方法。将其分解成为一个只与$r$有关的函数和一个只与$\theta$和$\phi$函数的乘积。

在这种分解的思路下，$\theta$和$\phi$ 对应的函数一定是$\hat{L}^2$算子的特征函数。而这个算子的特征函数我们在上一章已经详细分析过，采用变数分离法+勒让德多项式的归纳法可以得到如下图的球谐函数

![1741351508968](.\figure\1741351508968.png)

对于一个任意的球谐函数$Y_l^{m_l}$，因为他是算子$\hat{L}^2$的特征函数，因此他满足
$$
\hat{L}^2 Y_{l}^{m}(\theta, \phi) = \hbar^2 l(l + 1) Y_{l}^{m}(\theta, \phi) \quad l = 0, 1, 2, \ldots \quad -l \leq m \leq l
$$
将其带入可以求出薛定谔方程为
$$
\psi(r, \theta, \phi) = R(r) Y_{l}^{m}(\theta, \phi) \\
-\frac{\hbar^2}{2m_e r^2} \frac{d}{dr} \left( r^2 \frac{dR}{dr} \right) + \left[ \frac{\hbar^2 l(l + 1)}{2m_e r^2} + V(r) - E \right] R(r) = 0
$$
这样这个方程就转化为单变量的与r相关的方程了。这个方程被成为氢原子的径向方程radial equation。注意，角动量的平方在中心场中是量子化和守恒的，就像在中心场中经典地守恒一样 。经典力学中，在中心力场（如引力场或静电场）中，角动量是守恒的，因为力始终指向中心，力矩为零，角动量不随时间变化。 

这个方程同样有更直接的物理解释，总能量E是径向动能radial kinetic ，角动能angular kinetic ，和势能angular kinetic 的总和。

这是一个二阶的常微分方程符合我们说过的
$$
y'' + P(x)y = Q(x)
$$
 的形式，也就是一定可以解出来。具体过程我们不再深究，解得的结果理所当然是量子化的
$$
E_n = -\frac{m_e e^4}{8 \epsilon_0^2 \hbar^2 n^2} = -\frac{m_e e^4}{32 \pi^2 \epsilon_0^2 \hbar^2 n^2} \quad n = 1, 2, \ldots
$$
这里我们引入波尔半径并将其优化得到
$$
a_0 = \frac{\epsilon_0h^2}{\pi m_e e^2} = \frac{4\pi \epsilon_0\hbar^2}{m_ee^2} \\
E_n = -\frac{e^2}{8 \pi \epsilon_0 a_0 n^2}
$$
值得注意的是，这些能量与从玻尔的氢原子模型得到的能量是相同的。波尔将其假设为圆周运动最终得到了这个结果，当然这里我们的电子并不是严格按照波尔轨道进行的运动，而是按照之前多次提到的波动方程。

同样的当我们求解这个单变量常微分方程时，对于n的条件一定是
$$
0\leq l \leq n-1 \qquad n = 1,2,3\, \dots
$$
具体的求解过程我们不深究，这个氢原子薛定谔方程的波函数解被叫做径向波动方程radial wave functions 。它由两个量子化的常数决定
$$
R_{nl}(r) = -\left( \frac{(n - l - 1)!}{2n (n + l)!} \right)^{1/2} \left( \frac{2}{n a_0} \right)^{(l + 3/2)} r^l e^{-r/n a_0} L_{n - l - 1}^{2l + 1} \left( \frac{2r}{n a_0} \right)
$$
后面的这个$L_{n-l-1}^{2l+1}$被称为associated Laguerre polynomials。简单带一点数进去可以看到

![1741352990124](D:\msys64\home\31932\qc\qcProjects\note\figure\1741352990124.png)

这里给出的径向波函数可能看起来很复杂，但请注意，每个函数都只是一个多项式乘以一个指数再挂上一个与n和l有关的常数。 

注意这里的$Z$表示nuclear charge就是原子序数，反映了原子核中的质子数。对于类似氢原子模型的原子，他的电势能就可以写为
$$
V(r) = -\frac{Ze^2}{4\pi \epsilon_0 r}
$$


前面的一大串是归一化常数，他使得这个波函数满足
$$
\int_{0}^{\infty} dr \, r^2 R_{nl}^*(r) R_{nl}(r) = 1
$$
别忘了这里的$r^2$，因为我们这个函数是通过球坐标换元得来的，因此无论是从面微分角度考虑，还是从雅可比行列式考虑，都要加上这个$r^2$的积分。

所以薛定谔方程的完整的解如下形式
$$
\psi_{nlm_l}(r, \theta, \phi) = R_{nl}(r) Y_{l}^{m_l}(\theta, \phi)
$$
这里有三个量子化的常数，我们前面讲过。使用分离变量法求得的波函数必须满足每个波函数都是归一化的，并且乘起来也是归一化的，可以得到
$$
\int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \int_{0}^{\infty} dr \, r^2 \psi_{nlm_l}^*(r, \theta, \phi) \psi_{nlm_l}(r, \theta, \phi) = 1
$$
这样子求出归一化的常数后，我们带几个数来看一看效果

![1741353708666](D:\msys64\home\31932\qc\qcProjects\note\figure\1741353708666.png)

现在我们来验证一下波函数的正交性
$$
\int_{0}^{2\pi} d\phi \int_{0}^{\pi} d\theta \sin \theta \int_{0}^{\infty} dr \, r^2 \psi_{nlm_l}^*(r, \theta, \phi) \psi_{nl'm_l'}(r, \theta, \phi) = \delta_{nn'} \delta_{ll'} \delta_{m_l m_l'}
$$
计算过程就省略了，这个符号$ \delta$被叫做Kronecker deltas。只有当下标相同时结果才是0。用之前提到的Dirca符号结果表述为
$$
\langle n l m_l | n' l' m_l' \rangle = \delta_{nn'} \delta_{ll'} \delta_{m_l m_l'}
$$
注意到这些波函数依赖与三个量子符号。前面我们提到过**总能量E是径向动能radial kinetic ，角动能angular kinetic ，和势能angular kinetic 的总和**。因此这些波函数同样是$\hat{H}$、$\hat{L}^2$和$\hat{L}_z$的特征函数。 这三个算子分别代表了**能量，轨道角动量和轨道角动量的z轴分量**。其中n决定了 l，l决定了m。所以n对应$\hat{H}$能量算子，l是直接从$\hat{L}^2$ 角动量这里推出来的对应角动量算子，$m_l$由l决定，对应了角动量的z轴分量算子。并且很容易证明者三个算子是相互可交换的
$$
[\hat{H}, \hat{L}^2] = [\hat{H}, \hat{L}_z] = [\hat{L}^2, \hat{L}_z] = 0
$$
回忆一下之前提过的量子力学基本假设，**当算子可交换，说明他们对应的物理量的和是守恒的**。前面我们验证过动能势能组合的能量守恒。这些算子对应的量子数也被称为**good quantum numbers** 。好的量子数与能量守恒有关。

# S轨道是球对称的

氢原子的波函数依赖于三个量子数 n $l$ $m_l$。 现在我们来依次分析一下这三个量子数。

$n$被称为主量子数principal quantum number ，并且有值为$1,2,3\dots $。它决定了整个系统的能量值
$$
E_n = -\frac{e^2}{8\pi \epsilon_0a_0n^2}
$$
 $l$被称为角动量量子数，因为他的推导过程是利用角动量算子推导出来的。他的范围是$0,1,2,3 ,\dots,n-1$。质子周围电子的角动量的大小完全由$l$决定
$$
|L| = \hbar\sqrt{l(l+1)}
$$
注意到前面分析过的径向波函数$R(r)$的结果取决于n和$l$。$l$的值通常用字母s，p，d，f表示。这是这来源于对钠的光谱观察，具体对应过程如下

| $l$  | letters | name        |
| ---- | ------- | ----------- |
| 0    | s       | sharp       |
| 1    | p       | principal   |
| 2    | d       | diffuse     |
| 3    | f       | fundamental |
| 4    | g       | no name     |

因此我们可以对波函数命名了。对于n=1并且l=0的波函数，我们将其叫做1s波函数。n=2l=0的波函数被称为2s波函数。



$m_l$被称为magnetic quantum number 磁量子数，一共有$2l+1$个，具体取值为
$$
m_l = 0,\pm1,\pm2,\pm3 ,\dots,\pm l
$$
角动量的z分量完全由$m_l$决定。**量子数m1被称为磁量子数，是因为氢原子在磁场中的能量取决于m1** 。因为电磁波的作用是于运动方向垂直的，也就是角动量的z轴分量。

在没有磁场的情况下，每一个能级的简并度都是$2l+1$。

在磁场存在的情况下，这些能级分裂，能量取决于特定的$m_1$值。这种分裂被称为Zeeman effect。

![1741358163706](D:\msys64\home\31932\qc\qcProjects\note\figure\1741358163706.png)

在这种情况下能量不仅仅与n有关了同时与$m_l$有关。

完整的氢原子波函数依赖于三个变量，因此绘制或显示它们是困难的。因此径向和角向部分通常分开考虑。氢原子能量最低的状态是1s态。与1s状态相关的径向函数为

$$
R_{1s}(r) = \frac{2}{a_0^{3/2}} e^{-r/a_0}
$$

根据前面分析的，径向函数也满足归一化，我们可以利用简单的微积分知识来证明他

$$
\int_{0}^{\infty} [R_{1s}(r)]^2 r^2 dr = \frac{4}{a_0^3} \int_{0}^{\infty} r^2 e^{-2r/a_0} dr = 1
$$

因此我们不难看出，根据波函数的平方是概率这一归一化特点，我们可以看出电子分布在$r$到$dr$之内的概率是$[R_{1s}(r)]^2 r^2 $ ，利于对于1s状态这个电子的分布概率是
$$
\text{Prob} = \frac{4}{a_0^3} r^2 e^{-2r/a_0} dr
$$
这个结果与波尔模型的定态离散轨道思想相反，这里电子是以概率的形式出现在原子核的周围的。

据此结果，我们可以画出$Z=1$ 即氢原子的各个能量状态对应的电子径向概率分布的图像

![1741410330940](D:\msys64\home\31932\qc\qcProjects\note\figure\1741410330940.png)

有一个很明显的规律可以看到，径向函数的节点node(零点)个数是$n - l - 1$, 原点不算。

现在我们把目光从径向函数转化为3维度的整体，在加上对称旋转后我们可以画出波函数$\psi(r)$和代表电子在三维空间存在概率的$\psi(r)^2$。

![1741410549025](.\figure\1741410549025.png)

这些图像理所大当然是关于中心对称的，因为他就是前面的径向函数旋转360度所得到的。

我们必须记住，我们处理的只是整个波函数的径向部分。径向部分很容易显示，因为它们只依赖于一个坐标r。而角度的部分同时依赖于两个自变量，不太好表示。

从简单的形式开始考虑，当$l=0$时其中的$m_l = 0$，因此这里的旋转函数为 
$$
Y_0^0(\theta, \phi) = \frac{1}{\sqrt{4\pi}}
$$
不管是从分离变量法考虑还是从表面积的微分考虑，控制旋转的球面函数也满足归一化的特点。
$$
\int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, Y_0^0(\theta, \phi) Y_0^{0*}(\theta, \phi) = \frac{1}{4\pi} \int_{0}^{\pi} \sin \theta \, d\theta \int_{0}^{2\pi} d\phi = 1
$$
并且这种情况下控制旋转的波函数**与角度无关**，是天然对称的。

或者说整体的状态函数都是与角度无关的
$$
\psi_{1s}(r, \theta, \phi) = \psi_{100}(r, \theta, \phi) = R_{10}(r) Y_0^0(\theta, \phi) = (\pi a_0^3)^{-1/2} e^{-r/a_0}
$$
由此我们可以验证他也是归一化的
$$
\int_{0}^{\infty} dr \, r^2 \int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, \psi_{1s}^*(r, \theta, \phi) \psi_{1s}(r, \theta, \phi) = \langle 100 | 100 \rangle = 1
$$
氢原子这种化学层面上的，他的波动方程被称为**轨道orbitals** 。比如这个波函数就被叫做1s轨道。

因此视角加入旋转，电子在$r$到$dr$出现的概率密度可以表示为
$$
\text{Prob}(s) = r^{2} dr \int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, \psi_{1s}^*(r, \theta, \phi) \psi_{1s}(r, \theta, \phi) \\
= \frac{4}{a_0^3} r^2 e^{-2r/a_0} dr

$$
同样的，我们还可以利用Dirca算符的位移算子$r$来求出电子的平均位置为
$$
\langle r \rangle_{1s} = \langle 100 | r | 100 \rangle = \frac{4}{a_0^3} \int_{0}^{\infty} r^3 e^{-2r/a_0} dr = \frac{3}{2} a_0
$$
这个公式同样可以来计算1s状态下的距离原子核**最大概率出现most probable distance**的电子的距离。

## 1s轨道的 most probable value 

为了确定r的最可能值，我们找到使r的概率密度最大化的r值。就是优化求出这个函数的最大值点
$$
f(r) = \frac{4}{a_0^3} r^2 e^{-2r/a_0}
$$
我们可以直接求导并令导数等于0，很容易解出$r_{mp}=a_0$。这正是第一张我们在经典力学假设中求出的波尔半径。**也对应了之前我们说的可观测到的(方差为0)的值，只能是状态函数对应的均值。**

## s轨道的性质延申

现在我们来计算一下1s轨道的势能
$$
\langle V(r) \rangle_{1s} = \langle 100 | V | 100 \rangle = \int_{0}^{2\pi} d\phi \int_{0}^{\pi} d\theta \sin \theta \int_{0}^{\infty} dr \, r^2 \psi_{1s}^* \left( -\frac{e^2}{4\pi \epsilon_0 r} \right) \psi_{1s} \\
= \frac{e^2}{\pi \epsilon_0 a_0^3} \int_{0}^{\infty} dr \, r e^{-2r/a_0} \\
= -\frac{e^2}{4\pi \epsilon_0 a_0} = 2\lang E\rang
$$
我们惊人的发现，这里的势能竟然等于总能量的二倍。由于$E = T+V$,所以动能和势能有以下关系
$$
\frac{\langle V \rangle}{\langle T \rangle} = -2
$$
虽然我们推导出的性质仅适用于氢原子的ls态，**但它一般适用于任何势能为库仑的系统**。这个性质被称为**维利定理virial theorem** ，他对所有的多原子分子都使用。

下来时2s轨道
$$
\psi_{2s}(r, \theta, \phi) = \psi_{200}(r, \theta, \phi) = R_{20}(r) Y_0^0(\theta, \phi)
$$
他同样是球对称的，因为与$\theta$和$\phi$无关。他的状态函数为
$$
\psi_{2s}(r, \theta, \phi) = \frac{1}{\sqrt{32\pi}} \left( \frac{1}{a_0} \right)^{3/2} \left( 2 - \frac{r}{a_0} \right) e^{-r/2a_0}
$$
我们可以计算他的平均电子位置为
$$
\langle r \rangle_{2s} = \langle 200 | r | 200 \rangle \\
\int_{0}^{\infty} dr \, r^3 \int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, \psi_{2s}^*(r, \theta, \phi) \psi_{2s}(r, \theta, \phi) = 6a_0
$$
可以发现，所有的s轨道都是对称，并且服从某种关系，因为氢原子的波动函数都是常数。同理我们将目光放到所有ns轨道，他们的平均电子位置都是$\lang r \rang = \frac{3}{2}a_0n^2$.

同理，我们可以求出类氢原子Hydrogen-like Atom 。的所有k阶矩

![1741495019352](.\figure\1741495019352.png)

# 对于每个主量子数n，如果存在p轨道的话，则有3个p轨道

如果存在p轨道，说明$l\neq0$就是$2\leq n$ 。这种情况下波函数取决于$\theta$和$\phi$不再是球对称的了。

现在我们将目光发那个在氢原子波函数的加**角度部分angular parts** 。我们先考虑$l=1$的状态。 这时的p轨道有三个m分别是$m = -1,0,+1$ 。对于所有的n，他都是3个p轨道。

其中最简单的方程是
$$
Y_1^0(\theta, \phi) = \left( \frac{3}{4\pi} \right)^{1/2} \cos \theta
$$
我们可以很轻松的验证其归一化，或者说平方可积性
$$
\frac{3}{4\pi} \int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, \cos \theta = -\frac{3}{2} \int_{0}^{1} x^2 dx = 1
$$

## 电子轨道的直观表示

表示角函数的常用方法是用三维图形表示。

 

下图是普通化学课本中常见的p轨道切线球图。虽然切线球图表示了p轨道角部分的形状，但它并不能忠实地表示$p_z$轨道的形状，因为径向函数没有包括在内。

![1741496524736](.\figure\1741496524736.png)

现在我们尝试画一下氢原子的$\psi_{2pz}$和$\psi_{2pz}^2$ 。

![1741496780643](.\figure\1741496780643.png)

因为一个完整的波函数通常依赖于三个坐标，所以波函数很难清晰地显示出来。下面来介绍一种一种有用的、有启发意义的方法。

$\psi^*\psi d\tau$ 表示电子在积分区域$d\tau$中存在的概率，因为$\int \psi^*\psi d\tau$归一化的表示在整个区间的概率为1是全事件。

因此，我们可以将空间划分为小的体积元素。计算每个体积元素中$\psi^*\psi$的平均值或一些代表性值。然后用图中点的密度去描述$\psi^*\psi$的值。

![1741497144098](.\figure\1741497144098.png)

一些氢原子轨道平面截面上的概率密度图。点的密度与在该区域找到电子的概率成正比。

另一种表示方法是使用等高线contour maps 来表示。

![1741497452204](.\figure\1741497452204.png)

注意看，这里2s相对于1s可以理解为等比例方法，但是2p0和3p0之间就不同了，为了解释这种我们先把对应的状态函数方程写出来
$$
\psi_{2p0}(r, \theta, \phi) = R_{21}(r) Y_1^0(\theta, \phi) \\
\psi_{3p0}(r, \theta, \phi) = R_{31}(r) Y_1^0(\theta, \phi)
$$
可以发现后面的角函数是完全一样的，这也说明了他们的大的方向很像。但是其中的径向函数则不同，前面说过经验函数的零点个数为$n-l-1$可以发现$R_31$有一个零点。这就解释了为什么3p0中间有一块缺失了。因此，高中学的那种哑铃型的结构其实是错误的。

具体2p能级的其它两个函数展开
$$
Y_1^1(\theta, \phi) = -\left( \frac{3}{8\pi} \right)^{1/2} \sin \theta e^{i\phi} \\
Y_1^{-1}(\theta, \phi) = \left( \frac{3}{8\pi} \right)^{1/2} \sin \theta e^{-i\phi}
$$
他们的概率密度是相同的


$$
|Y_1^1(\theta, \phi)|^2 = \frac{3}{8\pi} \sin^2 \theta \\
|Y_1^{-1}(\theta, \phi)|^2 = \frac{3}{8\pi} \sin^2 \theta
$$
某种情况上也说说明了p轨道上的3中简并的轨道具有相同的样子。

因为$2p0$  $2p1$ $2p_{-1}$  这三个状态方程，或者说轨道方程，他们对应着相同的能量，是简并的。

又因为表示能量的哈密顿算子$\hat{H}$ 是Hermitian算子，他的**相同特征值对应的特征函数的线性组合依旧是这个特征值的特征函数**。这也是施密特正交化的基础，同样也导出了一个重要结论，无论特征值相同还是不相同，Hermitian算子都可以对应出n个相互正交的基向量。

在这个理论基础上，我们往往喜欢这样线性组合
$$
p_x = \frac{1}{\sqrt{2}} (Y_1^{-1} - Y_1^{1}) = \left( \frac{3}{4\pi} \right)^{1/2} \sin \theta \cos \phi\\
p_y = \frac{1}{\sqrt{2}} (Y_1^{-1} + Y_1^{1}) = \left( \frac{3}{4\pi} \right)^{1/2} \sin \theta \sin \phi \\
p_z = Y_1^0(\theta, \phi) = \left( \frac{3}{4\pi} \right)^{1/2} \cos \theta \\
$$
可以很容易验证他们三个是正交的。这三个函数经常被用作**氢原子波函数的角部**，因为它们是实数并且具有易于可视化的方向性 。

## d轨道的分析

现在我们把目光放在 $l=2$ ，也就是d轨道上，他的$m = -2 , -1,0,+1,+2$。 我们对于其的角度方程也可以通过这种线性组合整理成相同的样子。
$$
d_{z^2} = Y_2^0 = \left( \frac{5}{16\pi} \right)^{1/2} (3 \cos^2 \theta - 1) \\
d_{xz} = \frac{1}{\sqrt{2}} (Y_2^{-1} - Y_2^{1}) = \left( \frac{15}{4\pi} \right)^{1/2} \sin \theta \cos \phi \\
d_{yz} = \frac{1}{\sqrt{2}} (Y_2^{-1} + Y_2^{1}) = \left( \frac{15}{4\pi} \right)^{1/2} \sin \theta \sin \phi \\
d_{x^2 - y^2} = \frac{1}{\sqrt{2}} (Y_2^{2} + Y_2^{-2}) = \left( \frac{15}{16\pi} \right)^{1/2} \sin^2 \theta \cos 2\phi \\
d_{xy} = \frac{1}{\sqrt{2}} (Y_2^{2} - Y_2^{-2}) = \left( \frac{15}{16\pi} \right)^{1/2} \sin^2 \theta \sin 2\phi
$$
我们可以画出这个图像

![1741505462380](.\figure\1741505462380.png)

不难发现除了第一个$d_{z^2}$ 以外，其他四个方程对应的图像也是相同的。

注意到$m_l$的大小$|m_l|$等于包含z轴的nodal planes 的数量。所谓nodal planes 指的是波函数中电子数量为零的平面。

比如$m_l = 0$时，我们画出的图像是$d_{z^2}$。可以看图得到，确实没有包含z轴的没有电子存在的平面。

而$m_l=1$时，画出$d_{xz}$和$d_{yz}$的图像，的确时只有1个平面。



选择这个五个球面谐波的线性组合方式没有根本的理由。大多数情况是因为化学家发现他们都是实数并且有良好的方向性。由此我们可以把再次在此基础上写出类氢函数的所有波函数

![1741517074630](.\figure\1741517074630.png)

我们将在后面的章节中看到，分子波函数可以由原子轨道建立起来，如果原子轨道有明确的方向性，我们就可以用**化学直觉 chemical intuition** 来决定哪些原子轨道更重要，用来描述分子轨道。

# 氢原子的能级被磁场分开

现在我们考虑**外部磁场external magnetic field** 下的氢原子情况。磁场使能级分裂成亚能级，这就导致氢的谱线分裂，这种分裂被称为塞曼效应。

然而，在讨论塞曼效应之前，我们将回顾一些关于**磁偶极子magnetic dipoles** 和磁场magnetic fields.的事实和方程 

## 磁场基本性质

电荷绕闭环运动产生磁偶磁偶极子$m$, 它的值是
$$
m = iA
$$
其中i是电流，单位是安培（库仑每秒），A是回路的面积，单位是平方米 .如果我们考虑一个简单的循环。我们可以求出电流为
$$
i = \frac{qv}{2\pi r}
$$
$v$电荷运动的速度，q是电荷量，r是运动的半径。因此我们可以求出回路面积来计算出m
$$
A = \pi r^2 \\
m = \frac{qvr}{2}
$$
更一般来说，如果轨道不是圆形的。磁偶极子可以表示为
$$
\mathbf{m} = \frac{q(\mathbf{r}\times\mathbf{v})}{2}
$$
同样的，我们可以用angular momentum 角动量来表示磁偶极子
$$
\mathbf{L} = \mathbf{r}\times \mathbf{p}\\
\mathbf{p} = m\times \mathbf{v} \\
\mathbf{m} = \frac{q}{2m}\mathbf{L}
$$
对于氢原子这类的单电子系统
$$
\mathbf{m} = -\frac{|e|}{2m_e}\mathbf{L}
$$
磁偶极子会与磁场相互作用，磁偶极子在磁场中的势能由式给出。
$$
V = - \mathbf{m}\mathbf{B}
$$
其中这里的B表示磁场的强度。这个B由以下方程定义
$$
\mathbf{F} =q(\mathbf{v}\times \mathbf{B})
$$
这里的F表示将电荷量为q的粒子以速度v在磁场为中运动受到的力。

磁场的单位为tesla T。从以上方程中，我们可以看出其单位为
$$
T = \frac{N}{A\cdot m}
$$
像往常一样，我们将磁场视为z方向，则有
$$
V = -m_zB_Z \\
V = - \frac{|e|B_z}{2m_e}L_z
$$
在量子视角下，我们将$L_z$替换为等效的角动量算子$\hat{L}$,由此在外部磁场下的氢原子总能量就可以表示为 电子动能+ 电子与原子核质子的吸引库伦势能+外部磁场作用下的势能
$$
\hat{H} = \hat{H}_0 + \frac{|\mathbf{e}| B_z}{2 m_e} \hat{L}_z
$$
其中$\hat{H}_0$是原始的哈密顿算子。所以薛定谔方程可以写为
$$
\hat{H}_0 \psi + \frac{|\mathbf{e}| B_z}{2 m_e} \hat{L}_z \psi = E \psi
$$
由于氢原子的状态方程同时是$\hat{H}_0$和$\hat{L}_z$的，并且我们还证明过**这些状态方程同样是这两个算子的线性组合得到的新算子的状态方程**。 所以我们有
$$
\hat{H}_0 \psi_{nlm_l}(r, \theta, \phi) = -\frac{m_e e^4}{8 \epsilon_0^2 h^2 n^2} \psi_{nlm_l}(r, \theta, \phi) \\
\hat{L}_z \psi_{nlm_l}(r, \theta, \phi) = m_l \hbar \psi_{nlm_l}(r, \theta, \phi)
$$
因此我们将其求和就得到了
$$
E = -\frac{m_e e^4}{8 \epsilon_0^2 h^2 n^2} + \beta_B m_l B_z \qquad
\begin{cases}
n = 1, 2, 3, \ldots \\
m_l = 0, \pm 1, \pm 2, \ldots, \pm l
\end{cases} \\
\beta_B = \frac{|\mathbf{e}| \hbar}{2 m_e}
$$
这个$\beta_B$被称为波尔磁子Bohr magneton 。 数字上表示为
$$
\beta_B = 9.2740 \times 10^{-24} \, \text{J} \cdot \text{T}^{-1}
$$
前面分析过，在没有外加磁场的情况下，选定n和$l$后，$m_l$对应的$2l+1$个状态方程是简并的对应相同的能量。并且在加磁场后，这$2l+1$个相同能量状态函数会分裂成不同的能量。以1s和2p为例如图所示。 1s只有1个能级无法分裂。而2p由3个简并态的能量，磁场叠加后分离了3个。

![1741524622013](.\figure\1741524622013.png)

这个图也反映了磁场情况下2p跃迁到1s会由3种跃迁。

单事实证明这是不正确的。在外部磁场的作用下，n = 2到n = 1的跃迁被分成10行而不是3行。事实上，我们还没有提到，在没有外部磁场的情况下，从n = 2到n = 1的跃迁被分成两条紧密间隔的线。这两条线的频率是 82 258.921 cm- 1和82259.287 cm- 1；它们之间的差别仅为0.366 cm- 1，但这完全在实验误差之内。

好像少了什么东西。直接给出答案，这种缺少的“东西”是**电子自旋electron spi**n，我们将在下面讨论。

# 电子有一个固有自旋角动量

早在1921年，正在研究X射线从晶体表面散射的美国物理学家阿瑟·h·康普顿（Arthur H. Compton）就得出结论：“像微型陀螺仪一样旋转的电子本身可能是**终极磁粒子ultimate magnetic particle** 。

Otto Stern and Walther Gerlach 将一束银原子通过均匀磁场，在检测器上发现了光束分成$2l + 1$个空间量子化分量。 

均匀磁场将使磁偶极子定向(改变方向)，但不施加平动力。然而，非均匀磁场将施加平动力，因此，**空间上分离的磁偶极子定向不同** 。

经典地说，一束磁偶极子将通过一个连续的角度来定位自己，因此将以连续的方式展开 。

量子角度来看，以$l$标记的状态，将会被非均匀磁场划分为$2l+1$个状态。但是斯特恩和格拉赫发现了一个非常出乎意料的结果：**一束银原子只分裂成两部分** 。

如果$2l+1 = 2$则会解得 $l=1/2$这显然是不合理的。

另一个类似的观察是发生在原子光谱中的分裂，在高分辨率下，我们观察到氢原子从n = 2到n = 1的跃迁分裂成两条紧密间隔的线，称为**双重态doublet** 。这些观测结果不能用我们迄今为止发展起来的思想和方程来解释，尽管对于所有这些观测结果确实有一些巧妙的理论，但后来一些人的贡献使这些解释越来越站不住脚。

另外，为什么原子基态的所有电子都不出现在最内层，也就是能量最低的层。而是**会依次在低层和高层进行排列**。对于这一点还不清楚。

玻尔在元素的周期系统方面做了大量的工作，这一直是一个潜在的困扰问题

1925年，沃尔夫冈·泡利证明，所有这些观察都可以用**电子可以以两种不同状态存在的假设来解释**。

泡利是相当随意地引入了第四个量子数(这与前面的三个是不同的)。第四个量子数被称为spin quantum number 自旋量子数，被记作$m_s$,被严格限制为两个可能的值$m_s = -1/2\, , +1/2$。

有趣的是，泡利并没有对这第四个量子数进行任何解释。第四个量子数的存在有点神秘，因为电子的三个空间坐标代表n $l$ 和 $m_l$ 。那么这个量子数是表示什么呢

直到1925年，两位年轻的荷兰物理学家乔治·乌伦贝克和塞缪尔·古德斯米特才证明，电子的两种内在状态可以用两种角动量或自旋状态来识别。我们前面已经看到，电子的轨道运动导致了一个相关的磁矩。

我们将简单地把自旋的概念移植到量子理论和我们之前发展的假设上。这似乎是一种不太令人满意的进行方式，但事实证明，对于我们的目的来说，这是非常令人满意的。

在20世纪30年代早期，英国物理学家保罗·狄拉克（Paul Dirac）发展了量子力学的相对论延伸，其最大的成功之一是自旋以一种完全自然的方式出现。然而，我们将在这里以一种特别的方式介绍自旋我们将简单地把自旋的概念移植到量子理论和我们之前发展的假设上。

我们从斯滕 - 格拉赫实验中得知，一束银原子分裂成了两个部分，这意味着其**单个外层电子的磁矩及其相关角动量是由一个角动量量子数$l=\frac{1}{2}$来描述的**。

现在我们来证明他，对于角动量和其z轴分量两个算子，我们有
$$
\hat{L}^2 Y_{l}^{m}(\theta, \phi) = \hbar^2 l(l+1) Y_{l}^{m}(\theta, \phi) \\
\hat{L}_z Y_{l}^{m}(\theta, \phi) = m_l \hbar Y_{l}^{m}(\theta, \phi)
$$
我们定义了自旋算子$\hat{S}^2$和$\hat{S}_z$，并且分别定义他们的特征函数为$\alpha$和$\beta$。
$$
\hat{S}^2 \alpha = \hbar^2 s(s+1) \alpha \quad \hat{S}^2 \beta = \hbar^2 s(s+1) \beta \quad s = \frac{1}{2} \\
\hat{S}_z \alpha = \frac{1}{2} \hbar \alpha \quad \hat{S}_z \beta = -\frac{1}{2} \hbar \beta \\\
$$
对比上下两个方程，从某种意义上可以直接看出
$$
\alpha = Y_{1/2}^{1/2}\\
\beta = Y_{1/2}^{-1/2}
$$
这是一种**严格的正关联 strictly formal association** ，不必深究。

就像我们可以写出氢原子中电子轨道角动量的值。
$$
L = \hbar \sqrt{l(l+1)}
$$
我们也可以直接写出电子的自旋角动量
$$
S = \hbar \sqrt{s(s+1)}
$$
与$l$不同，他根据n的不同$0\le l\leq n-1$。可以从0取到无穷大，但是s只能取$1/2$。因为s不允许取大的值，自旋角动量永远不能取经典行为。自旋是严格意义上的非经典概念。这里的方程$\alpha$和$\beta$被叫做自旋特征函数spin eigenfunctions 。我们假设他们是正交的，因此可以写为
$$
\int \alpha^* \alpha \, d\sigma = \int \beta^* \beta \, d\sigma = 1 \\
\int \alpha^* \beta \, d\sigma = \int \alpha \beta^* \, d\sigma = 0
$$
其中$\sigma$被称为**自旋变量spin variable** 。自旋变量没 有经典的类比。这个自旋变量并不是连续的变量，只有两个z分量$\pm \hbar/2$。 我们往往会用Dirca 来写
$$
\langle \alpha | \alpha \rangle = \langle \beta | \beta \rangle = 1 \\
\langle \alpha | \beta \rangle = \langle \beta | \alpha \rangle = 0
$$


我们也可以使用不同的符号来表示这两个自旋函数。例如对于一般轨道的角度状态函数，可以表示为
$$
Y_{l}^{m}(\theta, \phi) = |l m_l\rangle\\
Y_{l}^{m*}(\theta, \phi) = \lang l m_l|
$$
在这种符号下，算子与他作用可以写作
$$
\hat{L}^2 |m_l\rangle = \hbar^2 l(l+1) |m_l\rangle, \quad l = 0, 1, 2, \ldots \\
\hat{L}_z |m_l\rangle = \hbar m_l |m_l\rangle, \quad m_l = 0, \pm 1, \ldots, \pm l
$$
在这种表示逻辑下，那两个自旋函数可以写为
$$
\alpha = \left| \frac{1}{2} \frac{1}{2} \right\rangle, \quad \beta = \left| \frac{1}{2} -\frac{1}{2} \right\rangle
$$
因此在自旋算子的表示下可以写为
$$
\hat{S}^2 |s m_s\rangle = \hbar^2 s(s+1) |s m_s\rangle, \quad s = \frac{1}{2} \\
\hat{S}_z |s m_s\rangle = \hbar m_s |s m_s\rangle, \quad m_s = \pm \frac{1}{2}
$$
这种统一的Dirca符号下，表示正交的公式可以写为
$$
\langle s m_s | s m'_s \rangle = \delta_{m_s, m'_s}
$$


我们现在必须把自旋函数包含在空间函数中。近似地说，波函数的空间部分和自旋部分是独立的，所以我们可以把带上自旋状态的波函数写为
$$
\Psi_{n,l,m}(\mathbf{r}, t, \sigma) = \psi_{n,l,m}(r, \theta, \phi) \alpha(\sigma) \quad \text{or} \quad \psi_{n,l,m}(r, \theta, \phi) \beta(\sigma)
$$
在使用Dirca符号时，往往写为
$$
|n\, l\,m_l\,m_s \rang
$$
因此，需要四个量子数来确定氢原子中电子的状态。完整的单电子波函数被叫做spin orbital 自旋轨道。
$$
\Psi_{100\frac{1}{2}}^{}(\mathbf{r}, \sigma) = |100, \frac{1}{2}\rangle = \left( \frac{Z^3}{\pi a_0^3} \right)^{\frac{1}{2}} e^{-\frac{Zr}{a_0}} \alpha \\
\Psi_{100-\frac{1}{2}}^{}(\mathbf{r}, \sigma) = |100, -\frac{1}{2}\rangle = \left( \frac{Z^3}{\pi a_0^3} \right)^{\frac{1}{2}} e^{-\frac{Zr}{a_0}} \beta \\
$$
我们可以验证其正交性有
$$
\int \Psi_{100\frac{1}{2}}^{*}(\mathbf{r}, \sigma) \Psi_{100\frac{1}{2}}^{}(\mathbf{r}, \sigma) \, d\sigma = \langle 100, \frac{1}{2} | 100, \frac{1}{2} \rangle \\
= \frac{Z^3}{\pi a_0^3} \int_0^{\infty} e^{-\frac{2Zr}{a_0}} 4 \pi r^2 \, dr \, \langle \alpha | \alpha \rangle = 1 
$$
这里我们引入了神秘的自旋量子数。哈密顿算符不包含自旋（它是严格的静电），因此相应的能量与自旋状态无关。**因此除了自旋以外的其他量子数相同的状态函数，对应的能量也相同。**

