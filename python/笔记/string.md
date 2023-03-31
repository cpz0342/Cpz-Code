# Python 常用字符串函数

|方法|描述|
|---|---|
|`string.capitalize`|把字符串的第一个字符大写|
|`string.center(width)`|返回一个原字符串居中，并使用空格填充至长度`width`的新字符串|
|`string.count(str, beg=0, end=len(string))`|返回`str` 在 `string` 里面出现的次数，如果 `beg` 或者 `end` 指定则返回指定范围内 `str` 出现的次数|
|`string.find(str, beg=0, end=len(string))`|检测 `str` 是否包含在 `string` 中，如果 `beg` 和 `end` 指定范围，则检查是否包含在指定范围内，如果是返回开始的索引值，否则返回-1|
|`string.split(str="", num=string.count(str))`|以 `str` 为分隔符切片 `string`，如果 `num` 有指定值，则仅分隔 `num+1` 个子字符串|
|`string.replace(str1,str2)`|把`string` 中的 `str1`替换成`str2`|