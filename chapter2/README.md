# String
标准库类型string表示可变长的字符序列，使用string类型必须首先包含string头文件。
```c++
string s1;
string s2 = s1;
string s3 = "hiye"; // 除了最后的空字符串，都拷贝到了s3中
string s4(10, 'c'); // 类似与python 中的 "c" * 10
```
使用`=`号初始化一个变量，是**拷贝初始化**，即将右边的值拷贝到变量中去。不适用等号的方式是**直接初始化**。
使用多个初始值进行初始化时通常用直接初始化，如上例中s4，不过通过拷贝初始化也能做到。
```c++
string s5 = string("123");
```
## 对象操作方法
一个类除了要规定初始化其对象的方式外，还要定义对象上所能执行的操作  

|方法|含义| 
|---|---|
| os << s | 将s写到输出流os中，返回os |
| is >> s | 从is中读取字符串赋给s，字符串以空白分隔，返回is |
| getline(is, s) | 从is中读取一行赋给s,返回is |
| s.empty() | s为空返回true, 否则返回false | 
| s.size() | 返回s中字符的个数 |
| s[n] | 返回s中的第n个字符的引用 |
| s1 + s2 | 返回两个字符串连接后的结果 |
| s1 = s2 | 用s2的副本替换s1中原来的字符 |
| s1 == s2 | 判断两个字符是否相等，返回bool |
| s1 != s2 | 等性判断，大小写敏感 | 
| < , <=, >, >= | 利用字符在字典中的顺序进行比较，大小写敏感 |

- 读写 string 对象  
使用`cin, cout`即可，注意的是读写操作时，string对象会自动忽略开头的空白并从第一个真正的字开始读起，直到遇到下一处空白为止。  
如输入是 “    hello  world”,输出则是“hello”
- 读取未知量的string对象
```c++
string word;
while (cin >> word)
    cout << word << endl;
```
- 使用getline读取一整行  
当希望保留输入时的空格时，可以使用`getline`代替`>>`, getline当读到换行符时截至
```c++
string line;
getline(cin, line);
cout << line << endl;
```
### empty和size操作
**empty**根据string对象是否为空返回一个对应的布尔值;  
**size**返回对象的长度。
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
size()函数的返回对象时`string::size_type`类型的对象，而不是unsigned
```c++
string::size_type len_line = line.size();
auto len_line2 = line.size();
decltype(line.size()) len_line3 = line.size();
```
### 比较string 对象
比较运算符对大小写敏感，string对象相等意味着两个对象的长度相等并且所包含的字符也完全相等；  
比较需遵循的原则：
- 两个对象长度不同，较短的每个字符都与较长的每个对应位置相等，就说较短的对象小于较长的
- 如果两个对象对应位置不一致，则字符串的比较结果是第一对不同字符的比较结果。
### 相加
字符串相加，就是将左右两个字符串拼接成一个。  
当string对象和字符字面值及字符串字面值混在一条语句中使用时，必须确保每个加法运算符的两侧运算对象至少有一个string对象
```c++
// 加法
string s_a = "hello";
string s_b = "world";
cout << s_a + s_b << endl;
cout << s_a + "," + "world" << endl; // 正确，按照从左到右的顺序， s_a + ","已经是string了_
cout << "hello" + "," + s_b << endl; // 错误，因为前两个时字面量，不能相加
```
## 处理string对象中的字符