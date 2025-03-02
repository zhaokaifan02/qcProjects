# 球形坐标

笛卡尔坐标是最常见的坐标，但是对于许多问题，这种坐标是繁琐的。当所描述的系统具有某种自然中心时，就会出现这种问题的一个特别重要的类型，比如原子核。在描述原子系统以及许多其他系统时，使用球坐标是最方便的。

![1740828358519](.\figure\1740828358519.png)

和二维平面的极坐标一样，我们用一个半径和两个角度来描述一个坐标。

从这个关系图中，我们可以看到笛卡尔坐标和球形坐标的对应关系为。
$$
x = r \sin \theta \cos \phi \\
y = r \sin \theta \sin \phi \\
z = r \cos \theta
$$


该坐标被称为**球形坐标系spherical coordinate system** 。偶尔我们也会用以下形式来表明
$$
r = \sqrt{x^2 + y^2 + z^2}\\
\cos \theta = \frac{z}{\sqrt{x^2 + y^2 + z^2}} \\
\tan \phi = \frac{y}{x}
$$
由此看来如果$r=1$是一个单位半径的球，那么球面上任意一点都可以用$\theta$和$\phi$来表示。

从图上来看$\theta$表示从北极过来的**倾斜declination**(或者翻译为地理上的名词赤纬) ，因此$\theta$的的范围是$0\leq \theta \leq \pi$。而$\phi$表示绕赤道的偏移，因此范围为$0\leq \phi \le 2\pi$。 对于$r$来说，他表示到原点的距离，因此范围为$0\leq r \le \infin$ 。

# 球形坐标下的积分

笛卡尔坐标系下的三重积分中的微元表示为$dxdydz$，但是球形坐标系中就没有这么简单了。

![1740894190337](.\figure\1740894190337.png)

我们以图像为例，这个曲顶柱体可以近似为一个长方体，他的微元体积为
$$
dV = (r \sin \theta \, d\phi)(r \, d\theta) \, dr = r^2 \sin \theta \, dr \, d\theta \, d\phi
$$
证明思路也可以用雅可比行列式来证明，这里就不再重复计算了。现在我们来求一下半径为$a$的球体的体积
$$
V = \int_{0}^{a} r^2 \, dr \int_{0}^{\pi} \sin \theta \, d\theta \int_{0}^{2\pi} d\phi = \left( \frac{a^3}{3} \right)(2)(2\pi) = \frac{4}{3} \pi a^3
$$
这和我们前面背过的半径为$r$的球体的体积是相同的。我们再深一步考虑，如果只对$\phi$和$\theta$积分可以得到
$$
dV = r^2 \, dr \int_{0}^{\pi} \sin \theta \, d\theta \int_{0}^{2\pi} d\phi = 4\pi r^2 \, dr
$$
这个量是半径和厚度为$dr$的球壳的体积，所以因子$4\pi r^2$表示在厚度为$dr$下的表面积。

在实际情况下我们往往会处理形如这样的积分。
$$
I = \int_{0}^{\infty} \int_{0}^{\pi} \int_{0}^{2\pi} F(r, \theta, \phi) \, r^2 \, \sin \theta \, dr \, d\theta \, d\phi
$$
我们可以对其进行这样的调整
$$
I = \int_{0}^{\infty} dr \, r^2 \int_{0}^{\pi} d\theta \, \sin \theta \int_{0}^{2\pi} d\phi \, F(r, \theta, \phi)
$$
这样调整前面的积分符号就像一个算子一样，对右边的东西进行**处理acts on**。现在我们分析一下这样的积分。

先对$F(r,\theta,\phi)$从0到$2\pi$对$\phi$积分，然后乘上$\sin{\theta}$从0到$2\pi$进行积分，最后再乘上$r^2$对$r$从0到$\infin$进行积分。这种处理的好处是**积分变量及其相关的极限总是明确的**。

我们以一个函数为例，这个函数是氢原子2px轨道的状态波函数平方
$$
F(r, \theta, \phi) = \frac{1}{32\pi} r^{-2} e^{-r} \sin^2 \theta \cos^2 \phi
$$
我们对其进行积分得到
$$
I = \frac{1}{32\pi} \int_{0}^{\infty} dr \, r^2 \int_{0}^{\pi} d\theta \, \sin \theta \int_{0}^{2\pi} d\phi \, r^{-2} e^{-r} \sin^2 \theta \cos^2 \phi
$$
先对最后面的$\phi$进行积分
$$
\int_{0}{2\pi} d\phi\,\cos^2{\phi} = \pi \\
I = \frac{1}{32} \int_{0}^{\infty} dr \, r^2 \int_{0}^{\pi} d\theta \, \sin \theta \, r^{-2} e^{-r} \sin^2 \theta
$$
之后再对$\theta$进行积分有
$$
I_{\theta} = \int_0^{\pi}d\theta\, \sin^3{\theta} \\
$$
对于这个积分我们往往利用换元法令$x = \cos{\theta}$可以得到
$$
I_\theta = \int_{0}^{\pi} d\theta \, \sin^3 \theta = -\int_{-1}^{1} dx \, (1 - x^2) = 2 - \frac{4}{3} = \frac{2}{3}
$$
带入后得到
$$
I = \frac{1}{24} \int_{0}^{\infty} dr \, r^4 e^{-r}
$$
利用贝塔函数的结论
$$
\int_{0}^{\infty} x^n e^{-x} \, dx = n!
$$
整体代入得
$$
I = \frac{1}{24} \int_{0}^{\infty} dr \, r^4 e^{-r} = \frac{1}{24} (4!) = 1
$$
这也证明了氢原子2px轨道的状态函数是归一化的。

