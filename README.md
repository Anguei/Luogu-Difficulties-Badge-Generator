# Luogu-Difficulties-Badge-Generator
生成 Markdown 代码显示通过题目难度

**需配合[该爬虫](https://github.com/Anguei/Luogu-Ac-Difficulties)的输出结果使用**

## 使用方法
将[该爬虫](https://github.com/Anguei/Luogu-Ac-Difficulties) 输出的**各难度明细（包含详细题号部分的输入）**作为本项目的标准输入运行，得到的标准输出即为 Markdown 代码。

举例：

标准输入：
```plaintext
14 Yellow:
P1024 P1057 P1095 P1111 P1134 P1313 P1414 P1970 P2196 P2661
P3951 CF2A CF3C UVA10004
8 Green:
P1004 P1006 P1063 P1133 P1330 P1541 P1984 P2822
7 Blue:
P1052 P1136 P1341 P1373 P1854 P2921 P4779
1 Purple:
P1641
1 Bluedark:
P66666
1 Gray:
P6666
```

标准输出得到的 Markdown 效果：

![result](https://s1.ax1x.com/2018/08/28/PONTa9.png)

如果本地输出的结果很杂乱无章，建议使用文件输入输出，或使用知名国际在线 IDE 运行：ideone.com

## 作者的 badges
![result](https://s1.ax1x.com/2018/08/28/PONJUA.png)

当然，您也可以修改代码，自定义输出样式。
