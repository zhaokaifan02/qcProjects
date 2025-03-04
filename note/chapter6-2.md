# 刚性旋转体的波函数是球谐函数

回忆一下前面的刚性旋转体的薛定谔方程
$$
-\frac{\hbar^2}{2I} \left[ \frac{1}{\sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial Y(\theta, \phi)}{\partial \theta} \right) + \frac{1}{\sin^2 \theta} \frac{\partial^2 Y(\theta, \phi)}{\partial \phi^2} \right] = E Y(\theta, \phi)
$$
我们使用变数分离法得到了两个方程。
$$
\sin \theta \frac{d}{d\theta} \left( \sin \theta \frac{d \Theta}{d\theta} \right) + \beta \sin^2 \theta = m^2 \\
\frac{1}{\Phi(\phi)} \frac{d^2 \Phi}{d\phi^2} = -m^2
$$
其中对于第二个很简单的方程我们可以轻松的解得波函数，并且根据旋转的对称性来将其量子化
$$
\Phi_m(\phi) = \frac{1}{(2\pi)^{1/2}} e^{im\phi} \quad m = 0, \pm 1, \pm 2, \ldots
$$
第一个方程不容易求解，因为其没有常系数无法使用公式。这里我们做一些代换
$$
let: x = \cos{\theta} \\
\Theta(\theta) = P(x)\\
$$
在球坐标系中因为$\theta$表示的是从北极而来的偏转，因此对应范围与x的转化如下
$$
0\leq \theta \leq \pi \\
-1 \leq x \leq 1
$$
转化后将其带入可以得到
$$
(1 - x^2) \frac{d^2 P}{dx^2} - 2x \frac{dP}{dx} + \left[ \beta - \frac{m^2}{1 - x^2} \right] P(x) = 0
$$
这个方程很有名，被称为**勒让德Legendre equation**方程。这个方程在球坐标表示的问题中经常出现。

在求解这个方程的过程中，我们发现$\beta$必须满足$\beta = J(J+1),\quad J = 0,1,2\dots$ 并且要满足$|m |\leq J$，所以这个方程就被写作
$$
(1 - x^2) \frac{d^2 P}{dx^2} - 2x \frac{dP}{dx} + \left[ J(J + 1) - \frac{m^2}{1 - x^2} \right] P(x) = 0 \\
J = 0,1,2\dots \quad \text{and} \quad m = 0 , \pm 1,\pm2 \dots,\pm J
$$
我们先考虑$m=0$的情况，这个方程的解被称为**勒让德多项式Legendre polynomials**，一般被记作$P_J(x)$ 根据不同的J有不同的解。现在我们来分析一下

## 勒让德多项式

m=0时这个多项为
$$
(1 - x^2) \frac{d^2 P}{dx^2} - 2x \frac{dP}{dx} + J(J + 1) P(x) = 0
$$
根据不同的J我们有以下不同的解，解得过程就是前面提过的幂级数待定系数法来迭代。

![1741100632196](.\figure\1741100632196.png)

