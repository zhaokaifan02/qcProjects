# 微扰理论将一个问题的解用先前已解决的另一个问题来表示。

一般情况下我们要解决的薛定谔方程可以写作

$$
\hat{H}\psi = E\psi
$$

对于一些典型的系统，比如谐振子，刚性旋转体，或者说之前提到的氢原子。可以对其数学处理得到解析解。但是对于稍微复杂一点的，有交叉项的薛定谔方程，比如氮原子这种薛定谔方程。

$$
\hat{H}=-\frac{\hbar^2}{2m_\mathrm{e}}(\nabla_1^2+\nabla_2^2)-\frac{2e^2}{4\pi\epsilon_0}\left(\frac{1}{r_1}+\frac{1}{r_2}\right)+\frac{e^2}{4\pi\epsilon_0}\frac{1}{r_{12}}
$$



写成更加常见的形式为

$$
\hat{H}=\hat{H}_{\mathrm{H}}(1)+\hat{H}_{\mathrm{H}}(2)+\frac{e^2}{4\pi\epsilon_0}\frac{1}{r_{12}}
$$

其中

$$
\hat{H}_\mathrm{H}(j)=-\frac{\hbar^2}{2m_\mathrm{e}}\nabla_j^2-\frac{2e^2}{4\pi\epsilon_0}\frac{1}{r_j}\quad
 j=1\quad\mathrm{and}\quad2
$$



这里的$\hat{H}_H(j)$表示的是单电子的哈密顿算子。每个单电子也有其对应的薛定谔方程，可以写作

$$
\hat{H}_\mathrm{H}(j)\psi_\mathrm{H}(r_j,\theta_j,\phi_j)=E_j\psi_\mathrm{H}(r_j,\theta_j,\phi_j)\quad j=1\mathrm{~and~}2
$$

其中$\psi_H$表示的是类氢原子中电子的状态方程。由上一章的解析解可以推断得到，当$Z=2$时的能量为

$$
E_j=-\frac{Z^2m_\mathrm{e}e^4}{8\epsilon_0h^2n_j^2}\quad j=1\mathrm{~and~}2
$$

注意，如果方程中没有电子间排斥项，氦原子的哈密顿算符将是可分离的，氦原子波函数将是类氢波函数乘积的产物。

另一个问题的例子，如果没有哈密顿算符中的附加项，就可以很容易地解决，那就是一个非谐振子。回想一下，谐振子势作为关于平衡核分离的一般势的泰勒展开中的第一项自然出现。考虑一个非谐振子，它的势能以下给出

$$
    V(x)=\frac{1}{2}kx^2+\frac{1}{6}\gamma_3x^3+\frac{1}{24}\gamma_4x^4
$$

所以此时的哈密顿算子可以写为

$$
\hat{H}=-\frac{\hbar^2}{2\mu}\frac{d^2}{dx^2}+\frac{1}{2}kx^2+\frac{1}{6}\gamma_3x^3+\frac{1}{24}\gamma_4x^4
$$

同样的道理，如果没有后面的三次项和四次项。哈密顿算子也可以写为两个算子的和从而快速写出解析解。

这两个例子通过哈密顿算子为我们介绍了**微扰理论perturbation theory**背后的思想。

在这些例子中，哈密顿算子由两个部分组成，其中一部分可以被精确的求出解析解，另一部分则阻碍解析解的求出。

我们称第一项为**无扰动的哈密顿算子unperturbed Hamiltonian operator**，第二项被称为**扰动的perturbation**。

我们将非扰动的哈密顿算子定义为$\hat{H}^0$，被扰动的哈密顿算子为$\hat{H}^1$。所以薛定谔方程可以写为

$$
\hat{H} = \hat{H}^0 +\hat{H}^1
$$

对于第一个算子，他的薛定谔方程很容易求解，我们记为    

$$
\hat{H}^{(0)}\psi^{(0)}=E^{(0)}\psi^{(0)}
$$



其中上面的0表示是非扰动的部分，这里的$\psi$和$E$表示解析解的形式。对于氮原子，他的非扰动部分以及其对应的解可以写为

$$
\begin{aligned}
 & \hat{H}(0)=\hat{H}_{\mathrm{H}}(1)+\hat{H}_{\mathrm{H}}(2) \\
 & \psi^{(0)}=\psi_{\mathrm{H}}(r_{1},\theta_{1},\phi_{1})\psi_{\mathrm{H}}(r_{2},\theta_{2},\phi_{2}) \\
 & E^{(0)}=-\frac{4m_\mathrm{e}e^4}{8\epsilon_0^2\hbar^2n_1^2}-\frac{4m_\mathrm{e}e^4}{8\epsilon_0^2\hbar^2n_2^2} \\
\end{aligned}
$$

这里我们严格按照了之前推导过的，如果哈密顿算子可以写为多个哈密顿算子之和，那么可以分别求解这多个哈密顿算子对应的薛定谔方程。然后最终的状态函数是状态函数之积，能量是能量之和，
