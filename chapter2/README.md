# String
��׼������string��ʾ�ɱ䳤���ַ����У�ʹ��string���ͱ������Ȱ���stringͷ�ļ���
```c++
string s1;
string s2 = s1;
string s3 = "hiye"; // �������Ŀ��ַ���������������s3��
string s4(10, 'c'); // ������python �е� "c" * 10
```
ʹ��`=`�ų�ʼ��һ����������**������ʼ��**�������ұߵ�ֵ������������ȥ�������õȺŵķ�ʽ��**ֱ�ӳ�ʼ��**��
ʹ�ö����ʼֵ���г�ʼ��ʱͨ����ֱ�ӳ�ʼ������������s4������ͨ��������ʼ��Ҳ��������
```c++
string s5 = string("123");
```
## �����������
һ�������Ҫ�涨��ʼ�������ķ�ʽ�⣬��Ҫ�������������ִ�еĲ���  

|����|����| 
|---|---|
| os << s | ��sд�������os�У�����os |
| is >> s | ��is�ж�ȡ�ַ�������s���ַ����Կհ׷ָ�������is |
| getline(is, s) | ��is�ж�ȡһ�и���s,����is |
| s.empty() | sΪ�շ���true, ���򷵻�false | 
| s.size() | ����s���ַ��ĸ��� |
| s[n] | ����s�еĵ�n���ַ������� |
| s1 + s2 | ���������ַ������Ӻ�Ľ�� |
| s1 = s2 | ��s2�ĸ����滻s1��ԭ�����ַ� |
| s1 == s2 | �ж������ַ��Ƿ���ȣ�����bool |
| s1 != s2 | �����жϣ���Сд���� | 
| < , <=, >, >= | �����ַ����ֵ��е�˳����бȽϣ���Сд���� |

- ��д string ����  
ʹ��`cin, cout`���ɣ�ע����Ƕ�д����ʱ��string������Զ����Կ�ͷ�Ŀհײ��ӵ�һ���������ֿ�ʼ����ֱ��������һ���հ�Ϊֹ��  
�������� ��    hello  world��,������ǡ�hello��
- ��ȡδ֪����string����
```c++
string word;
while (cin >> word)
    cout << word << endl;
```
- ʹ��getline��ȡһ����  
��ϣ����������ʱ�Ŀո�ʱ������ʹ��`getline`����`>>`, getline���������з�ʱ����
```c++
string line;
getline(cin, line);
cout << line << endl;
```
### empty��size����
**empty**����string�����Ƿ�Ϊ�շ���һ����Ӧ�Ĳ���ֵ;  
**size**���ض���ĳ��ȡ�
```c++
string line;
while (getline(cin, line))
{
	if (!line.empty()) {
		cout << line << endl;
		cout << line.size() << endl;
	}			
}	
```
```
input:
    hello world!

output:
    hello world!
16
```
- string::size_type  
size()�����ķ��ض���ʱ`string::size_type`���͵Ķ��󣬶�����unsigned
```c++
string::size_type len_line = line.size();
auto len_line2 = line.size();
decltype(line.size()) len_line3 = line.size();
```
### �Ƚ�string ����
�Ƚ�������Դ�Сд���У�string���������ζ����������ĳ�����Ȳ������������ַ�Ҳ��ȫ��ȣ�  
�Ƚ�����ѭ��ԭ��
- �������󳤶Ȳ�ͬ���϶̵�ÿ���ַ�����ϳ���ÿ����Ӧλ����ȣ���˵�϶̵Ķ���С�ڽϳ���
- ������������Ӧλ�ò�һ�£����ַ����ıȽϽ���ǵ�һ�Բ�ͬ�ַ��ıȽϽ����
### ���
�ַ�����ӣ����ǽ����������ַ���ƴ�ӳ�һ����  
��string������ַ�����ֵ���ַ�������ֵ����һ�������ʹ��ʱ������ȷ��ÿ���ӷ�������������������������һ��string����
```c++
// �ӷ�
string s_a = "hello";
string s_b = "world";
cout << s_a + s_b << endl;
cout << s_a + "," + "world" << endl; // ��ȷ�����մ����ҵ�˳�� s_a + ","�Ѿ���string��_
cout << "hello" + "," + s_b << endl; // ������Ϊǰ����ʱ���������������
```
## ����string�����е��ַ�

`cctype`ͷ�ļ��жԵ����ַ��Ĵ���

| | |
| --- | --- |
| isalnum(c) | ��c����ĸ������ʱΪ�� |
| isalpha(c) | ��c����ĸʱΪ�� |
| iscntrl(c) | ��c�ǿ����ַ�Ϊ�� |
| isdigit(c) | ����Ϊ�� |
| islower(c) | СдΪ�� |
| isprint(c) | �ɴ�ӡΪ�� |
| ispunct(c) | ����ַ�Ϊ�� |
| isspace(c) | �հ�Ϊ�棬�ո��Ʊ���� |
| isupper(c) | ��дΪ��|
| isxdigit(c) | ʮ������Ϊ��|
| tolower(c) | תСд |
| toupper(c) | ת��д |

- ʹ�÷�Χ for �������ַ��� 
```c++
string str("some thing");
// ��Χ for ��python��for������
// ʹ��c ���� ÿ���ַ�
for (auto c : str) {
	cout << c << endl;
}
```
- ʹ�÷�Χfor�ı��ַ����е��ַ�  
�����ı�string�����е��ַ���ֵ��**�����ѭ�������������������**��ʹ�������޸����󶨵��ַ�
```c++
string s("Hello World");
for (auto& c : s) {
	c = toupper(c);
}
cout << s << endl;
```
```
out:
    HELLO WORLD
```
- ֻ����һ�����ַ�  
�������һ�����ַ��Ͳ���ʹ��for���б���ȫ��������ʹ��**�±�** �� **������**��  
ʹ���±������Ϊ`string::size_type`,����ֵ�Ǹ�λ�����ַ���**����**����������ķ���    
```c++
for (decltype(s.size()) index = 0;
	index != s.size() && !isspace(s[index]); index++) {
	s[index] = toupper(s[index]);
}
cout << s << endl;
``` 
```
out:
    HELLO world
```
���ۺ�ʱ�õ��ַ������±꣬��Ҫ�����Ϸ���`0 -> s.size()-1`