基本は ls でディレクトリとファイル一覧が確認できる。
# ls ディレクトリ名

よく使うのは ls -la で、名前が . で始まるファイル・ディレクトリも表示される。
# ls -la ディレクトリ名

ディレクトリの中にファイルなどが大量にあると、lsの反応が返ってこない。
そんなときは less を使うと割と表示できるので、ファイル名を確認したい時などに良いかも。
# less ディレクトリ名

ファイルサイズをわかりやすく表示させる時は -h オプションをつける。
# ls -lah
-rw-r--r-- 1 k_mita wheel   202 Jul  5 15:32 apache-playbook.yml
-rw-r--r-- 1 k_mita wheel  8.7M Jul  1 20:46 apache-tomcat-8.0.24.tar.gz
drwxr-xr-x 2 k_mita wheel  4.0K Jul  4 10:20 backup

タイプスタンプ順にソートさせて表示する時は -t オプションをつける。
# ls -laht
-rw------- 1 k_mita k_mita 1.1K Jul 26 10:23 .bash_history
drwx------ 7 k_mita k_mita 4.0K Jul 12 05:53 .
-rw-r--r-- 1 k_mita k_mita    0 Jul 11 14:33 copy

逆順にソートして表示させる時は -r オプションをつける。
# ls -lahtr
-rw-r--r-- 1 k_mita k_mita  124 Mar  4 05:16 .bashrc
-rw-r--r-- 1 k_mita k_mita   18 Mar  4 05:16 .bash_logout
drwxr-xr-x 4 root   root   4.0K Jun 20 15:28 ..


更新が古い順に表示させる時は「ls -lahtr」
更新が新しい順に表示させる時は「ls -laht」
単純に一覧を表示させる時は「ls -lah」
・・・が良いか？
