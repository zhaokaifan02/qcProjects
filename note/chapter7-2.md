# 多原子薛定谔方程

下一个要研究的系统是氦原子，He的原子序数是二，这说明他的核外有两个电子。 因此系统的能量包括

1. 原子核移动的动能
2. 1号电子的动能
3. 2号电子的动能
4. 原子核与一号电子的吸引力势能负号
5. 原子核与号电子的吸引力势能负号
6. 两个电子之间的相互排斥力带证号

因此表示全体能量的哈密顿算子表示为
$$
\left( -\frac{\hbar^2}{2M} \nabla^2 - \frac{\hbar^2}{2m_e} \nabla_1^2 - \frac{\hbar^2}{2m_e} \nabla_2^2 \right) \psi(\mathbf{R}, \mathbf{r}_1, \mathbf{r}_2) + \left( -\frac{2e^2}{4\pi\epsilon_0 |\mathbf{R} - \mathbf{r}_1|}\\ 
-\frac{2e^2}{4\pi\epsilon_0 |\mathbf{R} - \mathbf{r}_2|} + \frac{e^2}{4\pi\epsilon_0 |\mathbf{r}_1 - \mathbf{r}_2|}\right)  \psi(\mathbf{R}, \mathbf{r}_1, \mathbf{r}_2) = E \psi(\mathbf{R}, \mathbf{r}_1, \mathbf{r}_2)
$$
波动方程有三个未知数，其中R表示原子核的坐标，而$r_1$ 和$r_2$表示这两个电子的坐标。

$M$和$m_e$分别是原子核和电子的质量。后面的拉普拉斯算子表示对各个方向的动能计算。

这是一个三体的模型，相对坐标更加复杂，不能像前面的二体模型一样使用约化质量转化为绕着原点的球模型。

因为$M\gg m_e$，因此把原子核相对于电子的运动是固定的，仍然是一个很好的近似。在这个近似下，我们可以把**原子核固定在球坐标系的原点，**然后写出薛定谔方程
$$
-\frac{\hbar^2}{2m_e} \left( \nabla_1^2 + \nabla_2^2 \right) \psi(\mathbf{r}_1, \mathbf{r}_2) - \frac{2e^2}{4\pi\epsilon_0} \left( \frac{1}{|\mathbf{r}_1|} + \frac{1}{|\mathbf{r}_2|} \right) \psi(\mathbf{r}_1, \mathbf{r}_2) + \frac{e^2}{4\pi\epsilon_0 |\mathbf{r}_1 - \mathbf{r}_2|} \psi(\mathbf{r}_1, \mathbf{r}_2) = E \psi(\mathbf{r}_1, \mathbf{r}_2)
$$
如果没有最后一项的**交叉项interelectronic repulsion** ，我们就可以使用变量分离法，将r1和r2拆开，将哈密顿算子写成两个子算子之和。再转化为两个方程。这样根据数学推导，这两个方程的解的线性组合就是新的解。

可以说前面我们分析过好多。量子化学的核心就是波函数和能量，因为有波函数和能量，就能画出跃迁图谱，之后就能和现实中存在的物质的光谱进行对比，从而分析或预测其结构。



**所以量子化学的核心就是解薛定谔方程的过程。**