观察这个表格我们不难发现，当J为偶数时结果是偶函数，而J奇数时结果是奇函数。并且我们还可以人为选定微分方程的系数，控制得到$P_J(1) = 1$ 。在这之下我们就可以证明这个方程的解具有正交性了。具体的证明过程就省略了，要拆解多项式利用对称性和奇偶性证明
$$
\int_{-1}^{1} P_J(x) P_{J'}(x) \, dx = \langle J | J' \rangle = 0 \quad J \neq J'
$$
同样的作为波函数的归一化系数也可以求得
$$
\int_{-1}^{1} \left[P_J(x)\right]^2 \, dx = \langle J | J \rangle = \frac{2}{2J + 1}
$$
这个方程的解在m=0时出现勒让德多项式，现在我们在m不等于0的情况下进行研究。

根据数学推导，$m\neq 0$时的解是由勒让德多项式组合而成的。这在直觉上也很好理解。这种组合被称为**associated Legendre functions** 。我们跳过推导，直接写出 associated Legendre functions $P_J^{|M|}(x)$的表达式
$$
P_J^{m}(x) = (1 - x^2)^{|m|/2} \frac{d^{|m|}}{dx^{|m|}} P_J(x)
$$
这里的解只与m有关，是因为这个微分方程就是由m定义出来的。

回忆一下前面提到的先决条件$|m|\leq J$。 因为如果$m > J$的情况下，$P_J(x)$的最高此项是J，他导大于J的M此项后就为0了。 由状态函数不为0，这也就推导出来了$|m|\leq J$。

注意这里我们的勒让德多项式是将三角函数换为x表示的，因此我们也可以写出三角函数形式。这样是为什么勒让德多项式中频繁出现$1-x^2$的原因

![1741102215346](D:\msys64\home\31932\qc\qcProjects\note\figure\1741102215346.png)

现在我们用三角函数的形式证明正交性
$$
x = \cos\theta  \qquad dx = -\sin{\theta}d\theta\\
\int_{-1}^{1} P_J(x) P_{J'}(x) \, dx = \int_{0}^{\pi} P_J(\cos \theta) P_{J}(\cos \theta) \sin \theta \, d\theta = \frac{2 \delta_{JJ'}}{2J + 1}
$$
m不等于0时的正交性也有
$$
\int_{-1}^{1} P_J^{m}(x) P_{J'}^{m}(x) \, dx = \int_{0}^{\pi} P_J^{|m|}( \cos \theta) P_{J'}^{|m|}(\cos \theta) \sin \theta \, d\theta \\
= \frac{2}{(2J + 1)} \frac{(J + |m|)!}{(J - |m|)!} \delta_{JJ'}
$$
因此归一化因子就是
$$
N_{Jm} = \left[ \frac{2J + 1}{2} \frac{(J - |m|)!}{(J + |m|)!} \right]^{1/2}
$$
所以借助勒让德多项式，我们就解出了第一个方程


$$
\Theta_J^m(\theta) = \left[ \frac{2J + 1}{2} \frac{(J - |m|)!}{(J + |m|)!} \right]^{1/2} P_J^{|m|}(\cos \theta)
$$
所以整个方程的解就可以写作
$$
Y_J^{m}(\theta, \phi) = i^{m+|m|} \sqrt{ \frac{(2J + 1)(J - |m|)!}{4\pi (J + |m|)!}} P_J^{|m|}(\cos \theta) e^{im\phi}
$$
对于最前面的$i^{m+|m|}$只起到了一个约束正负的作用。当m为奇数且为负时是1，当m是奇数且为正时是-1。而当m是偶数无论正负都是1。**这里产生讨论的原因是因为归一化**。

这个看起来很丑，我们用实际代几个数去理解一下。

![1741103499972](.\figure\1741103499972.png)

现在我们在验证一下他的正交性。
$$
\int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, Y_J^{m}(\theta, \phi)^* Y_{J'}^{k}(\theta, \phi) = \delta_{JJ'} \delta_{mk}
$$
推理过程我们就省略了，只有当J=J', m=k时才不为0。且归一化证明得是1。 同时我们还利用前面的$i^{m+|m|}$约束了正负号。

所以这里的球坐标下的刚性旋转体的波动方程$Y_J^{m}(x)$是正交且归一化的，对标一维粒子的波动方程，他被称为**spherical harmonics** 。

现在我们用一个例子验证一下。

求证$Y_1^{-1}$是归一化的且和$Y_2^1$正交。

先证明归一化的有
$$
\int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, Y_{J'}^{*}(\theta, \phi) Y_{J}^{*}(\theta, \phi) = \frac{3}{8\pi} \int_{0}^{\pi} d\theta \sin \theta^3\int_0^{2\pi}d\phi\\
\text{let:} x= \cos{\theta}\\
\frac{3}{8\pi} \cdot 2\pi \int_{-1}^{1} (1 - x^2) \, dx = \frac{3}{4} \left( 2 - \frac{2}{3} \right) = 1
$$
在证明正交性
$$
\int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, Y_{2}^{l}(\theta, \phi) Y_{1}^{-l}(\theta, \phi)\\
= -\left( \frac{15}{8\pi} \frac{2}{8\pi} \right)^{1/2} \int_{0}^{\pi} d\theta \sin \theta \int_{0}^{2\pi} d\phi \, \left( e^{-i\phi} \sin \theta \cos \theta \right) \left( e^{i\phi} \sin \theta \right) \\
= -\left( \frac{45}{64\pi^2} \right)^{1/2} \int_{0}^{\pi} d\theta \sin^3 \theta \cos \theta \int_{0}^{2\pi} d\phi \, e^{-2i\phi} \\
$$
因为最后一项的展开式$\cos{2\phi}+i\sin{2\phi} = 0$ 所以我们得到了正交性。

现在我们回顾一下求解这个方程的步骤

0. 先换成x的形式，得到勒让德方程组

1. 假设 $\beta = J(J+1)$ 和$|m|\leq J$
2. 探究特殊情况m = 0时解得解为勒让德方程，并验证了归一化和正交性
3. 推广$m\neq 0$ 时得到勒让函数。由于多项式不好处理，所以又换回了三角形式
4. 在三角形势下验证了正交性和归一化。并求出了归一化因子。
5. 两个乘起来得到了完整的波动方程，并归一化后带上了正负号$i^{m+|m|}$

## 回首刚性旋转体的薛定谔方程

因此带入$\beta = J(J+1)$后，我们就可以完整写出刚性旋转体的薛定谔方程为
$$
\hat{H} Y_J^{m}(\theta, \phi) = \frac{\hbar^2 J(J + 1)}{2I} Y_J^{m}(\theta, \phi) \quad J = 0, 1, 2, \ldots
$$
再有角动量和动能的关系式，我们可以写出角动量的算符为
$$
\hat{L}^2 = -\hbar^2 \left[ \frac{1}{\sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right) + \frac{1}{\sin^2 \theta} \frac{\partial^2}{\partial \phi^2} \right]
$$
其薛定谔特征方程为
$$
\hat{L}^2 Y_J^{m}(\theta, \phi) = \hbar^2 J(J + 1) Y_J^{m}(\theta, \phi)
$$
所以旋转体角动量的平方的取值为
$$
L^2 = \hbar^2 J(J + 1) \quad J = 0, 1, 2, \ldots
$$
角动量在量子力学中扮演着重要的角色，就像它在经典力学中一样 。

# 刚性滚动近似的选择规则

所谓选择规则selection rule。指的就是吸收能量后的可能的跃迁方向。

经过数学计算，我们可以得到其选择规则就是$\Delta J = \pm1$.

# 振动-旋转模型的三个方向角动量不能同时被精确的观测到

不证明了，没意义

