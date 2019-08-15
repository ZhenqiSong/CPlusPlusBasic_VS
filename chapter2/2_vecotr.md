**vector**��ʾ����ļ��ϣ��������ж�������Ͷ���ͬ��������ÿ��������һ����֮��Ӧ��������ʹ��vector��Ҫ������ͷ�ļ�������
```c++
#include <vector>
using namespace std;
```
vector��һ����ģ�壬ģ�屾����������������Կ����Ǳ����������������д��һ��˵��������������ģ�崴������ߺ����Ĺ��̳�Ϊ**ʵ����**��ʹ��ģ��ʱ����Ҫָ��������Ӧ������ߺ���ʵ����Ϊ�������͡�  
vector����ʹ��Ӧ����������Ϊ���ò��Ƕ����������ͺ������Ͷ����Թ���vector����

## ����ͳ�ʼ��

|���� | ���� |
|---|--- |
| vector\<T\> v1 | v1�Ǹ���vector,��Ǳ�ڵ�Ԫ����T���͵ģ�ִ��Ĭ�ϳ�ʼ��|
| vector\<T\> v2(v1) | v2�а�����v1����Ԫ�صĸ��� |
| vector\<T\> v2 = v1 | �ȼ��� v2(v1) |
| vector\<T\> v3 (n, val) | v3������n���ظ���Ԫ�أ�ÿ��Ԫ�ص�ֵ����val |
| vector\<T\> v4(n) | v4������n���ظ���ִ��ֵ��ʼ���Ķ��� |
| vector\<T\> v5{a, b, c} | v5�����˳�ʼֵ |
| vector\<T\> v5 = {a,b,c} | �ȼ��ڳ�ʼ�� |

- Ĭ�ϳ�ʼ��
```c++
// ��ʼ��
vector<string> svec; // Ĭ�ϳ�ʼ�����������κ�Ԫ��
vector<string> svec2(svec); //��svec��ֵ������svec2
```

- �б���ʼ��
```c++
vector<string> articles = { "a", "an", "the" }; 
// �б���ʼ����c++11�������ǻ�����
```

- ����ָ��������Ԫ��
```c++
vector<int> ivec(10, -1); // 10��int���ͣ�ÿ������-1

vector<int> ivec1(10); 
//ʹ��10��Ĭ��ֵ���г�ʼ����int��0��string�ǿ��ַ���
vector<int> ivec2{10};
// ���ʹ�õ��ǻ����ţ����ʾ�б���ʼ����ֻ��ֻһ��ֵ10

vector<string> svec3{10, "hi"} // �ȼ���svec3(10, "hi")
// ʹ�û����Ž��г�ʼ���������ṩ��ֵ�ֲ��������б���ʼ��
// ��Ҫ������������ֵ���������
```
## ����Ԫ��
ͨ������vectorʱ��֪��Ԫ�صĸ�������ʱ����Ҫ��̬������Ԫ�أ�ʹ��`push_back`��Ա������vector����Ԫ�أ������Ԫ�ؼ���������ĩβ��
```c++
// ��0-99���μ�������
vector<int> v2;
for (int i = 0; i != 100; i++) {
	v2.push_back(i);
}
```

## ��������

| ����| ����|
| --- | --- |
| v.empty() | Ϊ������ |
| v.size() | Ԫ�ظ��� |
| v.push_back(t) | β������T |
| v[n] | ����v�е�n��Ԫ�� |
| v1 = v2 | ��v2��ֵ�滻v1��ֵ |
| v1 = {...} | ʹ���б���ֵ�滻v1��ֵ |
| v1 == v2 | ��ȫ�����Ϊ�� |
| v1 != v2 | |
| < <= > >= | �Ƚ�|

vector�Ĵ󲿷ֲ�����string��ͬ��Ԫ�صķ���Ҳ����ʹ��for

```c++
vector <int> v3{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
for (auto& i : v3) {
// ʹ�����ò����޸�vector�ڲ���ֵ�������stringһ����
// ����ֻ�ǻ�ȡֵ������Ϊi����������ֵ�����仯�������ڵ�ֵ����
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
ͬ��֧��ʹ���±����Ԫ�أ����ǲ���ͨ���±�������ֵ�������޸����е�ֵ
```c++
for (decltype(v3.size()) i = 0; i < v3.size(); i++) {
	cout << v3[i] << " ";
}
```