#　このツールについて
ブラウザなどのリンクから、ファイルエクスプローラーで希望のディレクトリを開くことができます。

# Install方法
1. 右上のcode > ダウンロードZIPから、すべてをダウンロードし、Cドライブ直下に解凍してください
![image](https://user-images.githubusercontent.com/54178323/111416704-c5fb7f00-8727-11eb-9a3e-7a6da6550006.png)
2. insrall.regを実行します(管理者権限が必要です)
3. uninstallしたくなったらuninstall.regを実行し、そののちにc:\fb-openを削除してください。

# 使用方法
https://github.com と書くように、リンクをfopen:[PATH_TO_FOLDER]という形で指定します。
例: fbopen:"c:\f15\reference"

# 注意事項
パスに2byte文字(日本語など)を含むことは**できません**
ファイルエクスプローラーは多くのコマンドが実行できるため、**リンクの組み方によってはとてつもなく凶悪な動きをします。**
**絶対に信用できるリンク以外はfbopenリンクを踏まないでください。ブラウザなどによっては、自動で開くなどの設定があるものもあるかもしれませんがそれらの設定は推奨されません**

# 改善予定について
反響が大きければ、パスの日本語対応などは検討しますがリンクの中に仕組まれた悪質なコードの無毒化対策は行う予定がありません。
（というかやり方も思いつきません。少々難しくすることはできますがfileexplorerでかなりコマンドが実行できてしまう以上、決定的な対策の取りようがないのです。それゆえに下手に対策してユーザーを
慢心させるより自己防衛していただきたいという考えです。）