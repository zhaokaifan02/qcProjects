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
现在第一个方程已经解完，我们再看第二个方程
$$
\frac{d^2T}{dt^2}-Kv^2T(x)= 0
$$
同样的，当K等于0大于0的时候，这个方程总是没有意义的，所以设K小于零方程转化为
$$
\frac{d^2T}{dt^2}+\beta^2v^2T(x)= 0
$$
解得的结果为
$$
T(t) =c_5\cos{\beta vt} + c_6\sin{\beta vt}\\
\omega_n = \beta v = n\pi v\div l \\
T(t) = c_5\cos{\omega_nt} + c_6\sin{\omega_nt}
$$
因此我们就可以解出最终的波动方程了
$$
u(x,t) = X(x)T(t)\\
=(B\sin{\omega_nx})(D\cos{\omega_n t}+E\sin{\omega_nt}) \\
=(F\cos{\omega_n t}+G\sin{\omega_nt}) \sin{\frac{n\pi }{l}x} \\
u_n(x,t) =  A_n\cos{(\omega_nt+\phi_n})\sin{\frac{n\pi }{l}x} \\
$$

## 驻波的概念与波动方程解系

因为这个**方程是由参数n决定的，所以最终的方程也要带n**。再由三角函数的和角公式最终得出结果。

这个方程也被称为正态简谐normal mode。就是一组代表一组简谐运动，他的频率如下
$$
\omega_n = \beta v = \frac{n\pi v }{l}\\
v_n = \frac{\omega_n }{2\pi} = \frac{vn}{2l}\\
$$
我们指定不同的n，可以画出如下的图像:

![1739590452801](.\figure\1739590452801.png)

第一个波被称为基本**模态fundamental mode** 或**基波first harmonic**。当n取1的时候，就是一个在频率为$\frac{v}{2l}$下的**谐波harmonic** 。

第二个波被称为，二次**谐波second harmonic 或first overtone**，是基波的二倍频率，对应n取2时得到的频率。注意当我们取x等于$\frac{l}{2}$时带入结果公式有
$$
u_2(x,t) =  A_2\cos{(\omega_2t+\phi_n})\sin{\frac{2\pi }{l}\frac{l}{2}} = 0
$$
所以无论时间$t$取多少，对应的振幅永远是0。 这样的点被称为**节点node** 。同样的$x=0$ 和$x=l$的点也存在，**但他们不是节点，而是由边界值来决定的**。

第三个波被称为，**三次谐波 third harmonic 或second overtone** ，他有两个节点。对应n取3时的频率。

由于**节点的位置与时间无关**，因此这种波被称为**驻波standing waves** 。在节点之间，弦上下摆动。



对于所有的n决定的函数$u_n(x,t)$,他们都是波动方程的解，因此这些**所有可能的解(驻波)组成了波动方程的解系**。
$$
u(x,t) = \sum_{n=1}^{\infin}A_n\cos{(\omega_nt+\phi_n})\sin{\omega_nx} = \sum_{n=1}^{\infin}u_n(x,t)
$$

## 驻波的叠加

现在我们考虑一个简单的波动方程，他只有两项。
$$
u(x,t) = u_1(x,t) + u_x(x,t)\\
u_1(x,t) = \cos{\omega_1t}\sin{\frac{\pi x}{l}}\\
u_2(x,t)=\frac{1}{2}\cos(\omega_2t+\frac{\pi}{2})\sin{\frac{2\pi x}{l}}
$$
我们可以分别画出这两个波随时间的关系以及他们的叠加

![1739595832716](.\figure\1739595832716.png)

对于第二个图像来说，他在时间T内走了完整的一个周期。而在同样时间内，第一个图像只走了周期的一般，因此我们可以得到$\omega_2 = 2\omega_1$. 图二的频率是图一而二倍，振动的速度更快。也不难发现他们都是驻波。

图三是他们二者的叠加，可以看到，节点的位置随着时间不同而改变了，因此两个**驻波standing waves**，叠加成了一个**行波traveling wave**，节点的位置在不断变化。

将任何复杂的、一般的波动分解为**正模态normal modes**  (就是驻波)的和或叠加，是振荡行为的一个基本性质，它源于波动方程是线性方程这一事实。 

所以我们再回过头来审视波动方程的解，一切假设的伏笔都一一收回。

# 二维波动方程

我们将前面的波动方程扩展到二维
$$
\frac{\partial^2 u}{\partial x^2} + \frac{\partial^ 2u }{\partial y^2} = \frac{1}{v^2}\frac{\part^2u}{\part t^2}
$$
其中$u(x,y,t)$表示一个再x，y平面上以速度$v$,移动的关于t的波的振幅的方程。

![1739598466835](.\figure\1739598466835.png)

