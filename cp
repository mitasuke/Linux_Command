バックアップ＝作業前に対象ファイルをコピーしておくこと

作業年月日をファイル名に付けてバックアップを取る。
# cp /tmp/test /tmp/test_`date +%Y%m%d`

コピーできてるか確認する。
# ls -la /tmp/
-rw-r--r--  1 root  root       0 Jun 21 14:23 test
-rw-r--r--  1 root  root       0 Jun 21 14:26 test_20150621


-i と -p オプションをつけて使うことが多いと思われる。
-i・・・上書きされるファイルがある場合は確認される
-p・・・オーナー、グループ、パーミッション、タイムスタンプを維持したままコピーする

# cp -ip /tmp/test /tmp/test_`date +%Y%m%d`


ディレクトリごとコピーする時は -r オプションをつける。
# cp -ipr /tmp/testdir /tmp/testdir_2