通常情况下对于前面这种类似于氢原子轨道的函数积分，最后的结果往往与$\phi$和$\theta$无关，即$r$与他们两个是无关的也就是可以写为$F(r,\theta,\phi) = f(r)$ 这种情况
$$
I = \int_{0}^{\infty} dr \, r^2 \int_{0}^{\pi} d\theta \, \sin \theta \int_{0}^{2\pi} d\phi \, f(r)
$$
由于前面的
$$
\int_{0}^{\pi} \sin \theta \, d\theta = \int_{-1}^{1} dx = 2
$$
所以这个式子可以整理得
$$
I = \int_{0}^{\infty} f(r) \, 4\pi r^2 \, dr
$$
这里的要点是$F(r,\theta,\phi) = f(r)$变成了一个一维积分因此乘上$4\pi r^2$。按照前面说过的$4\pi r^2 dr$ 是半径为r厚度为$dr$的球壳的体积。

我们再来一个实际的例子，以氢原子1s原子轨道为例计算得到的这个轨道的方程为
$$
f(r) = \frac{1}{(\pi a_0^3)^{1/2}} e^{-r/a_0}
$$
这里的轨道方程就和角度无关，所以我们可以验证其平方可积的归一化特点
$$
I = \int_{0}^{\infty} f^2(r) \, 4\pi r^2 \, dr = \frac{4\pi}{\pi a_0^3} \int_{0}^{\infty} r^2 e^{-2r/a_0} \, dr \\
= \frac{4}{a_0^3} \cdot \frac{2}{(2/a_0)^3} = 1
$$

# 微分表面积

前面我们提到的微分表面积可以表示为
$$
dA = r^2\sin{\theta}d\theta d\phi
$$
如果针对单位半径的话可以有
$$
dA = \sin{\theta}d\theta d\phi
$$
如果我们对整个球面进行积分，可以得到
$$
A = \int_{0}^{\pi} \sin \theta \, d\theta \int_{0}^{2\pi} d\phi = 4\pi
$$
我们把原点与面积相接的曲面所围成的曲面称为**立体角solid angle**。如下图

![1740904220684](.\figure\1740904220684.png)

由前面的积分可以看到球体的完全的solid angle是$4\pi$,就像圆的立体角是$2\pi$。我们往往定义立体角为
$$
d\Omega = \sin \theta \, d\theta \, d\phi
$$
所以上面的对球面积分可以写为
$$
\int_{\text{sphere}} d\Omega = 4\pi
$$

# 角积分

我们往往也会处理一种角积分angular integrals，一般为
$$
I = \int_{0}^{\pi} d\theta \, \sin \theta \int_{0}^{2\pi} d\phi \, F(\theta, \phi)
$$
注意到这里我们是在整个球的表面上对$F(\theta,\phi)$进行积分，例如我们常见的
$$
I = \frac{15}{8\pi} \int_{0}^{2\pi} d\phi \int_{0}^{\pi} d\theta \, (\sin^2 \theta \cos^2 \theta) \sin \theta
$$
对这个积分的处理思路为
$$
I = \left( \frac{15}{8\pi} \right) \int_{0}^{\pi} d\theta \, \sin^2 \theta \cos^2 \theta \sin \theta \int_{0}^{2\pi} d\phi\\
= \frac{15}{4} \int_{-1}^{1} (1 - x^3) x^2 \, dx = \frac{15}{4} \left[ \frac{2}{3} - \frac{2}{5} \right] = 1
$$
用一个例子来说明，请证明下面这个式子成立
$$
I = \int_{0}^{\pi} d\theta \, \sin \theta \int_{0}^{2\pi} d\phi \, Y_1^1(\theta, \phi)^* Y_1^{-1}(\theta, \phi) = 0 \\
Y_1^{1}(\theta, \phi) = -\left( \frac{3}{8\pi} \right)^{1/2} e^{i\phi} \sin \theta \\
Y_{1}^{-1}(\theta, \phi) = \left( \frac{3}{8\pi} \right)^{1/2} e^{-i\phi} \sin \theta
$$
我们将其带入可以得到
$$
I = -\frac{3}{8\pi} \int_{0}^{\pi} d\theta \, \sin^3 \theta \int_{0}^{2\pi} d\phi \, e^{-2i\phi}
 
$$
由于最后一项可以使用欧拉公式展开为$\sin{2\theta}$和$\cos{2\theta}$在0到$2\pi$上的积分为0。

所以我们称这两个函数在单位球面上是正交的。

# 拉普拉斯算子

经常被讨论的一个算子是拉普拉斯算子
$$
\nabla^2 = \frac{\partial^2}{\partial x^2} + \frac{\partial^2}{\partial y^2} + \frac{\partial^2}{\partial z^2} \\
\left( \frac{\partial^2}{\partial x^2} + \frac{\partial^2}{\partial y^2} + \frac{\partial^2}{\partial z^2} \right) f = \frac{\partial^2 f}{\partial x^2} + \frac{\partial^2 f}{\partial y^2} + \frac{\partial^2 f}{\partial z^2}
$$
在我们处理涉及中心对称的问题时，我们往往使用球坐标，因此拉普拉斯算子在在球坐标中可以写作
$$
\nabla^2 = \frac{1}{r^2} \frac{\partial}{\partial r} \left( r^2 \frac{\partial}{\partial r} \right) + \frac{1}{r^2 \sin \theta} \frac{\partial}{\partial \theta} \left( \sin \theta \frac{\partial}{\partial \theta} \right) + \frac{1}{r^2 \sin^2 \theta} \frac{\partial^2}{\partial \phi^2}
$$
