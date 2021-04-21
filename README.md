# C言語で解けない漸化式を数値解析

## 問題.1

![q1](/images/q1.png)

## 問題.2

![q2](/images/q2.png)


## 実行方法

お手持ちの`gcc`コンパイラで次のコマンドで実行できます.

+ macの方

```bash:other
# コンパイル
$ gcc main.c
# 実行
$ ./a.out
```

+ mac以外の方

もし'WSL'でLinux環境を作成しようとしている場合は[こちら](https://qiita.com/kkml_4220/items/f4fe903b36df8e4f7e24)の記事を参考にして環境構築をするとよいと思います.

`math.h`を`include`しているので,`-lm`オプションを付ける必要があります.

```bash:mac
# コンパイル
$ gcc main.c -lm
# 実行
$ ./a.out
```


# Author

* Author: Takahashi Katsuyuki
* E-mail: kkml.4220@gmail.com
