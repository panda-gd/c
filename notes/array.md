C语言数组
---------------------
数组是存储同类型数据的地方

### 数组的定义

> 类型 数组名[元素个数]
> 
> int  a[6]
>
> char b[24]
>
> 数组元素的个数是预定义的，是不能动态定义的 C99标准后可支持

### 如何访问数组中的元素

> 通过数组名称+元素下标的形式。注意数组的下标是从0开始的 比如数组a第三个元素就是 a[2]
>
> 数组越界：访问到不存在的数组下标。程序不会报错，但是程序不会执行正确，因此要注意。

### 数组的初始化

> 将数组中的所有元素都进行初始化： int a[10] = {0,1,2,3};
>
> 初始化的时候，列出所有元素则元素个数可不写：int a[] = {0,1,2,3}
>
> C99增加对某个元素进行初始化可使用 int a[10] = {[2]=3,[5]=8}