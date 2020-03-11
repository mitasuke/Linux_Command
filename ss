サーバーへの同時接続数を確認したいとき。
ESTABLISH状態であるセッション数を数える（25番ポートへの接続）
ss -anp | grep 受信IP:25 | grep -c ESTAB 
