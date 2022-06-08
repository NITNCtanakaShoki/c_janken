# c_janken

## 概要
2021年のプロⅢの前期中間試験の過去問

## 問題
ユーザのコマンドラインでの入力でジャンケンの手を0から2で受け取り、乱数で作成したコンピュータのジャンケンの手との勝敗を表示する。あいこの場合は入力からやり直す。また、不正な入力値の場合は再度入力を要求する。

**例**
```shell
$ cc [ファイル名].c && ./a.out
手を選んでください[0...グー/1...チョキ/2...パー]: 1
あなたはチョキを選びました。
コンピュータはチョキでした。
手を選んでください[0...グー/1...チョキ/2...パー]: 2
あなたはパーを選びました。
コンピュータはグーでした。
あなたの勝ちです。
$
```

```shell
$ cc [ファイル名].c && ./a.out
手を選んでください[0...グー/1...チョキ/2...パー]: 2
あなたはパーを選びました。
コンピュータはチョキでした。
コンピュータの勝ちです。
```