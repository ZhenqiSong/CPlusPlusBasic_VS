**vector**表示对象的集合，其中所有对象的类型都相同。集合中每个对象都有一个与之对应的索引。使用vector需要包含的头文件和声明
```c++
#include <vector>
using namespace std;
```
vector是一个类模板，模板本身不是类或函数，可以看作是编译器生成类或函数编写的一份说明。编译器根据模板创建类或者函数的过程称为**实例化**，使用模板时，需要指出编译器应把类或者函数实例化为何种类型。  
vector不能使用应用做对象，因为引用不是对象。其他类型和类类型都可以构成vector对象。

## 定义和初始化

|方法 | 含义 |
|---|--- |
| vector\<T\> v1 | v1是个空vector,它潜在的元素是T类型的，执行默认初始化|
| vector\<T\> v2(v1) | v2中包含有v1所有元素的副本 |
| vector\<T\> v2 = v1 | 等价于 v2(v1) |
| vector\<T\> v3 (n, val) | v3包含了n个重复的元素，每个元素的值都是val |
| vector\<T\> v4(n) | v4包含了n个重复地执行值初始化的对象 |
| vector\<T\> v5{a, b, c} | v5包含了初始值 |
| vector\<T\> v5 = {a,b,c} | 等价于初始化 |

- 默认初始化
```c++
// 初始化
vector<string> svec; // 默认初始化，不包含任何元素
vector<string> svec2(svec); //把svec的值拷贝给svec2
```

- 列表初始化
```c++
vector<string> articles = { "a", "an", "the" }; 
// 列表初始化，c++11，必须是花括号
```

- 创建指定数量的元素
```c++
vector<int> ivec(10, -1); // 10个int类型，每个都是-1

vector<int> ivec1(10); 
//使用10个默认值进行初始化，int是0，string是空字符串
vector<int> ivec2{10};
// 如果使用的是花括号，则表示列表初始化，只有只一个值10

vector<string> svec3{10, "hi"} // 等价于svec3(10, "hi")
// 使用花括号进行初始化，但是提供的值又不能用来列表初始化
// 就要考虑用这样的值构造对象了
```
## 添加元素
通常创建vector时不知道元素的个数，这时就需要动态的添加元素，使用`push_back`成员函数向vector添加元素，负责把元素加入向量的末尾。
```c++
// 将0-99依次加入向量
vector<int> v2;
for (int i = 0; i != 100; i++) {
	v2.push_back(i);
}
```

## 其他操作

| 方法| 含义|
| --- | --- |
| v.empty() | 为空则真 |
| v.size() | 元素个数 |
| v.push_back(t) | 尾端添加T |
| v[n] | 返回v中第n个元素 |
| v1 = v2 | 用v2的值替换v1的值 |
| v1 = {...} | 使用列表的值替换v1的值 |
| v1 == v2 | 完全相等则为真 |
| v1 != v2 | |
| < <= > >= | 比较|

vector的大部分操作与string相同，元素的访问也可以使用for

```c++
vector <int> v3{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
for (auto& i : v3) {
// 使用引用才能修改vector内部的值，这点与string一样，
// 否则只是获取值，保存为i变量，变量值发生变化，向量内的值不变
	i *= i;
}
for (auto i : v3) {
	cout << i << " ";
}
```
```
out:
    1 4 9 16 25 36 49 64 81
```
同样支持使用下标访问元素，但是不能通过下标添加新值，可以修改已有的值
```c++
for (decltype(v3.size()) i = 0; i < v3.size(); i++) {
	cout << v3[i] << " ";
}
```