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