因此他具有以下边界条件,对于所有的t都成立
$$
\left\{
\begin{array}{11}
u(0,y) = u(a,y) = 0 \\
u(x,0)=u(x,b)  = 0
\end{array}
\right.
$$
同样的分离变量法
$$
u(x,y,t) = F(x,y)T(t)
$$
带入方程得6
$$
\frac{1}{v^2T(t)}\frac{\part^2T}{\part t^2} = \frac{1}{F(x,y)}(\frac{\part^2 F}{\part x^2}+\frac{\part^2 F}{\part y^2})
$$
采取前面的思路，我们设置一个负数$-\beta^2$,整理得
$$
\frac{\part^2T}{\part t^2}+v^2\beta^2T(t) = 0\\
(\frac{\part^2 F}{\part x^2}+\frac{\part^2 F}{\part y^2}) + \beta^2F(x,y) = 0
$$
对于第二个方程来说，我们同样可以使用分离变量法$F(x,y) = X(x)Y(y)$
$$
\frac{1}{X(x)}\frac{\part^2 X}{\part x^2}+\frac{1}{Y(y)^2}\frac{\part^2 Y}{\part y^2} + \beta^2 = 0
$$
因为x，y是假设独立的，因此方程的解的情况可以写成如下形式
$$
\frac{1}{X(x)}\frac{\part^2 X}{\part x^2} = -p^2\\
\frac{1}{Y(y)^2}\frac{\part^2 Y}{\part y^2} = -q^2\\
\beta^2 = p^2+q^2
$$
因此前两个方程可以写为
$$
\frac{\part^2 X}{\part x^2} + p^2X(x) = 0\\
\frac{\part^2 Y}{\part y^2}+ q^2Y(y) = 0
$$
参照前面解法很容易解得
$$
X(x) = A\cos{px} + B\sin{px}\\
Y(y) = C\cos{qx}+D\sin{qx}
$$
这时对边界情况进行分析，可以得到
$$
X(0)Y(y) =X(a)Y(y) = 0\\
X(x)Y(y) = X(x)Y(b) = 0\\
X(0) = X(a) = Y(0) =Y(a) = 0
$$
所以将其带入通解，可以得到
$$
pa=n\pi\\
qb = m\pi\\
X_n(x) = B\sin{\frac{n\pi x}{a}}\\
Y_m(y) = D\sin{\frac{m\pi y}{b}}
$$
所以对于$\beta ,a,b,n,m$有如下关系
$$
\beta_{nm} = \pi(\frac{n^2}{a^2}+\frac{m^2}{b^2})^{\frac{1}{2}}
$$
之后我们再把目光回到最初的那个关于时间的方程，他的化简后通解为
$$
T(t) =E\cos{\beta vt} + F\sin{\beta vt}\\
$$
经过上面分析T也是一个和$\beta m, n$有关的式子所以改写为
$$
T_{nm}(t) = E_{nm}\cos{\omega_{nm}t}+F_{nm}\sin{\omega_{nm}t}\\
\omega_{nm} = \beta_{nm}v =v\pi(\frac{n^2}{a^2}+\frac{m^2}{b^2})^{\frac{1}{2}}
$$
然后使用和角公式得到如下结果
$$
T_{nm}(t) = G_{nm}\cos{(\omega_{nm}t + \phi_{nm})}
$$
所以这个方程的解可以被写为
$$
u_{mn}(x,y,t) = X_n(x)Y_m(y)T_{nm}(t)\\
u(x,y,t) = \sum_{n=1}^{\infin}\sum_{m=1}^{\infin}u_{mn}(x,y,t) \\
=\sum_{n=1}^{\infin}\sum_{m=1}^{\infin}G_{nm}\cos{(\omega_{nm}t + \phi_{nm})} \sin{\frac{n\pi x}{a}} \sin{\frac{n\pi y}{b}}\\
$$
ps: 可以理解为矩阵加法

就像一维的弦震动一样，二维的波动方程也可以看为若干**驻波的叠加**。与一维不同，与时间无关衡为0的点连成了一条线，被称为**节点线node line**。

![1739602750192](.\figure\1739602750192.png)

这是在平面$a!=b$的情况下绘制的图，**橙色代表向上振动，灰色代表向下震动**。

频率为
$$
v_{nm} = \frac{\omega_{nm}}{{2\pi}} =\frac{v(\frac{n^2}{a^2}+\frac{m^2}{b^2})^{\frac{1}{2}}}{2}
$$
所以当振动的平面为正方形$a=b$时，可以化简为如下形式
$$
v_{nm} =\frac{v(n^2+m^2)^{\frac{1}{2}}}{2a}\\
\omega_{nm} = \frac{v\pi(n^2+m^2)^{\frac{1}{2}}}{a}
$$
我们可以发现
$$
\omega_{12} = \omega_{21} =\frac{v\pi}{a}5^{\frac{1}{2}}
$$
但是带入**驻波(normal modes)**的方程结果显而易见是不同的，我们将其绘制成了图像。

![1739603564901](.\figure\1739603564901.png)

可以看到波确实是不同的，但是u12的节点线平行于x轴，u21的节点线平行于y轴。**白色那条线**

这种情况是**简并degeneracy** 的一个例子，我们称$\omega_{12}=\omega{21}是双重简并 **doubly degenerate** 或**two-fold degenerate** 。

简并现象是由$a=b$来引入的**对称性symmetry**。不仅仅因为a=b时，在$a!=b$的情况下，如果出现$n^2+m^2=m^2+n^2$的情况时，也会出现简并现象。

**简并现象（degeneracy）可以理解为波动方程中存在多个不同的状态（或模态）具有相同的频率或能量。这种情况通常发生在量子力学、固体物理等领域。** 

模态modes，就理解成波。频率通过普朗克联系能量。

# 波的特性是相互干扰

干扰interference 也被翻译为**干涉**。

**行波travel wave可以表示为驻波standing wave的叠加**

驻波可以叠加称行波，行波也可以叠加成驻波。

行波我们一般用虚数来表示，表示物理意义时一般取实部。
$$
u(x,t) = Ae^{i(kx-\omega t)}
$$
其中A是振幅。

k是**波矢量wave vector**描述了波传播的方向，$k=\frac{2\pi}{\lambda}$