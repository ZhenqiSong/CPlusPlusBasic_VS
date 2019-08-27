# ���

## �����
�������ԷֺŽ�����  
**�����**ֻ����һ�������ķֺš�������python�е�`pass`��
**�������**�û��������������������������У�Ҳ��Ϊ**��**�� һ�������һ���������ڿ������������ֻ���ڿ��ڲ��Լ�Ƕ���ڿ��е��ӿ�����ʡ�

## ����������

������if��swith��while��for���Ŀ��ƽṹ�ڶ�������������ڿ��ƽṹ�еı���ֻ����Ӧ�����ڲ��ɼ���һ��������������Ҳ�ͳ��������÷�Χ�ˡ�

## �������

### if���

�ж�һ��ָ�������Ƿ�Ϊ�棬�����жϽ�������Ƿ�ִ������һ����䡣
```C++
if (condition)
    statement // ͨ��ʽ����� {}
else
    statement
```
��if��������elseʱ�����������else��else�������������δƥ���ifƥ�䡣ʹ�û����ſ��Կ���else��ƥ��

### switch���

�ṩ��һ��������;���������ܹ������ɹ̶�ѡ��������ѡ��
```c++
string s = "hello, world";
unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
auto iter = s.begin();

while (iter != s.end())
{
	switch (*iter) // �Ա��ʽ��ֵ��������ȡ������ָ���ֵ
	{
	case 'a': // case��ǩ���������ͳ������ʽ����������case��ֵ������ͬ
		++aCnt; // ���ʽ��ֵ�����case����ƥ�䣬ƥ��ɹ���ִ�и�case�µ����ݡ�
		break; // ����break������switch
	case 'e':
		++eCnt;
		break;
	case 'i':
		++iCnt;
		break;
	case 'o':
		++oCnt;
		break;
	case 'u':
		++uCnt;
		break;
	default: // û��ƥ���ϵ���ִ�����
		break;
	}
	++iter;
}
cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << endl;
```
> ĳ��caseƥ��ɹ���˳��ִ��ʣ�µ�����case��֧��������ʽ���ж���һ���̣���Ҳ������ÿ��case��һ��break��ԭ��

```c++
// ͳ������Ԫ����ĸ
iter = s.begin();
while (iter != s.end())
{
	switch (*iter)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		++vowelCnt;
		break;
	default:
		break;
	}
	++iter;
}
```

## �������

### while���

ֻҪ����Ϊ�棬while�����ظ�ִ�в���ֱ������ĳ��������ͣ������
```C++
while(condition)
    statement
```

### ��ͳfor���

```c++
for (init-statement; condition; expression)
    statement
```

### ��Χfor���

```c++
for (declaration : expression)
    statement
```
expression ������һ�����У���Щ���͵Ĺ�ͬ�ص���ӵ���ܷ��ص�������begin��end��Ա��  
declaration ����һ�������������е�ÿ��Ԫ�ض���ת���ɸñ��������͡�ȷ������������򵥵ķ�����ʹ��auqto����˵������
�����Ҫ�޸����е�ֵ��Ҫ����Ϊ�������͡�

### do while

```C++
do 
    statement
while (condition)
```

## ��ת���

��ת����жϵ�ǰ��ִ�й��̡�

### break���

������ֹ����**�����**while, do while, for, switch��䡣������Щ���֮��ĵ�һ����俪ʼ����ִ�С�

### continue���

��ֹ�����ѭ���еĵ�ǰ������������ʼ��һ�ε�����ֻ�ܳ����� for, while, do while�ڲ���

### goto���

��goto�����������ת��**ͬһ������**����һ����䡣������Ҫʹ��

```
goto label; // label ��һ�����ı�ʶ��������ǩ�����һ���������䡣����֮ǰ��һ����ʶ���Լ�һ��ð��
end: return; // ��ʾ�������ڱ�����������ʶ�������֣���ˣ���ǩ��ʶ�����Ժͳ����е�����ʵ���ʶ��ͬһ�����ֲ�������š�
```

## try������쳣����

**throw���ʽ**���쳣��ⲿ��ʹ��throw���ʽ����ʾ���������޷���������⣬�����쳣  
**try����**�� �쳣������ʹ��try�����쳣��try�����Թؼ���try��ʼ������һ������catch�Ӿ������  
**�쳣��**��������throw���ʽ�����catch�Ӿ�֮�䴫���쳣�ľ�����Ϣ��

### throw ���ʽ
throw���ʽ�����ؼ���throw �� ��������һ�����ʽ�����б��ʽ�����;����׳����쳣���͡�

### try����
```c++
try {
    ...
} catch(exception-declaration){ // �쳣����
   ...
}catch(exception-declaration){
   ...
}
```

```C++
float a, b;
while (cin >> a >> b)
{
	try {
		if (b == 0)
			throw runtime_error("��������Ϊ0");
		cout << a / b << endl;
	}
	catch (runtime_error err) {
		cout << err.what();
		cout << "\n Try Again? y or n" << endl;
		char c;
		cin >> c;
		if (!cin || c == 'n')
			break;
	}
}
```
```
out:
    3 2
    1.5
    4 0
    ��������Ϊ0
    Try Again? y or n
    y
    4 2
    2
```

### ��׼�쳣
��׼�ⶨ����һ���࣬���ڱ����׼�⺯�����������⡣
- exception ͷ�ļ���������ͨ�õ��쳣��exception,��ֻ�����쳣�ķ��������ṩ�������Ϣ��
- stdexcept ͷ�ļ������˼��ֳ��õ��쳣��
- newͷ�ļ�������bad_alloc�쳣����
- type_info ͷ�ļ�������bad_cast�쳣����

![��׼�쳣��](../images/stdexcept.png)

ֻ����Ĭ�ϳ�ʼ���ķ�ʽ��ʼ��exception, bad_alloc bad_cast,������Ϊ��Щ�����ṩ��ʼֵ��
����������������Ҫʹ���ַ������г�ʼ����  
�쳣����֮����һ����Ϊwhat�ĳ�Ա�������ú���û���κβ���������ֵ��һ��C����ַ�����const char*,�ṩ�����쳣��һЩ�ı���Ϣ��
����쳣������һ���ַ�����ʼֵ����what�򷵻ظ��ַ��������������޳�ʼ�����쳣������˵�����������ɱ�����������